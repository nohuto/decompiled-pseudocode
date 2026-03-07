LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, char a2, int a3)
{
  int v6; // ebp
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  int inited; // eax
  __int64 *v11; // rax
  LONG result; // eax

  v6 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_42;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 || (VfRuleClasses & 0x800000000LL) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_42;
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
        goto LABEL_42;
      goto LABEL_40;
    }
  }
  if ( KernelVerifier )
  {
    if ( a3 )
      goto LABEL_36;
    inited = ViForceAllDriversSuspect;
  }
  else
  {
    if ( ViVerifyAllDrivers == 1 )
      goto LABEL_36;
    inited = VfInitPickCurrentRandomTarget();
  }
  if ( !inited )
    goto LABEL_42;
LABEL_36:
  k = VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
  if ( !k )
    goto LABEL_42;
  v11 = (__int64 *)qword_140C36FB8;
  if ( *(__int64 **)qword_140C36FB8 != &VfSuspectDriversList )
    __fastfail(3u);
  *(_QWORD *)k = &VfSuspectDriversList;
  *(_QWORD *)(k + 8) = v11;
  *v11 = k;
  qword_140C36FB8 = k;
LABEL_40:
  v6 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), a2, k);
  if ( v6 )
  {
    v6 = VfThunkApplyThunksCurrentSession(a1);
    VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 0);
    ++dword_140C13854;
    ++*(_DWORD *)(k + 16);
    CarLoadImageHandler(a1);
    VfCheckImageCompliance(a1);
  }
LABEL_42:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v6 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
