DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // esi
  char v5; // di
  char v6; // al
  char v7; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v4 = a4;
  v5 = a3;
  v6 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 2) = 1;
  v7 = a3 | v6;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = v7;
  if ( (v7 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)a2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess(this, a2, a3, a4);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 64) = v5;
  *((_QWORD *)this + 11) = 8LL;
  *((_BYTE *)this + 120) = v5;
  *((_QWORD *)this + 18) = 8LL;
  *((_BYTE *)this + 241) = (UserIsCurrentProcessDwm(v10, v9, v11, v12) ? 0x20 : 0) | *((_BYTE *)this + 241) & 0xDF;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 264),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  *((_BYTE *)this + 488) = v5;
  *((_QWORD *)this + 64) = 8LL;
  *((_BYTE *)this + 2616) = v5;
  *((_QWORD *)this + 325) = (char *)this + 2592;
  *((_QWORD *)this + 324) = (char *)this + 2592;
  *((_DWORD *)this + 678) = v4;
  InitializeSListHead((PSLIST_HEADER)this + 12);
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  return this;
}
