/*
 * XREFs of ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C009EE30
 * Callers:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00997C0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C009D9E0 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C009EF04 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00A2E84 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00FEF24 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C015C188 (GreGetFontUnicodeRanges.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A8AA4 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C009F528 (UmfdTrueTypeFreeGlyphset.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PFEOBJ::vFreepfdg(__int64 **this)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rcx

  v2 = 0LL;
  v3 = 0LL;
  v4 = **this;
  GreAcquireSemaphore(ghsemGlyphSet);
  v5 = *((_DWORD *)*this + 34);
  if ( v5 )
  {
    *((_DWORD *)*this + 34) = v5 - 1;
    v6 = *this;
    if ( !*((_DWORD *)*this + 34) )
    {
      v7 = *(_QWORD *)(v4 + 88);
      if ( (struct PDEV *)v7 != qword_1C0341AF0 || (v8 = *(_QWORD *)(v4 + 80), *(_DWORD *)(v8 + 8)) )
      {
        if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 && *(_QWORD *)(v7 + 3024) )
        {
          if ( *(_BYTE *)(v6[4] + 44) == 2 && (v9 = (_DWORD *)v6[2]) != 0LL && (v9[1] & 0x10) != 0 )
          {
            Win32FreePool(v9);
            v6 = *this;
          }
          else
          {
            v2 = v6[2];
            v3 = v6[3];
          }
          v6[2] = 0LL;
          if ( v2 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 88) + 3024LL))(v2, v3);
        }
      }
      else
      {
        UmfdTrueTypeFreeGlyphset(v8, *((unsigned int *)v6 + 2), v6[2]);
        (*this)[2] = 0LL;
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
}
