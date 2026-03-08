/*
 * XREFs of DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C026F77C
 * Callers:
 *     NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C01DCD30 (NtUserSetFullscreenMagnifierOffsetsDWMUpdated.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(
        PVOID Object,
        __int64 a2,
        int a3,
        float a4,
        int a5)
{
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-88h] BYREF
  __int16 v11; // [rsp+24h] [rbp-84h]
  int v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+4Ch] [rbp-5Ch]
  int v14; // [rsp+54h] [rbp-54h]
  float v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+5Ch] [rbp-4Ch]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v16 = a5;
    v11 = 0x8000;
    v12 = 1073741941;
    v15 = a4;
    v10 = 4194328;
    v13 = a2;
    v14 = a3;
    EtwUpdateEvent(0LL, 1073741941LL);
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
