__int64 __fastcall VfDriverEnableVerifier(__int64 a1, PVOID *a2, _DWORD *a3)
{
  int v6; // r15d
  int v7; // ebp
  unsigned int v8; // esi
  int IsVerifierApplicableToImage; // edi
  int IsProtectedDriver; // eax
  __int64 *v11; // rax

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  IsVerifierApplicableToImage = 0;
  VfDriverLock();
  if ( (unsigned int)VfSuspectDriversLookupName(a1 + 24) )
    goto LABEL_24;
  if ( a2 )
    goto LABEL_9;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  a2 = (PVOID *)PsLoadedModuleList;
  v7 = 1;
  while ( 1 )
  {
    if ( a2 == &PsLoadedModuleList )
    {
      a2 = 0LL;
      goto LABEL_17;
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a2 + 11), 1u) )
      break;
    a2 = (PVOID *)*a2;
    ++v8;
  }
  if ( a2 )
  {
LABEL_9:
    if ( (~VerifierModifyableOptions & MmVerifierData) != 0 )
    {
      IsVerifierApplicableToImage = -1073738740;
      goto LABEL_22;
    }
    IsProtectedDriver = VfUtilIsProtectedDriver();
    if ( v7 && (v8 <= 1 || IsProtectedDriver) )
    {
      IsVerifierApplicableToImage = -1073738739;
LABEL_23:
      ExReleaseResourceLite(&PsLoadedModuleResource);
      goto LABEL_24;
    }
    IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a2);
    if ( IsVerifierApplicableToImage < 0 )
      goto LABEL_22;
    v6 = 1;
  }
LABEL_17:
  v11 = (__int64 *)qword_140C36FB8;
  if ( *(__int64 **)qword_140C36FB8 != &VfSuspectDriversList )
    __fastfail(3u);
  *(_QWORD *)a1 = &VfSuspectDriversList;
  *(_QWORD *)(a1 + 8) = v11;
  *v11 = a1;
  qword_140C36FB8 = a1;
  *a3 = 1;
  if ( v6 )
    VfSuspectApplyDifVolatileVerification(a2, a1);
  ++dword_140C138A0;
LABEL_22:
  if ( v7 )
    goto LABEL_23;
LABEL_24:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
