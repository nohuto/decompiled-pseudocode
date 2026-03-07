__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        int a4,
        unsigned int a5,
        void *a6,
        size_t Size,
        void *a8)
{
  unsigned int v10; // esi
  int v11; // r12d
  UMPDOBJ *v12; // rbx
  ULONG v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  int v16; // r8d
  ULONG v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // rsi
  char *v22; // rdx
  char *KernelPtr; // rax
  size_t v25; // [rsp+20h] [rbp-118h]
  int v26; // [rsp+40h] [rbp-F8h] BYREF
  int v27; // [rsp+44h] [rbp-F4h] BYREF
  int v28; // [rsp+48h] [rbp-F0h] BYREF
  UMPDOBJ *v29; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-E0h] BYREF
  int v31; // [rsp+5Ch] [rbp-DCh]
  void *v32; // [rsp+60h] [rbp-D8h] BYREF
  void *v33; // [rsp+68h] [rbp-D0h] BYREF
  struct _XLATEOBJ *v34; // [rsp+70h] [rbp-C8h]
  struct _XFORMOBJ *v35; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+88h] [rbp-B0h]
  struct _SURFOBJ *v38; // [rsp+90h] [rbp-A8h]
  _DWORD v39[4]; // [rsp+A0h] [rbp-98h] BYREF
  char *v40; // [rsp+B0h] [rbp-88h]
  struct _SURFOBJ *v41; // [rsp+B8h] [rbp-80h] BYREF
  struct _XLATEOBJ *v42; // [rsp+C0h] [rbp-78h] BYREF
  struct _XFORMOBJ *v43; // [rsp+C8h] [rbp-70h] BYREF
  int v44; // [rsp+D0h] [rbp-68h]
  unsigned int v45; // [rsp+D4h] [rbp-64h]
  void *v46; // [rsp+D8h] [rbp-60h] BYREF
  int v47; // [rsp+E0h] [rbp-58h]
  void *v48; // [rsp+E8h] [rbp-50h]

  v31 = a4;
  v35 = a3;
  v34 = a2;
  v36 = (unsigned __int64)a8;
  v37 = (unsigned __int64)a6;
  v38 = a1;
  v10 = 1;
  v26 = 1;
  v28 = 0;
  v11 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v32 = 0LL;
  v33 = 0LL;
  memset_0(v39, 0, 0x50uLL);
  v12 = v29;
  if ( !v29 )
    goto LABEL_35;
  if ( !*((_DWORD *)v29 + 106) )
  {
    v14 = a5;
    goto LABEL_14;
  }
  v13 = a2 ? ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120 : 96;
  v14 = a5;
  if ( a5 + 7 < a5 )
    goto LABEL_35;
  v15 = (a5 + 7) & 0xFFFFFFF8;
  if ( (int)Size + 7 < (unsigned int)Size )
    goto LABEL_35;
  v16 = (Size + 7) & 0xFFFFFFF8;
  v17 = v13 + v15;
  if ( v13 + v15 < v13 )
    goto LABEL_35;
  v18 = v13 + v15;
  v19 = v17 + v16;
  v20 = -1;
  if ( v18 + v16 >= v18 )
    v20 = v19;
  v30 = v20;
  if ( v19 < v18 )
  {
LABEL_35:
    XUMPDOBJ::~XUMPDOBJ(&v29);
    return 0LL;
  }
  v10 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v32, &v33, &v28, &v27, &v30);
  v26 = v10;
  v11 = v27;
LABEL_14:
  if ( v10 )
  {
    v39[0] = 80;
    v39[1] = 76;
    v40 = *(char **)v12;
    v41 = a1;
    v42 = v34;
    v43 = v35;
    v21 = (void *)(v36 & -(__int64)((_DWORD)Size != 0));
    v44 = v31;
    v45 = v14;
    v46 = (void *)(v37 & -(__int64)(v14 != 0));
    v47 = Size;
    v48 = v21;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v46, v14))
      && (!(_DWORD)Size || (v48 = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v41)
      && (unsigned int)UMPDOBJ::pxlo(v12, &v42)
      && (unsigned int)UMPDOBJ::pxo(v12, &v43)
      && (LODWORD(v25) = 4, (unsigned int)UMPDOBJ::Thunk(v12, v39, 0x50u, &v26, v25) != -1) )
    {
      if ( (_DWORD)Size )
      {
        v22 = (char *)v48;
        if ( (unsigned __int64)v48 + (unsigned int)Size > MmUserProbeAddress || (char *)v48 + (unsigned int)Size < v48 )
          *(_BYTE *)MmUserProbeAddress = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, v22);
        memmove(v21, KernelPtr, (unsigned int)Size);
      }
      v10 = v26;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v28 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v32;
    a1->pvScan0 = v33;
  }
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
