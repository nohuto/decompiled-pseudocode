/*
 * XREFs of DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C02745CC
 * Callers:
 *     NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C02023F0 (NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[20]; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = -1073741823;
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    *(_QWORD *)v8 = 0LL;
    WORD2(v7[0]) = 0x8000;
    *(_DWORD *)&v8[8] = 1073741933;
    LODWORD(v7[0]) = 3670032;
    *(_QWORD *)&v8[12] = a2;
    v9 = a3;
    EtwUpdateEvent(0LL, 1073741933LL, a3, a4);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
