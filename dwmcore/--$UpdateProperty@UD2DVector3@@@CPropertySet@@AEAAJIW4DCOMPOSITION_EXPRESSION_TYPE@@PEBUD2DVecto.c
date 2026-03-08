/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800DDBF8
 * Callers:
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800960A0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBUD2DVector3@@@Z @ 0x1800DD948 (--$AddOrUpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVAL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z @ 0x1800DDD04 (--$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(CResource *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v6 + 8 * v8) == v7 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v9) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v13 = *(_QWORD *)(v10 + 32);
    v14 = *(_DWORD *)(v11 + 8 * v12 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v14 + v13) = *(_QWORD *)a4;
    *(_DWORD *)(v14 + v13 + 8) = *(_DWORD *)(a4 + 8);
    v15 = CPropertySet::PropertyUpdated<D2DVector3>(this, v12);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v17;
}
