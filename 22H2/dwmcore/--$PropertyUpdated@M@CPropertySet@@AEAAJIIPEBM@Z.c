/*
 * XREFs of ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180096148
 * Callers:
 *     ??$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800DD430 (--$AddProperty@M@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 *     ??$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z @ 0x1800DD9D0 (--$UpdateProperty@M@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBM@Z.c)
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180096994 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x180096E88 (--$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098F64 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E30D8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<float>(CResource *this, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))*((_QWORD *)this + 10);
    v13 = *(_DWORD *)(*v11 + 8 * v4);
    if ( v12 && (v14 = (**v12)(v12, v10, v13), v9 = v14, v14 < 0) )
    {
      v17 = 455;
    }
    else
    {
      CResource::InvalidateAnimationSources(this, v4);
      CPropertySet::LogValueUpdate<float>((_DWORD)this, v4, v13, a3, a4);
      v14 = CPropertySet::NotifyPropertyValue(this, (unsigned int)v4, v13);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      v17 = 474;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v17, 0LL);
    return v9;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x1BBu, 0LL);
  return v9;
}
