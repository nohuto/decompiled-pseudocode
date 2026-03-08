/*
 * XREFs of ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0003E60
 * Callers:
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C0003DC4 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0003EB0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C014CE5C (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 */

int __fastcall bScanTheList(
        struct FHOBJ *a1,
        int a2,
        struct EFSOBJ *a3,
        unsigned int a4,
        struct _EFFILTER_INFO *a5,
        unsigned __int16 *a6)
{
  int result; // eax
  int v8; // esi

  if ( a6 )
    return FHOBJ::bScanLists(a1, a3, a6, a4, a5);
  v8 = 0;
  if ( a2 == 1 )
  {
    v8 = *((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = 1;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 1;
  }
  result = FHOBJ::bScanLists(a1, a3, a4, a5);
  if ( a2 == 1 )
  {
    *((_DWORD *)a5 + 4) = v8;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 0;
  }
  return result;
}
