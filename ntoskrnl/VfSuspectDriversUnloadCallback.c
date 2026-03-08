/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x140AD7AB4
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABA284 (VfDriverUnloadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfUtilPrintCheckinString @ 0x140ABF804 (VfUtilPrintCheckinString.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     ViSuspectDriversLookupEntry @ 0x140AD7CE0 (ViSuspectDriversLookupEntry.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  VfDriverLock();
  v2 = (UNICODE_STRING *)(a1 + 88);
  if ( RtlEqualUnicodeString(&VfTcpIpName, v2, 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, v2, 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, v2, 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, v2, 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, v2, 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, v2, 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  v3 = (_QWORD *)ViSuspectDriversLookupEntry(v2);
  if ( v3 )
  {
    ++dword_140C13858;
    if ( VfDifRunningWithoutReboot )
    {
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      ExFreePoolWithTag(v3, 0x44536656u);
    }
    else
    {
      ++*((_DWORD *)v3 + 5);
      VfUtilPrintCheckinString(&v2->Length, 1);
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
