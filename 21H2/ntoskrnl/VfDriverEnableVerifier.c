/*
 * XREFs of VfDriverEnableVerifier @ 0x1409C9620
 * Callers:
 *     MmEnableVerifierForDriver @ 0x1409C6BB4 (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C97B8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C (MmRemoveImportOptimizationForDriverVerifier.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     VfDriverLoadImage @ 0x1409C3090 (VfDriverLoadImage.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C3574 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x1409C35B8 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409C788C (VfUtilIsProtectedDriver.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r14
  int v5; // r12d
  int v6; // r15d
  unsigned int v7; // ebp
  int v8; // ebx
  PVOID *v9; // rsi
  __int64 *v10; // rax

  *a3 = 0;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  if ( ViSuspectDriversLookupEntry((PCUNICODE_STRING)(v4 + 24)) )
    goto LABEL_23;
  if ( !a2 )
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v9 = (PVOID *)PsLoadedModuleList;
    v6 = 1;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_7;
    do
    {
      a2 = (__int64)v9;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 24), (PCUNICODE_STRING)(v9 + 11), 1u) )
        break;
      v9 = (PVOID *)*v9;
      ++v7;
    }
    while ( v9 != &PsLoadedModuleList );
    v4 = a1;
    if ( v9 == &PsLoadedModuleList )
LABEL_7:
      a2 = 0LL;
    if ( !a2 )
      goto LABEL_16;
  }
  if ( (~VerifierModifyableOptions & MmVerifierData) != 0
    || v6 && (v7 <= 1 || (unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(a2 + 88))) )
  {
    v8 = -1073741554;
  }
  else
  {
    v8 = MmRemoveImportOptimizationForDriverVerifier(a2);
    if ( v8 >= 0 )
    {
      v5 = 1;
LABEL_16:
      v10 = (__int64 *)qword_140C1D4F8;
      if ( *(__int64 **)qword_140C1D4F8 != &VfSuspectDriversList )
        __fastfail(3u);
      *(_QWORD *)(v4 + 8) = qword_140C1D4F8;
      *(_QWORD *)v4 = &VfSuspectDriversList;
      *v10 = v4;
      qword_140C1D4F8 = v4;
      *a3 = 1;
      if ( v5 )
        VfDriverLoadImage(a2, v4, 0, 1u);
      ++dword_140C2A918;
    }
  }
  if ( v6 )
    ExReleaseResourceLite(&PsLoadedModuleResource);
LABEL_23:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v8;
}
