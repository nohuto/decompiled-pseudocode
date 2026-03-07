__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r15d
  int v11; // r12d
  struct UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // r14
  struct _FONTOBJ *v17; // r15
  int v18; // eax
  char *KernelPtr; // rax
  size_t v21; // [rsp+20h] [rbp-D1h]
  int v22; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v23; // [rsp+48h] [rbp-A9h] BYREF
  int v24; // [rsp+50h] [rbp-A1h] BYREF
  int v25; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-99h] BYREF
  void *v27; // [rsp+60h] [rbp-91h] BYREF
  void *v28; // [rsp+68h] [rbp-89h] BYREF
  struct UMPDOBJ *v29; // [rsp+70h] [rbp-81h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-79h]
  unsigned __int64 v31; // [rsp+80h] [rbp-71h]
  struct _FONTOBJ *v32; // [rsp+88h] [rbp-69h]
  _DWORD v33[4]; // [rsp+90h] [rbp-61h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-51h]
  struct _SURFOBJ *v35[2]; // [rsp+A8h] [rbp-49h] BYREF
  struct _FONTOBJ *v36; // [rsp+B8h] [rbp-39h] BYREF
  int v37; // [rsp+C0h] [rbp-31h]
  unsigned int v38; // [rsp+C4h] [rbp-2Dh]
  void *v39; // [rsp+C8h] [rbp-29h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-21h]
  void *v41; // [rsp+D8h] [rbp-19h]

  v31 = (unsigned __int64)a7;
  v30 = (unsigned __int64)a5;
  v10 = -1;
  v24 = -1;
  LODWORD(v23) = a3;
  v32 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v27 = 0LL;
  v28 = 0LL;
  v11 = 0;
  v25 = 0;
  v22 = 0;
  memset_0(v33, 0, 0x50uLL);
  v12 = v29;
  if ( !v29 )
    goto LABEL_30;
  if ( !*((_DWORD *)v29 + 106) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v13 = (Size + 7) & 0xFFFFFFF8, v14 = ((a4 + 7) & 0xFFFFFFF8) + 152, v14 < 0x98)
    || v14 + v13 < v14 )
  {
LABEL_30:
    v10 = -1;
    goto LABEL_31;
  }
  v26 = v14 + v13;
  v15 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v27, &v28, &v25, &v22, &v26);
  v11 = v22;
  if ( v15 )
  {
LABEL_11:
    v33[0] = 80;
    v33[1] = 47;
    v34 = *(_QWORD *)v12;
    v16 = (void *)(v31 & -(__int64)(Size != 0));
    if ( (_DWORD)v23 == 8 )
    {
      v35[0] = 0LL;
      v35[1] = a1;
    }
    else
    {
      v35[0] = a1;
    }
    v17 = v32;
    v36 = v32;
    v37 = (int)v23;
    v38 = a4;
    v39 = (void *)(v30 & -(__int64)(a4 != 0));
    v40 = Size;
    v41 = (void *)(v31 & -(__int64)(Size != 0));
    if ( (!v16 || (v41 = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (struct UMPDOBJ *)((char *)v12 + 64), v35)
      && (unsigned int)UMPDOBJ::pfo(v12, (__m128i **)&v36)
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v39, a4) )
    {
      v23 = v17;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v23, v12, 0LL, 0LL, 0LL);
      LODWORD(v21) = 4;
      v18 = UMPDOBJ::Thunk(v12, v33, 0x50u, &v24, v21);
      v10 = v24;
      if ( v18 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v23, v12, 0, 0, 0LL);
      if ( v10 != -1 && v16 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v12, (char *)v41);
        memmove(v16, KernelPtr, Size);
      }
      v23 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v25 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v27;
    a1->pvScan0 = v28;
  }
LABEL_31:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
