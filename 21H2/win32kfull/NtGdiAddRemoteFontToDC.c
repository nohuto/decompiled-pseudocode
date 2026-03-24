/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C028A570
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C016AAA8 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0272B6C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C0289DBC (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C028A838 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C028AD20 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(
        HDC a1,
        struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4)
{
  _BYTE *v8; // r14
  unsigned int RemoteFonts; // ebx
  int v10; // r15d
  unsigned int v12; // eax
  unsigned int v13; // esi
  struct tagDOWNLOADFONTHEADER *v14; // rdx
  __int64 v15; // [rsp+40h] [rbp-F8h] BYREF
  struct _FONTFILEVIEW **v16; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-E0h]
  _QWORD v19[6]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v20[128]; // [rsp+90h] [rbp-A8h] BYREF
  struct tagDOWNLOADFONTHEADER *v21; // [rsp+158h] [rbp+20h] BYREF

  memset(v20, 0, 0x78uLL);
  v8 = 0LL;
  RemoteFonts = 0;
  v15 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct _UNIVERSAL_FONT_ID *)MmUserProbeAddress;
    v15 = *(_QWORD *)a4;
    a4 = (struct _UNIVERSAL_FONT_ID *)&v15;
    v18 = &v15;
  }
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v16 = 0LL;
    v21 = a2;
    v12 = cMapRemoteFonts(&v21, a3, v20, 1LL);
    v13 = v12;
    v14 = v21;
    if ( v21 )
    {
      if ( v12 )
      {
        v8 = v20;
        v10 = 1;
        LODWORD(v21) = 1;
        RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v20, v14, a3, &v16, v12);
        if ( RemoteFonts )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v17);
          RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                          (PUBLIC_PFTOBJ *)v17,
                          (struct XDCOBJ *)v19,
                          v16,
                          v13,
                          0LL,
                          a4,
                          (int *)&v21);
          v10 = (int)v21;
        }
      }
    }
    if ( !RemoteFonts )
    {
      if ( v10 )
        vUnmapRemoteFonts(v8);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return RemoteFonts;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return 0LL;
  }
}
