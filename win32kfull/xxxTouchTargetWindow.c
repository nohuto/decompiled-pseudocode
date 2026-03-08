/*
 * XREFs of xxxTouchTargetWindow @ 0x1C01E8238
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x1C00A2AE0 (EditionPostDwmSpeedHitTest.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C01E542C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01E4BA8 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01E4C7C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01E5034 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall xxxTouchTargetWindow(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagPOINT *a3,
        int *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned int a7)
{
  _BYTE *v9; // rcx
  unsigned int v12; // edi
  const struct _D3DMATRIX *v13; // rcx
  int Prop; // eax
  unsigned __int64 v15; // r8
  unsigned int v16; // r14d
  const struct _D3DMATRIX *v17; // rcx

  v9 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v9[31] & 0x10) == 0 || (v9[26] & 8) != 0 && (v9[24] & 0x20) != 0 )
    return 0LL;
  v12 = 1;
  if ( a7 )
  {
    if ( !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)a1) )
    {
      v13 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
      if ( v13 )
        ApplyWindowTransform(v13, a3, a2, 1);
      goto LABEL_8;
    }
    return 0LL;
  }
LABEL_8:
  Prop = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1u);
  v15 = (unsigned __int64)*a3;
  *a4 = Prop;
  v16 = BasicTargetingHitTest((__int64)a1, (__int64)a2, v15, a5, a6, a7, 0LL, 4, 1, Prop, 0);
  if ( !v16 || *a5 )
    v12 = 0;
  ClipContact(a1, (struct tagTOUCHTARGETINGCONTACT *)a2, v12, 0LL);
  if ( a7 )
  {
    v17 = (const struct _D3DMATRIX *)*((_QWORD *)a1 + 27);
    if ( v17 )
      ApplyWindowTransform(v17, 0LL, a2, 0);
  }
  return v16;
}
