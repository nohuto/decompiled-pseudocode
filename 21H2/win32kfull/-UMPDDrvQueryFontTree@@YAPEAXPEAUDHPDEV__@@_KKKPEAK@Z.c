/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02AA350
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0129CE0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C015E364 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1C015F418 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C02A7924 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02AB330 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1C02AB490 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(struct DHPDEV__ *a1, __int64 a2, int a3, int a4, unsigned int *a5)
{
  struct _FD_GLYPHSET *v5; // rdi
  struct _FD_GLYPHSET *v6; // rsi
  UMPDOBJ *v10; // rbx
  __int64 v11; // rax
  int v12; // r14d
  unsigned __int64 v13; // r12
  char *v14; // r13
  char *KernelPtr; // rax
  char *v16; // rdx
  char *v17; // r15
  __int64 v18; // r9
  __int64 v19; // r9
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  struct DHPDEV__ *v21; // r15
  unsigned int *v22; // r14
  size_t Size; // [rsp+20h] [rbp-B1h]
  void *v26; // [rsp+38h] [rbp-99h] BYREF
  struct DHPDEV__ *v27; // [rsp+40h] [rbp-91h]
  unsigned int *v28; // [rsp+48h] [rbp-89h]
  UMPDOBJ *v29; // [rsp+50h] [rbp-81h] BYREF
  _OWORD v30[2]; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v31[10]; // [rsp+80h] [rbp-51h] BYREF

  v5 = 0LL;
  v27 = a1;
  v6 = 0LL;
  v28 = a5;
  v26 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  memset(v31, 0, 0x48uLL);
  v10 = v29;
  if ( !v29 )
  {
LABEL_31:
    v5 = v6;
    goto LABEL_32;
  }
  v31[0] = 0x1B00000048LL;
  v11 = *(_QWORD *)v29;
  HIDWORD(v31[5]) = a4;
  v12 = 1;
  v31[2] = v11;
  v31[3] = v27;
  v31[4] = a2;
  LODWORD(v31[5]) = a3;
  v31[6] = UMPDOBJ::_AllocUserMem(v29, 4u, 1);
  LODWORD(v31[7]) = 0;
  v31[8] = 0LL;
  if ( v31[6] )
  {
    LODWORD(Size) = 8;
    v13 = 0xFFFFFFFFLL;
    if ( (unsigned int)UMPDOBJ::Thunk(v10, v31, 0x48u, &v26, Size) != -1 )
    {
      v14 = (char *)v26;
      if ( v26 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v31[6]);
        v16 = (char *)v31[8];
        *a5 = *(_DWORD *)KernelPtr;
        if ( !*((_DWORD *)v10 + 106) || !v16 || !LODWORD(v31[7]) )
          v12 = 0;
        v17 = UMPDOBJ::GetKernelPtr(v10, v16);
        if ( a4 == 3 )
        {
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v10) && (v18 = *((_QWORD *)v10 + 49)) != 0 )
            v19 = *(_QWORD *)(v18 + 40);
          else
            v19 = 0LL;
          if ( v12 )
            LODWORD(v13) = v31[7];
          else
            v17 = v14;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET((WCRUN *)v17, v12, v13, v19);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_24:
            v21 = v27;
            if ( (unsigned int)bIsFreeHooked(v27, v10) )
            {
              memset(v30, 0, sizeof(v30));
              if ( v6 )
                PushThreadGuardedObject(v30, v6, Win32FreePool);
              v22 = v28;
              UMPDMyDrvFree(v10, v21, v14, *v28);
              if ( v6 )
                PopThreadGuardedObject(v30);
            }
            else
            {
              v22 = v28;
            }
            *v22 = (unsigned int)v6;
            goto LABEL_31;
          }
          if ( v12 )
            v13 = LODWORD(v31[7]);
          else
            v17 = v14;
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR((const struct _FD_KERNINGPAIR *)v17, v12, v13);
        }
        v6 = FD_GLYPHSET;
        goto LABEL_24;
      }
    }
  }
LABEL_32:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v5;
}
