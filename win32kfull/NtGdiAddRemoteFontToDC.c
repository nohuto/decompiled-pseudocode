/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C028E180
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C012F7A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C028D95C (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C028E420 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C028E900 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(HDC a1, struct tagDOWNLOADFONTHEADER *a2, unsigned int a3, struct PFF **a4)
{
  _BYTE *v8; // r14
  unsigned int RemoteFonts; // ebx
  int v10; // r15d
  unsigned int v12; // eax
  unsigned int v13; // esi
  struct tagDOWNLOADFONTHEADER *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct PFF *v17; // [rsp+40h] [rbp-E8h] BYREF
  struct _FONTFILEVIEW **v18; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v20[24]; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v21[128]; // [rsp+80h] [rbp-A8h] BYREF
  struct tagDOWNLOADFONTHEADER *v22; // [rsp+148h] [rbp+20h] BYREF

  memset_0(v21, 0, 0x78uLL);
  v8 = 0LL;
  RemoteFonts = 0;
  v17 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct PFF **)MmUserProbeAddress;
    v17 = *a4;
    a4 = &v17;
    v19[2] = &v17;
  }
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v18 = 0LL;
    v22 = a2;
    v12 = cMapRemoteFonts(&v22, a3, v21, 1LL);
    v13 = v12;
    v14 = v22;
    if ( v22 )
    {
      if ( v12 )
      {
        v8 = v21;
        v10 = 1;
        LODWORD(v22) = 1;
        RemoteFonts = bCreateFontFileView((const struct _FONTFILEVIEW *)v21, v14, a3, &v18, v12);
        if ( RemoteFonts )
        {
          v16 = SGDGetSessionState(v15);
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v20, *(struct PFT **)(*(_QWORD *)(v16 + 32) + 20272LL));
          RemoteFonts = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                          (PUBLIC_PFTOBJ *)v20,
                          (struct XDCOBJ *)v19,
                          v18,
                          v13,
                          0LL,
                          a4,
                          (int *)&v22);
          v10 = (int)v22;
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
