__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  int v14; // eax
  unsigned int v15; // ebx
  CBitmapLock *v16; // rax
  unsigned int v17; // ecx
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rdi
  CBitmapLock *v20; // rbp
  char *v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  int v25; // r9d
  char *v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v15 = -2147024809;
      v25 = -2147024809;
      v27 = 433;
      goto LABEL_23;
    }
    v14 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 132));
    v15 = v14;
    if ( v14 >= 0 )
      goto LABEL_4;
    v27 = 429;
LABEL_12:
    v25 = v14;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v25, v27, 0LL);
    return v15;
  }
  v14 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 132));
  v15 = v14;
  if ( v14 < 0 )
  {
    v27 = 425;
    goto LABEL_12;
  }
LABEL_4:
  v16 = (CBitmapLock *)operator new(0xA0uLL);
  if ( !v16 )
  {
    v20 = 0LL;
    v19 = 0LL;
    goto LABEL_15;
  }
  v18 = CBitmapLock::CBitmapLock(v16);
  v19 = v18;
  v20 = v18;
  if ( !v18 )
  {
LABEL_15:
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x1B7u, 0LL);
    goto LABEL_16;
  }
  v21 = (char *)v18 + *(int *)(*((_QWORD *)v18 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 8LL))(v21);
  v22 = CBitmapLock::HrInit(
          v20,
          (struct IBitmapUnlock *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a10,
          a11);
  v15 = v22;
  if ( v22 >= 0 )
  {
    *a9 = v20;
    return v15;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1C3u, 0LL);
LABEL_16:
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 33) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 33);
  }
  if ( v20 )
  {
    v26 = (char *)v20 + *(int *)(*((_QWORD *)v19 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return v15;
}
