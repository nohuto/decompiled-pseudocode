/*
 * XREFs of ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0150304
 * Callers:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C02A1C30 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C02B6CD4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C02A1C30 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 */

struct _QUICKLOOKUP *__fastcall PFEOBJ::pql(struct PFE **this)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)*this + 3) & 0x200) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 13272LL);
    GreAcquireSemaphore(v3);
    *((_DWORD *)*this + 3) &= ~0x200u;
    bComputeQuickLookup(0LL, *this, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
  return (struct PFE *)((char *)*this + 104);
}
