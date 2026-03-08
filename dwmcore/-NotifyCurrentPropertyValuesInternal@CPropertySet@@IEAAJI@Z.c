/*
 * XREFs of ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1800FB12C
 * Callers:
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1800FB120 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801DFDD8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValuesInternal(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  bool i; // zf
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v3 = a2;
  for ( i = a2 == 0; !i; i = v3 == 0 )
  {
    if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 28) )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v7 = CPropertySet::NotifyPropertyValue((__int64)this, v6, *(_DWORD *)(*((_QWORD *)this + 11) + 8 * v2));
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Bu, 0LL);
        return 0LL;
      }
    }
    v2 = (unsigned int)(v2 + 1);
    v3 >>= 1;
  }
  return 0LL;
}
