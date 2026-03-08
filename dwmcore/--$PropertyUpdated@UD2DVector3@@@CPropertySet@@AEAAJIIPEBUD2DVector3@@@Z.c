/*
 * XREFs of ??$PropertyUpdated@UD2DVector3@@@CPropertySet@@AEAAJIIPEBUD2DVector3@@@Z @ 0x1800DDD04
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800DDA1C (--$AddProperty@UD2DVector3@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x1800DDBF8 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$LogValueUpdate@UD2DVector3@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVector3@@@Z @ 0x1800DDE24 (--$LogValueUpdate@UD2DVector3@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<D2DVector3>(CResource *this, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v13; // ebp
  int v14; // eax
  __int64 v15; // rcx
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
      CPropertySet::LogValueUpdate<D2DVector3>((_DWORD)this, v4, v13, a3, a4);
      v14 = CPropertySet::NotifyPropertyValue((__int64)this, (unsigned int)v4, v13);
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
