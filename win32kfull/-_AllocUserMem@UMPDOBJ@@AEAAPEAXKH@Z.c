/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78
 * Callers:
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C029B36C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C029C850 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C02BBA10 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C02BBF60 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C02BCAD0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02BD080 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C02BD7C0 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02BE5A0 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C02BE760 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02BEB10 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02BEED0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1C02BF120 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02C14CC (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C9A30 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02CB570 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CEA40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CEB90 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CECD0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CF2D0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CF8A0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C029B4D8 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C029B874 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C029C334 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  unsigned int v4; // edi
  char v6; // al
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned int v10; // edx
  size_t v11; // r14
  __int64 ThreadWin32Thread; // rbx
  __int64 v13; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v15; // rdx
  UMPDOBJ *v16; // rcx
  __int64 v17; // rcx
  char *KernelPtr; // rax

  v4 = a2;
  if ( a2 + 7 < a2 )
  {
    v6 = 0;
  }
  else
  {
    v4 = (a2 + 7) & 0xFFFFFFF8;
    v6 = 1;
  }
  if ( !v6 )
    return 0LL;
  v7 = 0LL;
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    v8 = *((_QWORD *)this + 49);
    if ( v8 )
    {
      v9 = *(unsigned int *)(v8 + 48);
      v10 = v9 + v4;
      if ( (unsigned int)v9 + v4 >= (unsigned int)v9 && (unsigned __int64)v10 <= *(_QWORD *)(v8 + 24) )
      {
        v7 = (char *)(v9 + *(_QWORD *)(v8 + 16) - *(_QWORD *)(v8 + 40));
        *(_DWORD *)(v8 + 48) = v10;
      }
    }
    v11 = v4;
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 106) && !*((_QWORD *)this + 7) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13 = *(_QWORD *)(ThreadWin32Thread + 56);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 24) = 0;
      *((_QWORD *)this + 7) = v13;
    }
    else
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
      *((_QWORD *)this + 7) = UMPDHeap;
      *(_QWORD *)(ThreadWin32Thread + 56) = UMPDHeap;
    }
  }
  v15 = *((_QWORD *)this + 7);
  if ( !v15 )
    return 0LL;
  if ( !*(_QWORD *)v15 )
    return 0LL;
  v11 = v4;
  v16 = (UMPDOBJ *)(*(_QWORD *)(v15 + 16) - *(unsigned int *)(v15 + 24));
  if ( v4 > (unsigned __int64)v16 && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v16, (struct _UMPDHEAP *)v15, v4) )
    return 0LL;
  v17 = *((_QWORD *)this + 7);
  v7 = (char *)(*(_QWORD *)v17 + *(unsigned int *)(v17 + 24));
  *(_DWORD *)(v17 + 24) += v4;
LABEL_21:
  if ( v7 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v7);
      memset_0(KernelPtr, 0, v11);
    }
  }
  return v7;
}
