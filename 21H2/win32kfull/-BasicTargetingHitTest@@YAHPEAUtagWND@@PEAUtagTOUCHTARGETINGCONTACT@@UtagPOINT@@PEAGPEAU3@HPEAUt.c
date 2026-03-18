/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C020440C
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C0204664 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205078 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     TouchTargetingRankForRect @ 0x1C025CA20 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C025D124 (TouchTargetingRankForRegion.c)
 */

_BOOL8 __fastcall BasicTargetingHitTest(
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
  __int64 v13; // r9
  int v16; // ebp
  __int64 v17; // rax
  __int128 v18; // xmm6
  int v19; // edx
  int v20; // r12d
  unsigned __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int16 v24; // ax
  unsigned __int16 *v25; // rdx
  __int64 v26; // rcx
  __int128 v29; // [rsp+50h] [rbp-68h] BYREF
  __int128 v30; // [rsp+60h] [rbp-58h] BYREF
  int v32; // [rsp+108h] [rbp+50h]

  v13 = 0LL;
  if ( *(_DWORD *)(a2 + 176) && (!a7 || PtInRect(a7, a3)) )
    v16 = v13;
  else
    v16 = 1;
  v17 = *(_QWORD *)(a1 + 40);
  *a4 = v13;
  v18 = *(_OWORD *)(v17 + 88);
  *(_QWORD *)a5 = v13;
  v29 = v18;
  if ( a11 != (_DWORD)v13 )
    return 1LL;
  v19 = a10;
  v20 = v13;
  if ( (_WORD)a10 != 3 )
  {
    v19 = a8;
    v20 = a9;
  }
  v32 = v19;
  if ( v16 )
    goto LABEL_12;
  if ( !PtInRect(&v29, a3) )
  {
    v19 = v32;
LABEL_12:
    if ( v20 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v29 = v18;
    v30 = v18;
    v21 = TouchTargetingRankForRect(&v30, &v29, a2, a7, a5, v19);
    *a4 = v21;
    if ( v21 > 0xFFDu )
      return 0LL;
  }
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
    v30 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
    v24 = TouchTargetingRankForRegion(v23, (unsigned int)&v30, a2, a5, v32);
    v25 = a4;
    *a4 = v24;
    if ( v24 > 0xFFDu )
      return 0LL;
  }
  else
  {
    v25 = a4;
  }
  v26 = *(_QWORD *)(a1 + 40);
  return (*(_BYTE *)(v26 + 26) & 8) == 0
      || a6 && (*(_DWORD *)(v26 + 232) & 2) != 0
      || (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, a2, a7, v25, a5, a8);
}
