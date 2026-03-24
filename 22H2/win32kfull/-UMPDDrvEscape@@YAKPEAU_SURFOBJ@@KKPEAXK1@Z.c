/*
 * XREFs of ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C001E330
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DE74 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C001ECD8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C001ED70 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C001F008 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1C001F0BC (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C001F0E8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001F424 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00A16C0 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00A190C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00A1984 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02AC618 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  unsigned int v7; // edi
  int v9; // r12d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  _QWORD *v14; // r13
  _QWORD *v15; // rcx
  void *v16; // rax
  UMPDOBJ *v17; // rcx
  const void *KernelPtr; // rax
  size_t v20; // [rsp+20h] [rbp-A9h]
  int v21; // [rsp+40h] [rbp-89h] BYREF
  int v22; // [rsp+44h] [rbp-85h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-81h] BYREF
  int v24; // [rsp+4Ch] [rbp-7Dh] BYREF
  void *v25; // [rsp+50h] [rbp-79h] BYREF
  void *v26; // [rsp+58h] [rbp-71h]
  void *v27; // [rsp+60h] [rbp-69h] BYREF
  void *v28; // [rsp+68h] [rbp-61h] BYREF
  UMPDOBJ *v29; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-51h]
  _QWORD v31[8]; // [rsp+80h] [rbp-49h] BYREF

  v7 = -1;
  v26 = a6;
  v22 = -1;
  v30 = a4;
  v23 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v24 = 0;
  v9 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v21 = 0;
  memset(v31, 0, sizeof(v31));
  v10 = v29;
  if ( !v29 )
    goto LABEL_29;
  if ( !*((_DWORD *)v29 + 106) )
    goto LABEL_10;
  if ( a3 + 7 < a3 )
    goto LABEL_29;
  if ( Size + 7 < Size )
    goto LABEL_29;
  v11 = (Size + 7) & 0xFFFFFFF8;
  v12 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  if ( v12 < 0x50 || v12 + v11 < v12 )
    goto LABEL_29;
  LODWORD(v25) = v12 + v11;
  v13 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v27, &v28, &v24, &v21, (unsigned int *)&v25);
  v9 = v21;
  if ( v13 )
  {
LABEL_10:
    v31[0] = 0x1800000040LL;
    v31[2] = *(_QWORD *)v10;
    v31[3] = a1;
    v31[4] = __PAIR64__(a3, v23);
    v14 = (_QWORD *)(v30 & -(__int64)(a3 != 0));
    LODWORD(v31[6]) = Size;
    v15 = v14;
    v31[5] = v14;
    v26 = (void *)((unsigned __int64)v26 & -(__int64)(Size != 0));
    v31[7] = v26;
    if ( v23 != 25 || *((int *)a1->hdev + 456) >= 0 )
      goto LABEL_15;
    if ( v14 )
    {
      v16 = *(void **)((v30 & -(__int64)(a3 != 0)) + 0x18);
      v25 = v16;
      if ( !v16 )
      {
LABEL_14:
        v15[3] = v16;
LABEL_15:
        if ( (!a3
           || !(unsigned int)UMPDOBJ::bNeedThunk(v10, v14)
           || (unsigned int)UMPDOBJ::ThunkMemBlock(v17, (void **)&v31[5], a3))
          && (!Size || (v31[7] = UMPDOBJ::_AllocUserMem(v10, Size, 1)) != 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), (struct _SURFOBJ **)&v31[3], v9) )
          {
            LODWORD(v20) = 4;
            if ( UMPDOBJ::Thunk(v10, v31, 0x40u, &v22, v20) != -1 )
            {
              if ( Size )
              {
                KernelPtr = UMPDOBJ::GetKernelPtr(v10, (void *)v31[7]);
                memmove(v26, KernelPtr, Size);
              }
              v7 = v22;
            }
          }
        }
        goto LABEL_25;
      }
      v23 = 0;
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 272), &v25, 4u, &v23) )
      {
        v15 = (_QWORD *)v31[5];
        v16 = v25;
        goto LABEL_14;
      }
    }
  }
LABEL_25:
  if ( v24 )
  {
    if ( v9 )
      UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
    a1->pvBits = v27;
    a1->pvScan0 = v28;
  }
LABEL_29:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v29);
  return v7;
}
