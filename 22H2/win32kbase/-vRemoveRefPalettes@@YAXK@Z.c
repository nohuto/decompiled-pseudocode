/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0033C08
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0018F50 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  HPALETTE v5; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v5);
    if ( !v2 )
      break;
    if ( (BYTE2(v5) & 0x1F) == 8 )
    {
      v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v3) + 24) + 40LL);
      EngAcquireSemaphore(v6);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v5);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
        if ( v4 )
          HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v6);
    }
  }
}
