/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800DE0D0
 * Callers:
 *     ??$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERTYVALUE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800DDFFC (--$AddOrUpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJPEBUtagMILCMD_PROPERTYSET_SETPROPERT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800DE1C0 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800DE2A4 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801E30D8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::AddProperty<_D3DCOLORVALUE>(
        CResource *this,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v6 = (_QWORD *)((char *)this + 88);
  v9 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<_D3DCOLORVALUE>(
         (char *)this + 88,
         a4,
         a5,
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 366;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( v16 != (_DWORD)v5 || (*(_DWORD *)(*v6 + 8 * v5 + 4) & 0x1FFFFFFF) != a3 )
  {
    v11 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0x175u, 0LL);
    return v11;
  }
  v9 = CPropertySet::PropertyUpdated<_D3DCOLORVALUE>(this, v5);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 377;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14, 0LL);
    return v11;
  }
  return 0;
}
