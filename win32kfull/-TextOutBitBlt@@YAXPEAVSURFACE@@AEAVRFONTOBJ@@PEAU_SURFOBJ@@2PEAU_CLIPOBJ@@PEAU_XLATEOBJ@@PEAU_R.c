void __fastcall TextOutBitBlt(
        struct SURFACE *this,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  unsigned int v13; // esi
  unsigned int v14; // r14d
  int v15; // r12d
  __int64 v17; // rax
  int v18; // eax
  int (*v19)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  unsigned int v20; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-55h] BYREF
  int *v22; // [rsp+68h] [rbp-51h] BYREF
  struct _POINTL *v23; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v24; // [rsp+78h] [rbp-41h]
  struct _RECTL *v25; // [rsp+80h] [rbp-39h]
  int v26[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v26;
  v25 = a7;
  v13 = 0;
  v14 = 0;
  v24 = a10;
  v15 = 0;
  v23 = a11;
  v17 = *((_QWORD *)this + 6);
  v20 = 0;
  v21 = 0;
  v22 = v26;
  if ( (*(_DWORD *)(v17 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a2 )
  {
    v18 = UMPDReleaseRFONTSem(a2, 0LL, &v20, &v21, &v22);
    v13 = v20;
    v15 = v18;
    v14 = v21;
    v11 = v22;
  }
  v19 = SURFACE::pfnBitBlt(this);
  ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))v19)(
    ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
    0LL,
    0LL,
    a5,
    0LL,
    v25,
    0LL,
    0LL,
    v24,
    v23,
    61680);
  if ( v15 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v13, v14, v11);
    if ( v11 )
    {
      if ( v11 != v26 )
        Win32FreePool(v11);
    }
  }
}
