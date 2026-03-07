__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *lpMem,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r9d
  CBitmapLockUnaligned *v18; // rax
  CBitmapLockUnaligned *v19; // rax
  __int64 v20; // rcx
  CBitmapLockUnaligned *v21; // rdi
  char *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char *v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 132));
    v16 = v15;
    if ( v15 < 0 )
    {
      v27 = 498;
LABEL_4:
      v17 = v15;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v27, 0LL);
      return v16;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v16 = -2147024809;
      v17 = -2147024809;
      v27 = 506;
      goto LABEL_22;
    }
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 132));
    v16 = v15;
    if ( v15 < 0 )
    {
      v27 = 502;
      goto LABEL_4;
    }
  }
  v18 = (CBitmapLockUnaligned *)DefaultHeap::AllocClear(0xB8uLL);
  if ( !v18 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v19 = CBitmapLockUnaligned::CBitmapLockUnaligned(v18);
  v21 = v19;
  if ( v19 )
  {
    v22 = (char *)v19 + *(int *)(*((_QWORD *)v19 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v22 + 8LL))(v22);
    v23 = CBitmapLockUnaligned::HrInit(v21, this, a2, a3, a4, (unsigned int)a7, a8, lpMem, a10, a5, a6);
    v16 = v23;
    if ( v23 >= 0 )
    {
      *a11 = v21;
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x20Cu, 0LL);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x200u, 0LL);
  }
  if ( (a10 & 2) != 0 )
  {
    *((_DWORD *)this + 33) = 0;
  }
  else if ( (a10 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 33);
  }
  if ( v21 )
  {
    v25 = (char *)v21 + *(int *)(*((_QWORD *)v21 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v16;
}
