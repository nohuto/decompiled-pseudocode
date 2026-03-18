/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02709E0
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027AA50 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C0287430 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C000D8E4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0010028 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0012704 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0012A20 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0013CF0 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00E2784 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F7AC8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C010F888 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0110C74 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011293C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02ABA70 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct PFF **a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // esi
  __int64 v11; // rax
  void **v12; // rbx
  unsigned int *v13; // r8
  unsigned int *v14; // r10
  struct _FONTFILEVIEW **v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int FontFile; // r12d
  __int64 v19; // rsi
  struct PFF *v20; // rbx
  struct PFF **v21; // r9
  unsigned int v22; // r8d
  PUBLIC_PFTOBJ *v23; // rsi
  __int64 v24; // rcx
  struct PFF **v25; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v28; // [rsp+90h] [rbp-80h]
  struct PFF **v29; // [rsp+98h] [rbp-78h] BYREF
  HDEV v30; // [rsp+A0h] [rbp-70h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp-68h] BYREF
  int *v32; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-58h] BYREF
  PUBLIC_PFTOBJ *v34; // [rsp+C0h] [rbp-50h]
  struct PFF *v35[3]; // [rsp+C8h] [rbp-48h] BYREF
  HDEV v36; // [rsp+E0h] [rbp-30h] BYREF
  XDCOBJ *v37; // [rsp+E8h] [rbp-28h]
  void *v38[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v39; // [rsp+100h] [rbp-10h]
  unsigned int v40; // [rsp+110h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+10h] BYREF

  v29 = a6;
  v8 = 0;
  v32 = a7;
  v9 = a4;
  v37 = a2;
  v34 = this;
  v31 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v28 = v10;
  v33 = 0LL;
  *(_OWORD *)v38 = 0LL;
  v39 = 0LL;
  if ( ScrutinizeFontLoad(2u, 0LL) < 0 )
    goto LABEL_32;
  if ( (unsigned int)v9 > 4 )
  {
    if ( !(16 * (_DWORD)v9) )
      goto LABEL_32;
    v11 = Win32AllocPoolZInit((unsigned int)(16 * v9), 1986422343LL);
    v12 = (void **)v11;
    if ( !v11 )
      goto LABEL_32;
    v13 = (unsigned int *)(v11 + 32);
    goto LABEL_10;
  }
  v12 = v38;
  v13 = &v40;
  if ( (_DWORD)v9 )
  {
LABEL_10:
    v14 = v13;
    v15 = a3;
    v16 = v9;
    do
    {
      *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
      v17 = (__int64)*v15++;
      *v14++ = *(_DWORD *)(v17 + 24);
      --v16;
    }
    while ( v16 );
  }
  v30 = 0LL;
  vLoadFontFileView(
    0LL,
    0,
    a3,
    (unsigned int)v9,
    v12,
    v13,
    Src,
    v10,
    &v31,
    (struct PDEV **)&v30,
    (struct _FNTCHECKSUM *)&v33,
    1,
    0LL);
  v36 = v30;
  if ( v12 != v38 )
    Win32FreePool(v12);
  if ( v31 )
  {
    FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v36, v31, 2u, 0, 0LL);
    if ( FontFile - 1 <= 0xFFFFFFFD )
    {
      swprintf_s(
        Dst,
        0x1EuLL,
        L"REMOTE-%u",
        (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
      v19 = -1LL;
      do
        ++v19;
      while ( Dst[v19] );
      LODWORD(Size) = v28;
      PFFMEMOBJ::PFFMEMOBJ(
        (PFFMEMOBJ *)v35,
        FontFile,
        Dst,
        v19 + 1,
        v9,
        Src,
        Size,
        v31,
        v30,
        0LL,
        *(struct PFT **)v34,
        0x20u,
        0x20u,
        (struct _FNTCHECKSUM *)&v33,
        a3,
        (struct _UNIVERSAL_FONT_ID *)v29,
        0);
      v20 = v35[0];
      if ( v35[0] )
      {
        v21 = v29;
        a3 = 0LL;
        *v32 = 0;
        if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                             (PFFMEMOBJ *)v35,
                             Dst,
                             FontFile,
                             (struct _UNIVERSAL_FONT_ID *)v21,
                             0LL) )
        {
          v32 = (int *)ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v8 = PFFOBJ::bAddHash((PFFOBJ *)v35, 0);
          if ( v8 )
          {
            v22 = v19 + 1;
            v23 = v34;
            v29 = 0LL;
            if ( PUBLIC_PFTOBJ::pPFFGet(v34, Dst, v22, v9, Src, v28, &v29, 0) )
            {
              v8 = 0;
            }
            else
            {
              v8 = XDCOBJ::bAddRemoteFont(v37, v20);
              if ( v8 )
              {
                v24 = *(_QWORD *)v23;
                if ( (*((_DWORD *)v20 + 13) & 0x200) == 0 )
                  ++*(_DWORD *)(v24 + 32);
                ++*(_DWORD *)(v24 + 28);
                v25 = v29;
                if ( *v29 )
                  *((_QWORD *)*v29 + 2) = v20;
                *((_QWORD *)v20 + 1) = *v25;
                *((_QWORD *)v20 + 2) = 0LL;
                *v25 = v20;
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v35);
              }
            }
          }
          else
          {
            PFFOBJ::vRemoveHash((PFFOBJ *)v35);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v32);
        }
      }
      PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v35);
    }
  }
LABEL_32:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
