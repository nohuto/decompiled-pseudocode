/*
 * XREFs of ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C00E2A70
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00E2784 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFntCacheNewLink @ 0x1C0285C74 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(unsigned int a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( qword_1C0335DA8 && a1 )
  {
    if ( (dword_1C0335DA0 & 2) != 0 )
    {
      v4 = SearchFntCacheNewLink(a1);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 4) )
          *(_DWORD *)(v4 + 24) |= 1u;
        else
          *(_DWORD *)(v4 + 4) = a2;
        *(_DWORD *)(qword_1C0335DA8 + 20) = 1;
      }
    }
    else
    {
      *(_DWORD *)(qword_1C0335DA8 + 16) |= 2u;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
