/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A583C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C000B1C8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0108D18 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014AA04 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02A67E0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rdx
  int v7; // esi
  __int64 v9; // rbx
  int v10; // r9d
  __int64 v11; // r13
  int v12; // r8d
  unsigned int v13; // edi
  unsigned int v14; // r10d
  int v15; // ecx
  int v16; // eax
  size_t v17; // r12
  unsigned int v18; // eax
  PFEOBJ *v19; // rcx
  LONG v20; // eax
  struct XDCOBJ *v21; // r12
  FLOATL v22; // xmm2_4
  __int64 v23; // r13
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rcx
  unsigned int v27; // [rsp+28h] [rbp-D8h]
  struct _POINTL v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-90h]
  struct PFE *v31; // [rsp+78h] [rbp-88h]
  struct XDCOBJ *v32; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  int v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+ACh] [rbp-54h]
  struct _FD_XFORM v37; // [rsp+B0h] [rbp-50h] BYREF
  struct tagENUMLOGFONTEXDVW v38; // [rsp+C0h] [rbp-40h] BYREF

  v32 = a2;
  v5 = *(_QWORD *)a2;
  v31 = a3;
  v7 = 1;
  v30 = *(_DWORD *)(v5 + 248) & 1;
  v29 = *(_QWORD *)(v5 + 48);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)v33, *(struct HLFONT__ **)(v5 + 1744), (struct PDEVOBJ *)&v29);
  v9 = v33[0];
  v10 = 0;
  if ( !v33[0] )
  {
    *(_QWORD *)this = 0LL;
    return;
  }
  v11 = *((_QWORD *)a3 + 4);
  v12 = *((_DWORD *)a4 + 1);
  v13 = 0;
  v33[0] = v11;
  if ( ((v12 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
    && (*(_BYTE *)(v11 + 52) & 1) == 0
    && *(_BYTE *)(v9 + 296)
    && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v33) )
  {
    v13 = v14;
  }
  if ( ((*(_DWORD *)(v29 + 40) & 1) != 0 || *((_DWORD *)a4 + 6) != v10)
    && ((v12 & 0x2000) != 0 || (*(_BYTE *)a4 & 0x20) != 0) )
  {
    v15 = 400;
    if ( *(_DWORD *)(v9 + 292) )
      v15 = *(_DWORD *)(v9 + 292);
    v13 |= ((*(unsigned __int16 *)(v11 + 46) - v15) >> 31) & 0x2000;
  }
  v16 = *(_DWORD *)(v11 + 48);
  if ( (v16 & 1) != 0 && *(_DWORD *)(v9 + 276) <= v10 )
    v13 |= 0x8000u;
  if ( (v12 & 0x10000) != 0 && (v16 & 0x40) != 0 )
    v13 |= v12 & 0x10010000;
  v17 = 420LL;
  memset(&v38, 0, sizeof(v38));
  v18 = *(_DWORD *)(v9 + 272);
  if ( v18 < 0x1A4 )
    v17 = v18;
  memmove(&v38, (const void *)(v9 + 276), v17);
  v20 = *((_DWORD *)a4 + 3);
  v28 = 0LL;
  v38.elfEnumLogfontEx.elfLogFont.lfHeight = v20;
  v38.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v38.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v38.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  v37 = 0LL;
  if ( (*(_DWORD *)(v11 + 48) & 0x3000010) != 0 )
  {
    v21 = v32;
    v28.x = 1;
    v28.y = 1;
    if ( (unsigned int)PFEOBJ::bSetFontXform(
                         v19,
                         v32,
                         &v38.elfEnumLogfontEx.elfLogFont,
                         &v37,
                         0,
                         v27,
                         &v28,
                         (struct IFIOBJ *)v33,
                         1) )
    {
      v22 = v37.eXY * *((float *)a4 + 7);
      v37.eXX = v37.eXX * *((float *)a4 + 7);
      v37.eXY = v22;
      v32 = (struct XDCOBJ *)ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      v34 = 0;
      v23 = *(_QWORD *)v31;
      v33[0] = v23;
      ++*(_DWORD *)(v23 + 68);
      SEMOBJ::vUnlock((SEMOBJ *)&v32);
      v24 = *(_QWORD *)v21;
      v36 = 0;
      v25 = v30;
      v35 = v24 + 320;
      if ( (unsigned int)RFONTOBJ::bFindRFONT(
                           this,
                           &v37,
                           v13,
                           0,
                           (struct PDEVOBJ *)&v29,
                           (struct EXFORMOBJ *)&v35,
                           v31,
                           v30,
                           *(_DWORD *)(*(_QWORD *)(v24 + 976) + 208LL),
                           0,
                           2u) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 504LL));
        *(_DWORD *)(*(_QWORD *)v21 + 252LL) &= ~1u;
      }
      else
      {
        if ( (unsigned int)RFONTOBJ::bRealizeFont(
                             this,
                             v21,
                             (struct PDEVOBJ *)&v29,
                             &v38,
                             v31,
                             &v37,
                             &v28,
                             v13,
                             0,
                             v25,
                             0,
                             2u) )
        {
          v26 = *(_QWORD *)this;
          v34 = 1;
          GreAcquireSemaphore(*(_QWORD *)(v26 + 504));
          *(_DWORD *)(*(_QWORD *)v21 + 252LL) &= ~1u;
          goto LABEL_31;
        }
        *(_QWORD *)this = 0LL;
      }
      v7 = 0;
LABEL_31:
      if ( v23 && !v7 )
        PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v33);
      goto LABEL_35;
    }
  }
  *(_QWORD *)this = 0LL;
LABEL_35:
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
