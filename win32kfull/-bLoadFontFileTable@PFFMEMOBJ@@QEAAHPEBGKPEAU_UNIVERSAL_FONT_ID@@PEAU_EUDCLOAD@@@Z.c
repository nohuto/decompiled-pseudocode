/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01154C8
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0119A20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C026DF1C (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0114C7C (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C01155D8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C02A0F54 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r12
  struct _EUDCLOAD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  struct _IFIMETRICS *v15; // rsi
  void (__fastcall *v17)(struct _IFIMETRICS *, unsigned __int64); // rax
  unsigned __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  struct _UNIVERSAL_FONT_ID *v19; // [rsp+98h] [rbp+20h]

  v19 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( (unsigned int)PFFMEMOBJ::bAllocPFEData(this, a3) )
  {
    v10 = 1;
    v11 = *(_QWORD *)(SGDGetSessionState(v9) + 32);
    if ( !a3 )
      return 1LL;
    v12 = a5;
    while ( 1 )
    {
      v13 = *(_QWORD *)this;
      v18 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64 *))(v8 + 2872))(
              *(_QWORD *)(v13 + 96),
              *(_QWORD *)(v13 + 80),
              v10,
              &v18);
      v15 = (struct _IFIMETRICS *)v14;
      if ( !v14 )
        break;
      if ( *(_DWORD *)(v11 + 19356)
        && !v12
        && !(unsigned int)FindDefaultLinkedFontEntry((wchar_t *)(v14 + *(int *)(v14 + 8)), a2)
        || !PFFMEMOBJ::bAddEntry(this, v10, 0LL, 0LL, v15, v18, v19, v12) )
      {
        v17 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v8 + 3000);
        if ( v17 )
          v17(v15, v18);
        return 0LL;
      }
      if ( ++v10 > a3 )
        return 1LL;
    }
  }
  return 0LL;
}
