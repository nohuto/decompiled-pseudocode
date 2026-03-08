/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02BE5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C029C3B8 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  struct UMPDOBJ *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  struct _FONTOBJ *v17; // [rsp+38h] [rbp-71h] BYREF
  struct UMPDOBJ *v18[2]; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h]
  struct DHPDEV__ *v22; // [rsp+68h] [rbp-41h]
  struct _FONTOBJ *v23; // [rsp+70h] [rbp-39h] BYREF
  int v24; // [rsp+78h] [rbp-31h]
  int v25; // [rsp+7Ch] [rbp-2Dh]
  void *v26; // [rsp+80h] [rbp-29h] BYREF
  void *v27; // [rsp+88h] [rbp-21h]
  unsigned int v28; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+94h] [rbp-15h]

  v20 = 0LL;
  v25 = 0;
  v29 = 0;
  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  v20 = 0LL;
  v25 = 0;
  v29 = 0;
  v10 = v18[0];
  if ( !v18[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v19[0] = 72;
  v19[1] = 53;
  v21 = *(_QWORD *)v18[0];
  v22 = a1;
  v23 = a2;
  v24 = a3;
  v26 = a4;
  v27 = a5;
  v28 = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v27 = UMPDOBJ::_AllocUserMem(v18[0], 2 * a6, 1);
  if ( v27
    && (unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v23)
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v26, 4 * a6) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v11 = UMPDOBJ::Thunk(v10, v19, 0x48u, &v16, Size);
    v12 = v16;
    if ( v11 == -1 )
      v12 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v10, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v27);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
