/*
 * XREFs of xxxInitInput @ 0x1C00C1438
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00BEB78 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  __int64 v7; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(v8, 0, 0x3B8uLL);
  v2 = 0;
  v5 = a1;
  Object = (PVOID)CreateKernelEvent(1LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v8, 2LL, &v5) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  UserSessionSwitchLeaveCrit(v3);
  v7 = 952LL;
  if ( (int)LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v8, v8, &v7, 0LL) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(1LL, 0LL);
  LOBYTE(v2) = gptiRit != 0LL;
  return v2;
}
