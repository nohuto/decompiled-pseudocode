/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01E4C7C
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01E4EE0 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     xxxTouchTargetWindow @ 0x1C01E8238 (xxxTouchTargetWindow.c)
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E579C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C0251870 (TouchTargetingRankForRegion.c)
 */

__int64 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v11; // edi
  __int64 v14; // r8
  BOOL v16; // ebp
  __int64 v17; // rax
  __int128 v18; // xmm6
  int v19; // edx
  int v20; // r13d
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rbp
  unsigned __int16 v25; // ax
  unsigned __int16 *v26; // rdx
  __int64 v28; // rcx
  __int128 v31; // [rsp+50h] [rbp-68h] BYREF
  __int128 v32; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+108h] [rbp+50h]

  v11 = 0;
  v14 = a2;
  v16 = !*(_DWORD *)(a2 + 176) || a7 && !PtInRect(a7, a3);
  v17 = *(_QWORD *)(a1 + 40);
  *a4 = 0;
  v18 = *(_OWORD *)(v17 + 88);
  *(_QWORD *)a5 = 0LL;
  v31 = v18;
  if ( a11 )
    return 1LL;
  v19 = a10;
  v20 = 0;
  if ( (_WORD)a10 != 3 )
  {
    v19 = a8;
    v20 = a9;
  }
  v34 = v19;
  if ( !v16 )
  {
    if ( PtInRect(&v31, a3) )
      goto LABEL_15;
    v19 = v34;
  }
  if ( v20 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
    return 0LL;
  v31 = v18;
  v32 = v18;
  v21 = TouchTargetingRankForRect(&v32, &v31, v14, a7, a5, v19);
  *a4 = v21;
  if ( v21 > 0xFFDu )
    return 0LL;
LABEL_15:
  v22 = *(_QWORD *)(a1 + 40);
  v23 = *(_QWORD *)(v22 + 168);
  if ( v23
    && (v16
     || !(unsigned int)GrePtInRegion(
                         *(_QWORD *)(v22 + 168),
                         (unsigned int)(*(_DWORD *)a5 + a3),
                         (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(a3)))) )
  {
    if ( v20 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v24 = a2;
    v32 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
    v25 = TouchTargetingRankForRegion(v23, (unsigned int)&v32, a2, a5, v34);
    v26 = a4;
    *a4 = v25;
    if ( v25 > 0xFFDu )
      return 0LL;
  }
  else
  {
    v26 = a4;
    v24 = a2;
  }
  v28 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v28 + 26) & 8) != 0 && (!a6 || (*(_DWORD *)(v28 + 232) & 2) == 0) )
  {
    LOBYTE(v11) = (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, v24, a7, v26, a5, a8) != 0;
    return v11;
  }
  return 1LL;
}
