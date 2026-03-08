/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006C084
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C002D3CC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     HmgNextOwned @ 0x1C006DD80 (HmgNextOwned.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00D0240 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int *v4; // [rsp+38h] [rbp+10h] BYREF
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
      SEMOBJ::vUnlock((PERESOURCE *)&v6);
    }
  }
}
