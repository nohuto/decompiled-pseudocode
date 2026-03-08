/*
 * XREFs of ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DD0F0
 * Callers:
 *     ??$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DCB50 (--$AddOrUpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DCE00 (--$PropertyUpdated@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAJIIPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2D_MATRIX_3X2_F>(CResource *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edx
  _QWORD *v8; // r10
  int v9; // r11d
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v8 + 8LL * v7) == v9 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v10) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v15 = *(_QWORD *)(v14 + 32);
    v16 = *(_DWORD *)(v13 + 8 * v12 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v16 + v15) = *(_OWORD *)a4;
    *(_QWORD *)(v16 + v15 + 16) = *(_QWORD *)(a4 + 16);
    v17 = CPropertySet::PropertyUpdated<D2D_MATRIX_3X2_F>(this, v11, 1u, (int *)a4);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v19;
}
