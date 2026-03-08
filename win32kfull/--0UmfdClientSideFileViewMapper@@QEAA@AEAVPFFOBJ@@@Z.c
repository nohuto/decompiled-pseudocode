/*
 * XREFs of ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C02A0ACC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00B7C2C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0115D54 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x1C02B8A34 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 */

UmfdClientSideFileViewMapper *__fastcall UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        UmfdClientSideFileViewMapper *this,
        struct PFFOBJ *a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // r8d
  __int64 v5; // rdx
  bool v6; // al
  __int64 v7; // r9

  v2 = *(_OWORD *)a2;
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)this = v2;
  v4 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = 1;
    while ( v6 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * v5);
      v6 = (*(_DWORD *)(v7 + 40) & 0x10) != 0 && !*(_QWORD *)(v7 + 48);
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
      {
        if ( v6 )
          *((_DWORD *)this + 4) = UmfdClientSideFileViewMapper::TryMapAllFileViews(this);
        return this;
      }
    }
  }
  return this;
}
