/*
 * XREFs of WinSqmEndSession @ 0x1C00B73BC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C00B7458 (-UnregisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventEnabled @ 0x1C00B75B4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C00B760C (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS WinSqmEndSession()
{
  char *v0; // rbx
  int v1; // esi
  NTSTATUS result; // eax
  char *v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v0 = (char *)gSqmSession;
  v1 = 0;
  UserData = 0LL;
  result = (_DWORD)gSqmSession - 1;
  v5 = 0LL;
  if ( (unsigned __int64)&gSqmSession[-1].Data4[7] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(gSqmSession) )
    {
      v3 = v0 + 24;
      v1 = 1;
    }
    else
    {
      v3 = v0;
    }
    result = WinSqmEventEnabled(&SQM_END_SESSION, v3);
    if ( result )
    {
      UserData.Reserved = 0;
      *(_QWORD *)&v5 = &unk_1C029A528;
      UserData.Ptr = (ULONGLONG)v3;
      UserData.Size = 16;
      *((_QWORD *)&v5 + 1) = 4LL;
      result = WinSqmEventWrite(&SQM_END_SESSION, 2u, &UserData);
    }
    if ( v1 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v0);
      return UnregisterWinSqmProvider();
    }
  }
  return result;
}
