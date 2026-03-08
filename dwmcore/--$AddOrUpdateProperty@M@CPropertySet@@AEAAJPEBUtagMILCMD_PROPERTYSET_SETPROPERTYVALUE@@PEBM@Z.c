/*
 * XREFs of ??$AddOrUpdateProperty@M@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBM@Z @ 0x1800DC8AC
 * Callers:
 *     ?ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBXI@Z @ 0x1800DC724 (-ProcessSetPropertyValue@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETPRO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800DC980 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800DCF20 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddOrUpdateProperty<float>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r10
  CResource *v7; // r11
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<float>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v10 = 326;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, v10, 0LL);
      return v5;
    }
    return 0;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 88) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v8 = *(unsigned int *)(v6 + 8);
  if ( *(_DWORD *)(v6 + 12) == (*(_DWORD *)(*((_QWORD *)v7 + 11) + 8 * v8 + 4) & 0x1FFFFFFF) )
  {
    updated = CPropertySet::UpdateProperty<float>(v7);
    v5 = updated;
    if ( updated < 0 )
    {
      v10 = 336;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x14Du, 0LL);
  return v5;
}
