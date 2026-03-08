/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C02C1EEC
 * Callers:
 *     NtGdiGetETM @ 0x1C02D79C0 (NtGdiGetETM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02E2F94 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        __int64 a2,
        struct _SURFOBJ *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  int *v7; // rdi
  unsigned int v8; // r15d
  int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  __int64 v13; // rcx
  int v14; // r14d
  int v16; // eax
  unsigned int v18; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-55h] BYREF
  int v20; // [rsp+48h] [rbp-51h]
  int *v21[2]; // [rsp+50h] [rbp-49h] BYREF
  void *v22; // [rsp+60h] [rbp-39h]
  struct _SURFOBJ *v23; // [rsp+68h] [rbp-31h]
  int v24[10]; // [rsp+70h] [rbp-29h] BYREF

  v7 = v24;
  v22 = a7;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 40);
  v10 = 0;
  v20 = 0;
  v11 = 0;
  v23 = a3;
  v13 = 32896LL;
  v18 = 0;
  v19 = 0;
  v14 = 0;
  v21[0] = v24;
  if ( (v9 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v16 = UMPDReleaseRFONTSem(a1, 0LL, &v18, &v19, v21);
    v10 = v18;
    v11 = v19;
    v7 = v21[0];
    v20 = v16;
  }
  if ( a2 != *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v13) + 32) + 23448LL) )
    goto LABEL_9;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 8LL) == 3 )
    v14 = 1;
  if ( v14 )
  {
LABEL_9:
    v21[0] = *(int **)(*(_QWORD *)a1 + 128LL);
    v8 = PFFOBJ::FontManagement((PFFOBJ *)v21, v23, 0LL, 8u, 4u, v22, 0, 0LL);
  }
  if ( v20 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v7);
    if ( v7 )
    {
      if ( v7 != v24 )
        Win32FreePool(v7);
    }
  }
  return v8;
}
