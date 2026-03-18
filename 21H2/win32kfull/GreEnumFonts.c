/*
 * XREFs of GreEnumFonts @ 0x1C000F6D8
 * Callers:
 *     NtGdiEnumFonts @ 0x1C000F4D0 (NtGdiEnumFonts.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C000F69C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00124A8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C011B934 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B71F0 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

_BOOL8 __fastcall GreEnumFonts(
        HDC a1,
        unsigned int a2,
        __int16 a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // r14
  BOOL v8; // ebx
  int v12; // ecx
  int v13; // ecx
  struct PFF *v14; // rax
  unsigned int v15; // edx
  bool v16; // al
  struct _FONTHASH **v18; // [rsp+68h] [rbp-51h] BYREF
  struct _FONTHASH **v19; // [rsp+70h] [rbp-49h] BYREF
  _DWORD v20[5]; // [rsp+78h] [rbp-41h] BYREF
  int v21; // [rsp+8Ch] [rbp-2Dh]
  int v22; // [rsp+90h] [rbp-29h]
  int v23; // [rsp+94h] [rbp-25h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  __int64 v26; // [rsp+A0h] [rbp-19h] BYREF
  _QWORD v27[2]; // [rsp+A8h] [rbp-11h] BYREF
  char v28[32]; // [rsp+B8h] [rbp-1h] BYREF
  struct PFF *v29; // [rsp+D8h] [rbp+1Fh] BYREF

  v7 = a7;
  v8 = 0;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( !v27[0] )
  {
    EngSetLastError(6u);
    goto LABEL_18;
  }
  a7 = *(_DWORD **)(v27[0] + 48LL);
  if ( (a7[10] & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
  v26 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v25 = a5;
  v24 = 0;
  v20[3] = 0;
  v12 = a7[527];
  if ( v12 )
  {
    v22 = 0;
    v21 = 1;
    if ( v12 == 4 )
      goto LABEL_11;
  }
  else
  {
    v22 = 1;
  }
  v21 = 0;
LABEL_11:
  if ( (*(_DWORD *)(*(_QWORD *)(v27[0] + 976LL) + 236LL) & 1) != 0 || (v13 = a7[10], v20[0] = 0, (v13 & 1) == 0) )
    v20[0] = 1;
  v20[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
  v20[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
  v23 = a3 & 0x200;
  v18 = (struct _FONTHASH **)gpPFTDevice;
  v20[4] = gulFontInformation & 1;
  v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v18, *(_QWORD *)(v27[0] + 48LL), 0LL);
  if ( !v14
    || (v29 = v14,
        v19 = gpPFTPublic,
        v18 = gpPFTPrivate,
        !(v16 = EnumDeviceAndEngine(
                  a4,
                  v15,
                  a2,
                  (struct _EFFILTER_INFO *)v20,
                  (struct PUBLIC_PFTOBJ *)&v19,
                  (struct PUBLIC_PFTOBJ *)&v18,
                  (struct PFFOBJ *)&v29,
                  (struct PDEVOBJ *)&a7,
                  (struct DCOBJ *)v27,
                  a6,
                  v7))) )
  {
    v18 = gpPFTPublic;
    v19 = gpPFTPrivate;
    v16 = EnumEngineOnly(
            a4,
            v15,
            a2,
            (struct _EFFILTER_INFO *)v20,
            (struct PUBLIC_PFTOBJ *)&v18,
            (struct PUBLIC_PFTOBJ *)&v19,
            (struct DCOBJ *)v27,
            a6,
            v7);
  }
  v8 = v16;
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v27);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
  return v8;
}
