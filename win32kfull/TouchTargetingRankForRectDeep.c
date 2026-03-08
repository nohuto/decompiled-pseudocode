/*
 * XREFs of TouchTargetingRankForRectDeep @ 0x1C025169C
 * Callers:
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E579C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C02504C0 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C025076C (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingRank @ 0x1C02510D8 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C0251998 (TouchTargetingSnapToSegment.c)
 */

__int64 __fastcall TouchTargetingRankForRectDeep(_OWORD *a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  __int128 v5; // xmm0
  _DWORD *v8; // rdi
  unsigned __int16 v9; // r12
  struct tagPOINT v10; // rcx
  int v11; // esi
  int v12; // r14d
  int v13; // ebx
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  int v18; // ebx
  struct tagPOINT v20; // [rsp+30h] [rbp-40h] BYREF
  _DWORD *v21; // [rsp+38h] [rbp-38h]
  struct tagPOINT v22; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v23; // [rsp+48h] [rbp-28h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF

  v5 = *a1;
  v8 = a1;
  v21 = a1;
  v9 = 4094;
  v23 = 0LL;
  v24 = v5;
  v22 = 0LL;
  if ( *(_DWORD *)(a2 + 180)
    && (!a3 || (unsigned int)IntersectRect(&v24, (int *)&v24, a3))
    && (_DWORD)v24 != DWORD2(v24)
    && DWORD1(v24) != HIDWORD(v24) )
  {
    v10 = *(struct tagPOINT *)(a2 + 32);
    v20.x = *(_DWORD *)(a2 + 32) + *a4;
    v20.y = a4[1] + *(_DWORD *)(a2 + 36);
    if ( (unsigned int)_TTIntersectLine(v10, v20, (const struct tagTOUCHTARGETINGCONTACT *)a2, &v23, &v22) )
    {
      v20 = 0LL;
      if ( !a5 )
      {
        v11 = *(_DWORD *)(a2 + 184);
        v12 = *(_DWORD *)(a2 + 32);
        _TTLimitDeepTargetingPoint(v12, v11, (int *)&v23);
        v13 = *(_DWORD *)(a2 + 188);
        v14 = *(_DWORD *)(a2 + 36);
        _TTLimitDeepTargetingPoint(v14, v13, &v23.y);
        _TTLimitDeepTargetingPoint(v12, v11, (int *)&v22);
        _TTLimitDeepTargetingPoint(v14, v13, &v22.y);
        v8 = v21;
      }
      LODWORD(v21) = (*v8 + v8[2]) / 2;
      HIDWORD(v21) = (v8[1] + v8[3]) / 2;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingSnapToSegment)(v23, v22, v21, &v20);
      v15 = (__int64)v20;
      if ( PtInRect(&v24, *(_QWORD *)&v20) )
      {
        v16 = *(_QWORD *)(a2 + 32);
        v24 = *(_OWORD *)v8;
        v17 = TouchTargetingRank(v16, v15, &v24, (__int64)v21);
        v18 = v15 - *(_DWORD *)(a2 + 32);
        v9 = v17;
        a4[1] = v20.y - *(_DWORD *)(a2 + 36);
        *a4 = v18;
      }
    }
  }
  return v9;
}
