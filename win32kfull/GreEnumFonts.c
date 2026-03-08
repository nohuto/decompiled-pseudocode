/*
 * XREFs of GreEnumFonts @ 0x1C00037BC
 * Callers:
 *     NtGdiEnumFonts @ 0x1C00035F0 (NtGdiEnumFonts.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00039AC (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00039E8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0110B94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0110BD8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D4D0C (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
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
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rsi
  int v13; // edx
  int v14; // eax
  int v15; // eax
  struct PFF *v16; // rax
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rbx
  __int64 v19; // rcx
  bool v20; // al
  BOOL v21; // ebx
  unsigned int v23; // edx
  __int64 v24; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v27[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v28[2]; // [rsp+A0h] [rbp-19h] BYREF
  _DWORD v29[5]; // [rsp+B0h] [rbp-9h] BYREF
  int v30; // [rsp+C4h] [rbp+Bh]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]
  int v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D4h] [rbp+1Bh]

  v7 = a7;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( !v25[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v25);
    return 0LL;
  }
  a7 = *(_DWORD **)(v25[0] + 48LL);
  if ( (a7[10] & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
  v12 = Gre::Base::Globals(v11);
  v24 = *((_QWORD *)v12 + 6);
  GreAcquireSemaphore(v24);
  v34 = a5;
  v33 = 0;
  v29[3] = 0;
  v13 = a7[527];
  if ( v13 )
  {
    v31 = 0;
    v30 = 1;
    if ( v13 == 4 )
      goto LABEL_9;
  }
  else
  {
    v31 = 1;
  }
  v30 = 0;
LABEL_9:
  if ( (*(_DWORD *)(*(_QWORD *)(v25[0] + 976LL) + 236LL) & 1) != 0 || (v14 = a7[10], v29[0] = 0, (v14 & 1) == 0) )
    v29[0] = 1;
  v29[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
  v29[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
  v15 = *((_BYTE *)v12 + 164) & 1;
  v32 = a3 & 0x200;
  v29[4] = v15;
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v26);
  v16 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v26, *(HDEV *)(v25[0] + 48LL), 0LL);
  if ( !v16
    || (v26[0] = v16,
        v28[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 32) + 20272LL),
        *(_QWORD *)v27 = *((_QWORD *)v12 + 796),
        !(v20 = EnumDeviceAndEngine(
                  a4,
                  v23,
                  a2,
                  (struct _EFFILTER_INFO *)v29,
                  (struct PUBLIC_PFTOBJ *)v28,
                  (struct PUBLIC_PFTOBJ *)v27,
                  (struct PFFOBJ *)v26,
                  (struct PDEVOBJ *)&a7,
                  (struct DCOBJ *)v25,
                  a6,
                  v7))) )
  {
    v18 = Gre::Base::Globals(v17);
    v19 = *(_QWORD *)(SGDGetSessionState() + 32);
    v28[0] = *((_QWORD *)v18 + 796);
    *(_QWORD *)v27 = *(_QWORD *)(v19 + 20272);
    v20 = EnumEngineOnly(
            a4,
            v27[0],
            a2,
            (struct _EFFILTER_INFO *)v29,
            (struct PUBLIC_PFTOBJ *)v27,
            (struct PUBLIC_PFTOBJ *)v28,
            (struct DCOBJ *)v25,
            a6,
            v7);
  }
  v21 = v20;
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  return v21;
}
