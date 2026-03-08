/*
 * XREFs of ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0003CE4
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00039E8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D4D0C (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0003DC4 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 */

__int64 __fastcall bScanFamilyAndFace(
        struct FHOBJ *a1,
        struct FHOBJ *a2,
        struct FHOBJ *a3,
        struct FHOBJ *a4,
        struct EFSOBJ *a5,
        unsigned int a6,
        struct _EFFILTER_INFO *a7,
        unsigned __int16 *a8)
{
  unsigned int v8; // ebx

  v8 = 0;
  if ( bScanFamily(a3, 0, a1, 0, 0LL, 0, a5, a6, a7, a8) )
  {
    if ( *(_QWORD *)(*(_QWORD *)a5 + 40LL) == *(_QWORD *)a5 + 68LL )
      return (unsigned int)bScanFamily(a4, 0, a2, 0, 0LL, 0, a5, a6, a7, a8);
    else
      return 1;
  }
  return v8;
}
