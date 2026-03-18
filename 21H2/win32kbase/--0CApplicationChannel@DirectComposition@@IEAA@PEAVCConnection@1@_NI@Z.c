/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000CCC0
 * Callers:
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0009F64 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C000AA1C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000CE0C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

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
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 264),
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
    0LL);
  *((_BYTE *)this + 480) = v5;
  *((_QWORD *)this + 63) = 8LL;
  *((_QWORD *)this + 197) = (char *)this + 1568;
  *((_QWORD *)this + 196) = (char *)this + 1568;
  *((_QWORD *)this + 199) = (char *)this + 1584;
  *((_QWORD *)this + 198) = (char *)this + 1584;
  *((_QWORD *)this + 201) = (char *)this + 1600;
  *((_QWORD *)this + 200) = (char *)this + 1600;
  *((_QWORD *)this + 195) = (char *)this + 1552;
  *((_QWORD *)this + 194) = (char *)this + 1552;
  *((_BYTE *)this + 1648) = v5;
  *((_QWORD *)this + 204) = (char *)this + 1624;
  *((_QWORD *)this + 203) = (char *)this + 1624;
  *((_DWORD *)this + 434) = v4;
  InitializeSListHead((PSLIST_HEADER)this + 12);
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  return this;
}
