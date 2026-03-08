/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4
 * Callers:
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x18001C65C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ??$PropertyUpdated@UD2DVector2@@@CPropertySet@@AEAAJIIPEBUD2DVector2@@@Z @ 0x18001E5E4 (--$PropertyUpdated@UD2DVector2@@@CPropertySet@@AEAAJIIPEBUD2DVector2@@@Z.c)
 *     ??$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z @ 0x18001EA2C (--$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180095F78 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800960A0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DCE00 (--$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x1800DD3F8 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800DD7F4 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z @ 0x1800DDD04 (--$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z.c)
 *     ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1800FB12C (-NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z.c)
 *     ??$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z @ 0x180249114 (--$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z.c)
 * Callees:
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x18001F99C (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180097C48 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097C88 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180098BA8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r9
  _QWORD *v6; // r10
  CPropertyChangeResource *v7; // r11
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  __int128 *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // r9d
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r9
  _QWORD *v28; // r10
  CPropertyChangeResource *v29; // r11
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // r9
  _QWORD *v33; // r10
  CPropertyChangeResource *v34; // r11
  __int64 v35; // rcx
  unsigned int v36; // edx
  __int64 v37; // r9
  _QWORD *v38; // r10
  CPropertyChangeResource *v39; // r11
  __int64 v40; // rcx
  __int64 v41; // r9
  _QWORD *v42; // r10
  __int64 v43; // r11
  __int64 v44; // rbx
  int v45; // ecx
  double v46; // xmm0_8
  __int64 v47; // rdx
  __int64 v48; // r10
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v52; // [rsp+20h] [rbp-58h]
  __int16 v53; // [rsp+20h] [rbp-58h]
  __int16 v54; // [rsp+20h] [rbp-58h]
  int v55; // [rsp+30h] [rbp-48h]
  int v56; // [rsp+30h] [rbp-48h]
  __int64 v57; // [rsp+40h] [rbp-38h] BYREF
  __int64 v58; // [rsp+48h] [rbp-30h]
  __int128 v59; // [rsp+50h] [rbp-28h] BYREF
  __int64 v60; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  if ( a3 == 18 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v40) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v44 = *(_QWORD *)(v43 + 48);
    if ( !v44 )
      return 0;
    if ( !*(_DWORD *)(v44 + 76) )
      return 0;
    if ( !*(_DWORD *)(v43 + 64) )
      return 0;
    v45 = *(_DWORD *)(v43 + 72);
    if ( !_bittest(&v45, v41) )
      return 0;
    v46 = *(float *)((*(_DWORD *)(*v42 + 8 * v41 + 4) & 0x1FFFFFFF) + v42[4]);
    v47 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 1240LL);
    v57 = *(unsigned int *)(v44 + 76);
    v48 = *(_QWORD *)(v47 + 40);
    v56 = v41;
    v58 = *(unsigned int *)(v43 + 64);
    v54 = 0;
    v49 = CoreUICallSend(v48, &v57, 2LL, 14LL, v54, &unk_180339465, v56, *(_QWORD *)&v46);
    v10 = v49;
    if ( v49 == -2018375675 || v49 >= 0 )
      return 0;
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0xC6u, 0LL);
    v52 = 557;
  }
  else
  {
    switch ( a3 )
    {
      case '#':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v35) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector2PropertyChanged(
               v39,
               v36,
               (const struct D2DVector2 *)(v38[4] + (*(_DWORD *)(*v38 + 8 * v37 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v52 = 560;
          goto LABEL_33;
        }
        return 0;
      case '4':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v30) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(
               v34,
               v31,
               (const struct D2DVector3 *)(v33[4] + (*(_DWORD *)(*v33 + 8 * v32 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v52 = 563;
          goto LABEL_33;
        }
        return 0;
      case 'E':
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v25) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyVector4PropertyChanged(
               v29,
               v26,
               (const struct D2DVector4 *)(v28[4] + (*(_DWORD *)(*v28 + 8 * v27 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v52 = 566;
          goto LABEL_33;
        }
        return 0;
    }
    if ( a3 != 104 )
    {
      if ( a3 == 265 )
      {
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v3) )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        v8 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
               v7,
               v4,
               (const struct D2DMatrix *)(v6[4] + (*(_DWORD *)(*v6 + 8 * v5 + 4) & 0x1FFFFFFF)));
        v10 = v8;
        if ( v8 < 0 )
        {
          v52 = 576;
LABEL_33:
          v24 = v8;
          goto LABEL_34;
        }
      }
      return 0;
    }
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 88) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v15 = (__int128 *)(v12[4] + (*(_DWORD *)(*v12 + 8 * v13 + 4) & 0x1FFFFFFF));
    v16 = *(_QWORD *)(v14 + 48);
    if ( !v16 )
      return 0;
    if ( !*(_DWORD *)(v16 + 76) )
      return 0;
    if ( !*(_DWORD *)(v14 + 64) )
      return 0;
    v17 = *(_DWORD *)(v14 + 72);
    if ( !_bittest(&v17, v13) )
      return 0;
    v18 = *v15;
    v19 = *((_QWORD *)v15 + 2);
    v55 = v13;
    v20 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1240LL);
    v57 = *(unsigned int *)(v16 + 76);
    v21 = *(_QWORD *)(v20 + 40);
    v58 = *(unsigned int *)(v14 + 64);
    v59 = v18;
    v60 = v19;
    v53 = 7;
    v22 = CoreUICallSend(v21, &v57, 2LL, 14LL, v53, &unk_18033948B, v55, &v59);
    v10 = v22;
    if ( v22 == -2018375675 || v22 >= 0 )
      return 0;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1FBu, 0LL);
    v52 = 573;
  }
  v24 = v10;
LABEL_34:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v24, v52, 0LL);
  return v10;
}
