/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02AB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C001ED78 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F188 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A1750 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A19A4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00A1AD8 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013CB7C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C013CD54 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C013CF68 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
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
  UMPDOBJ *v18[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v19[10]; // [rsp+50h] [rbp-59h] BYREF

  v16 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset(v19, 0, 0x48uLL);
  v10 = v18[0];
  if ( v18[0] )
  {
    if ( !a4 )
      goto LABEL_11;
    if ( !a5 )
      goto LABEL_11;
    v19[0] = 0x3500000048LL;
    v19[2] = *(_QWORD *)v18[0];
    v19[3] = a1;
    v19[4] = a2;
    LODWORD(v19[5]) = a3;
    v19[6] = a4;
    v19[7] = a5;
    LODWORD(v19[8]) = a6;
    if ( a6 > 0x3FFFFFFF )
      goto LABEL_11;
    v19[7] = UMPDOBJ::_AllocUserMem(v18[0], 2 * a6, 1);
    if ( v19[7]
      && (unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v19[4])
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v19[6], 4 * a6) )
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
      KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v19[7]);
      memmove(a5, KernelPtr, 2LL * a6);
    }
    else
    {
LABEL_11:
      v12 = 0;
    }
  }
  else
  {
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
