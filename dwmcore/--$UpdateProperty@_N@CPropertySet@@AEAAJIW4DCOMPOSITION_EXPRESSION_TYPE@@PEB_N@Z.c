/*
 * XREFs of ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x180249534
 * Callers:
 *     ??$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z @ 0x18001E78C (--$AddOrUpdateProperty@_N@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEB_N@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800960A0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z @ 0x18001EA2C (--$PropertyUpdated@_N@CPropertySet@@AEAAJIIPEB_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::UpdateProperty<bool>(CResource *this, unsigned int a2, __int64 a3, _BYTE *a4)
{
  _QWORD *v6; // rcx
  unsigned int v7; // r10d
  unsigned int v8; // edx
  int v9; // r8d
  __int64 v10; // r10
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)this + 88, a2) )
    goto LABEL_9;
  if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v6, v7) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v6 + 8 * v10) == v9 )
  {
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((__int64)v6, v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v12, v11) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_BYTE *)((*(_DWORD *)(v14 + 8 * v15 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v13 + 32)) = *a4;
    v16 = CPropertySet::PropertyUpdated<bool>(this, v15, 1, (__int64)a4);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v18;
}
