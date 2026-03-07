__int64 __fastcall UMPDDrvEscape(
        struct _SURFOBJ *a1,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Size,
        void *a6)
{
  int v8; // r15d
  int v9; // r12d
  UMPDOBJ *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  void *v15; // r15
  UMPDOBJ *v16; // rcx
  char *KernelPtr; // rax
  size_t v19; // [rsp+20h] [rbp-F8h]
  unsigned int v20; // [rsp+40h] [rbp-D8h] BYREF
  int v21; // [rsp+44h] [rbp-D4h] BYREF
  int v22; // [rsp+48h] [rbp-D0h] BYREF
  struct _XFORMOBJ *v23; // [rsp+50h] [rbp-C8h] BYREF
  UMPDOBJ *v24; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-B8h] BYREF
  void *v26; // [rsp+68h] [rbp-B0h]
  void *v27; // [rsp+70h] [rbp-A8h] BYREF
  void *v28; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-98h]
  struct _SURFOBJ *v30; // [rsp+88h] [rbp-90h]
  _DWORD v31[4]; // [rsp+90h] [rbp-88h] BYREF
  char *v32; // [rsp+A0h] [rbp-78h]
  struct _SURFOBJ *v33; // [rsp+A8h] [rbp-70h] BYREF
  int v34; // [rsp+B0h] [rbp-68h]
  unsigned int v35; // [rsp+B4h] [rbp-64h]
  void *v36; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp-58h]
  void *v38; // [rsp+C8h] [rbp-50h]

  v29 = a4;
  LODWORD(v23) = a2;
  v26 = a6;
  v30 = a1;
  v20 = -1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v24);
  v8 = 1;
  v22 = 0;
  v9 = 0;
  v21 = 0;
  v27 = 0LL;
  v28 = 0LL;
  memset_0(v31, 0, 0x40uLL);
  v10 = v24;
  if ( !v24 )
    goto LABEL_31;
  if ( !*((_DWORD *)v24 + 106) )
    goto LABEL_10;
  if ( a3 + 7 < a3 )
    goto LABEL_31;
  if ( Size + 7 < Size )
    goto LABEL_31;
  v11 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  if ( v11 < 0x50 )
    goto LABEL_31;
  v12 = ((a3 + 7) & 0xFFFFFFF8) + 80;
  v13 = v11 + ((Size + 7) & 0xFFFFFFF8);
  v14 = -1;
  if ( v13 >= v12 )
    v14 = v13;
  v25 = v14;
  if ( v13 < v12 )
  {
LABEL_31:
    XUMPDOBJ::~XUMPDOBJ(&v24);
    return 0xFFFFFFFFLL;
  }
  v8 = UMPDOBJ::bThunkLargeBitmap(v24, a1, &v27, &v28, &v22, &v21, &v25);
  v9 = v21;
LABEL_10:
  if ( v8 )
  {
    v31[0] = 64;
    v31[1] = 24;
    v32 = *(char **)v10;
    v33 = a1;
    v15 = (void *)(v29 & -(__int64)(a3 != 0));
    v26 = (void *)((unsigned __int64)v26 & -(__int64)(Size != 0));
    v34 = (int)v23;
    v35 = a3;
    v36 = v15;
    v37 = Size;
    v38 = v26;
    if ( (_DWORD)v23 != 25 || *((int *)a1->hdev + 448) >= 0 )
      goto LABEL_16;
    if ( v15 )
    {
      v23 = *(struct _XFORMOBJ **)((v29 & -(__int64)(a3 != 0)) + 0x18);
      if ( (unsigned int)UMPDOBJ::pxo(v10, &v23) )
      {
        *((_QWORD *)v36 + 3) = v23;
LABEL_16:
        if ( a3
          && (unsigned int)UMPDOBJ::bNeedThunk(v10, v15)
          && !(unsigned int)UMPDOBJ::ThunkMemBlock(v16, (const void **)&v36, a3)
          || Size && (v38 = UMPDOBJ::_AllocUserMem(v10, Size, 1)) == 0LL
          || !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 64), &v33)
          || (LODWORD(v19) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v31, 0x40u, &v20, v19) == -1) )
        {
          v20 = -1;
        }
        else if ( Size )
        {
          KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v38);
          memmove(v26, KernelPtr, Size);
        }
      }
    }
  }
  if ( v22 )
  {
    if ( v9 )
      UMPDOBJ::bDeleteLargeBitmaps(v10, a1, 0LL, 0LL);
    a1->pvBits = v27;
    a1->pvScan0 = v28;
  }
  XUMPDOBJ::~XUMPDOBJ(&v24);
  return v20;
}
