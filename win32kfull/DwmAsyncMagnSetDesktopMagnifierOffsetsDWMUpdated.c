/*
 * XREFs of DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C026F52C
 * Callers:
 *     NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C01DCF40 (NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(PVOID Object, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[20]; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    *(_QWORD *)v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    *(_DWORD *)&v7[8] = 1073741940;
    LODWORD(v6[0]) = 3670032;
    *(_QWORD *)&v7[12] = a2;
    v8 = a3;
    EtwUpdateEvent(0LL, 1073741940LL);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
