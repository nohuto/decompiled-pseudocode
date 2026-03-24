/*
 * XREFs of DwmAsyncSetTransition @ 0x1C0123418
 * Callers:
 *     NtUserSetWindowCompositionTransition @ 0x1C01231A0 (NtUserSetWindowCompositionTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncSetTransition(
        PVOID Object,
        __int64 a2,
        int a3,
        _OWORD *a4,
        _OWORD *a5,
        _OWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  unsigned int v10; // ebx
  _QWORD v14[18]; // [rsp+30h] [rbp-A1h] BYREF

  v10 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, 0x88uLL);
    LODWORD(v14[0]) = 8912992;
    WORD2(v14[0]) = 0x8000;
    *(_QWORD *)((char *)&v14[5] + 4) = a2;
    HIDWORD(v14[6]) = a3;
    LODWORD(v14[5]) = 1073741867;
    if ( a4 )
      *(_OWORD *)&v14[7] = *a4;
    if ( a5 )
      *(_OWORD *)&v14[9] = *a5;
    if ( a6 )
      *(_OWORD *)&v14[11] = *a6;
    if ( a7 )
      *(_OWORD *)&v14[13] = *a7;
    if ( a8 )
      *(_OWORD *)&v14[15] = *a8;
    v10 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v10;
}
