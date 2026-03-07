__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        __int64 a3,
        __int64 a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  int v13; // ebp
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi

  v13 = a4;
  v14 = a3;
  v15 = HrCheckBufferSize(*(_DWORD *)a5, a6, a3, a4, a7);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5Cu, 0LL);
  }
  else
  {
    *((_BYTE *)this + 73) = a10;
    *((_BYTE *)this + 72) = 1;
    SetInterface<IUnknown,IUnknown>((char *)this + 80, a11);
    *((_DWORD *)this + 22) = v14;
    *((_DWORD *)this + 23) = v13;
    *(_QWORD *)((char *)this + 100) = *(_QWORD *)a5;
    *((_DWORD *)this + 27) = *((_DWORD *)a5 + 2);
    *((_QWORD *)this + 14) = a8;
    *((_DWORD *)this + 24) = a6;
    *((_DWORD *)this + 30) = a7;
    *((_QWORD *)this + 17) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 32) = a9;
  }
  return v17;
}
