/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x140A9ACE0
 * Callers:
 *     VfDriverUnloadImage @ 0x140A7C248 (VfDriverUnloadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfUtilPrintCheckinString @ 0x140A81E94 (VfUtilPrintCheckinString.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfNotifyVerifierExtensions @ 0x140A89F08 (VfNotifyVerifierExtensions.c)
 *     ViSuspectDriversLookupEntry @ 0x140A9AF40 (ViSuspectDriversLookupEntry.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  VfDriverLock();
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  v2 = (_QWORD *)ViSuspectDriversLookupEntry((PCUNICODE_STRING)(a1 + 88));
  if ( v2 )
  {
    ++dword_140C29FF8;
    VfNotifyVerifierExtensions(2, a1);
    if ( VfDifRunningWithoutReboot )
    {
      v3 = *v2;
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      ExFreePoolWithTag(v2, 0x44536656u);
    }
    else
    {
      ++*((_DWORD *)v2 + 5);
      VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 1);
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
