/*
 * XREFs of ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021ACB8
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C31C (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021A548 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021B69C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxAdvise(unsigned int *a1, void **a2, struct tagDDECONV **a3)
{
  void **v4; // r14
  void *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  struct tagINTDDEINFO *v9; // rdi
  void *v10; // rax
  struct tagINTDDEINFO *v12; // [rsp+30h] [rbp-28h] BYREF
  void *v13; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 25, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v6 = *v4;
  v14 = 129;
  v7 = xxxCopyDdeIn(v6, &v14, &v13, &v12);
  v8 = _HMPheFromObject(a3);
  v9 = v12;
  if ( (*(_BYTE *)(v8 + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( !v12 )
      return v7;
    Win32FreePool(v12);
  }
  if ( v7 == 2 )
  {
    *a1 |= 0x80000000;
    v10 = AnticipatePost(
            a3[4],
            (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseAck,
            v13,
            0LL,
            v9,
            v14);
    *v4 = v10;
    if ( !v10 )
      return 3;
  }
  return v7;
}
