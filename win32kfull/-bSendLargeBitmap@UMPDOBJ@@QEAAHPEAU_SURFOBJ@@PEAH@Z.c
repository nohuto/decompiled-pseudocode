/*
 * XREFs of ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02C14CC
 * Callers:
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02C1674 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C02BABE8 (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02C136C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 *     ?ulGetMaxSize@UMPDOBJ@@QEBAKXZ @ 0x1C02C18EC (-ulGetMaxSize@UMPDOBJ@@QEBAKXZ.c)
 */

__int64 __fastcall UMPDOBJ::bSendLargeBitmap(UMPDOBJ *this, struct _SURFOBJ *a2, int *a3)
{
  unsigned int v3; // ebx
  ULONG cjBits; // edx
  __int64 v6; // r12
  char *v8; // r15
  unsigned int MaxSize; // eax
  ULONG v10; // r14d
  ULONG v11; // eax
  char *pvBits; // r13
  unsigned int v13; // edx
  char *v14; // rax
  char *KernelPtr; // rax
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rcx
  size_t v20; // [rsp+20h] [rbp-60h]
  ULONG i; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  int *v23; // [rsp+40h] [rbp-40h]
  _DWORD v24[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  char *v27; // [rsp+60h] [rbp-20h]
  char *v28; // [rsp+68h] [rbp-18h]
  size_t Size; // [rsp+70h] [rbp-10h]

  v3 = 0;
  v23 = a3;
  v22 = 0LL;
  cjBits = a2->cjBits;
  LODWORD(v6) = 0;
  v25 = 0LL;
  v27 = 0LL;
  Size = 0LL;
  v8 = (char *)UMPDOBJ::UMPDAllocUserMem(this, cjBits);
  if ( !v8 )
    return 0LL;
  v26 = *(_QWORD *)this;
  v24[0] = 48;
  v24[1] = 118;
  v28 = v8;
  MaxSize = UMPDOBJ::ulGetMaxSize(this);
  if ( MaxSize < 0x38 )
    return 0LL;
  v10 = a2->cjBits;
  v11 = MaxSize - 56;
  pvBits = (char *)a2->pvBits;
  for ( i = v11; v10; v11 = i )
  {
    v13 = v10;
    if ( v10 > v11 )
      v13 = v11;
    LODWORD(Size) = v13;
    v14 = UMPDOBJ::_AllocUserMem(this, v13, 0);
    v27 = v14;
    if ( !v14 )
      break;
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v14);
    memmove(KernelPtr, pvBits, (unsigned int)Size);
    LODWORD(v20) = 8;
    if ( (unsigned int)UMPDOBJ::Thunk(this, v24, 0x30u, &v22, v20) == -1 || !v22 )
      break;
    v6 = (unsigned int)(Size + v6);
    v10 -= Size;
    pvBits = (char *)a2->pvBits + (unsigned int)v6;
    v28 = &v8[v6];
    v16 = *((_QWORD *)this + 49);
    if ( v16 )
      *(_DWORD *)(v16 + 48) = 0;
  }
  v17 = &v8[LODWORD(a2->pvScan0) - LODWORD(a2->pvBits)];
  a2->pvBits = v8;
  a2->pvScan0 = v17;
  if ( v10 )
  {
    v18 = *((_QWORD *)this + 49);
    if ( v18 )
      *(_DWORD *)(v18 + 48) = 0;
    UMPDOBJ::bDeleteLargeBitmaps(this, a2, 0LL, 0LL);
  }
  else
  {
    v3 = 1;
    *v23 = 1;
  }
  return v3;
}
