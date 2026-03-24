/*
 * XREFs of ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x18001F85C
 * Callers:
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x18001F850 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BCF70 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x18018066C (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValuesInternal(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  bool i; // zf
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v3 = a2;
  for ( i = a2 == 0; !i; i = v3 == 0 )
  {
    if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 26) )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 80) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v7 = CPropertySet::NotifyPropertyValue(this, v6, *(unsigned int *)(*((_QWORD *)this + 10) + 8 * v2));
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Eu, 0LL);
        return 0LL;
      }
    }
    v2 = (unsigned int)(v2 + 1);
    v3 >>= 1;
  }
  return 0LL;
}
