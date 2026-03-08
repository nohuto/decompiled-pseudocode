/*
 * XREFs of ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x180249234
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800960A0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DQuaternion@@@Z @ 0x180248968 (--$AddOrUpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTY.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ??$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z @ 0x180249114 (--$PropertyUpdated@UD2DQuaternion@@@CPropertySet@@AEAAJIIPEBUD2DQuaternion@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DQuaternion>(CResource *this, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // edx
  _QWORD *v9; // r10
  int v10; // r11d
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 88, a2) )
    goto LABEL_9;
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v9 + 8LL * v8) == v10 )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v7, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_OWORD *)((*(_DWORD *)(v15 + 8 * v14 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v16 + 32)) = *(_OWORD *)a4;
    v17 = CPropertySet::PropertyUpdated<D2DQuaternion>(this, v13, 1u, a4);
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v19;
}
