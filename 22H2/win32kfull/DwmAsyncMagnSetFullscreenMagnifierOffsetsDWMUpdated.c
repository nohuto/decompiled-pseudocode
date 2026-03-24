/*
 * XREFs of DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C027423C
 * Callers:
 *     NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C0201A70 (NtUserSetFullscreenMagnifierOffsetsDWMUpdated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(
        PVOID Object,
        __int64 a2,
        int a3,
        float a4,
        int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v12[16]; // [rsp+20h] [rbp-88h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v12, 0, sizeof(v12));
    v12[15] = a5;
    LOWORD(v12[1]) = 0x8000;
    v12[10] = 1073741934;
    *(float *)&v12[14] = a4;
    v12[0] = 4194328;
    *(_QWORD *)&v12[11] = a2;
    v12[13] = a3;
    EtwUpdateEvent(0LL, 1073741934LL, v9, v10);
    v8 = LpcRequestPort(Object, v12);
    ObfDereferenceObject(Object);
  }
  return v8;
}
