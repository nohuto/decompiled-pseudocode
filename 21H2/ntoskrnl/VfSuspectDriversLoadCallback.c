/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x140A9A8F8
 * Callers:
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x1402D8104 (VfTargetDriversAdd.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     CarLoadImageHandler @ 0x140602F2C (CarLoadImageHandler.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 *     VfCheckImageCompliance @ 0x140A82B0C (VfCheckImageCompliance.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfNotifyVerifierExtensions @ 0x140A89F08 (VfNotifyVerifierExtensions.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140A93724 (VfThunkApplyThunksCurrentSession.c)
 *     VfSuspectDriversAllocateEntry @ 0x140A9A588 (VfSuspectDriversAllocateEntry.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, char a2, int a3)
{
  int v6; // ebp
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  __int64 *v10; // rax
  LONG result; // eax

  v6 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_44;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 || (VfRuleClasses & 0x800000000LL) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_44;
    }
  }
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  for ( k = VfSuspectDriversList; (__int64 *)k != &VfSuspectDriversList; k = *(_QWORD *)k )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(k + 24), (PCUNICODE_STRING)(a1 + 88), 1u) )
    {
      if ( !k )
        goto LABEL_44;
      goto LABEL_42;
    }
  }
  if ( KernelVerifier )
  {
    if ( !a3 && !ViForceAllDriversSuspect )
      goto LABEL_44;
  }
  else if ( ViVerifyAllDrivers != 1 )
  {
    if ( !VfRandomVerifiedDrivers )
      goto LABEL_44;
    if ( !_bittest((const signed __int32 *)qword_140D576E8, ++ViLoadedDriversCount) )
      goto LABEL_44;
    --VfRandomVerifiedDrivers;
  }
  k = VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
  if ( !k )
    goto LABEL_44;
  v10 = (__int64 *)qword_140C1B2C8;
  if ( *(__int64 **)qword_140C1B2C8 != &VfSuspectDriversList )
    __fastfail(3u);
  *(_QWORD *)k = &VfSuspectDriversList;
  *(_QWORD *)(k + 8) = v10;
  *v10 = k;
  qword_140C1B2C8 = k;
LABEL_42:
  v6 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), a2, k);
  if ( v6 )
  {
    v6 = VfThunkApplyThunksCurrentSession(a1);
    VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 0);
    ++dword_140C29FF4;
    ++*(_DWORD *)(k + 16);
    CarLoadImageHandler(a1);
    VfNotifyVerifierExtensions(1, a1);
    VfCheckImageCompliance(a1);
  }
LABEL_44:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v6 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
