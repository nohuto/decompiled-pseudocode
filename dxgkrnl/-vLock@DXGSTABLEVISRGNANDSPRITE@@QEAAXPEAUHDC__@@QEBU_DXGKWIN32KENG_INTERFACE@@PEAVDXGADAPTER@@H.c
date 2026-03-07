void __fastcall DXGSTABLEVISRGNANDSPRITE::vLock(
        DXGSTABLEVISRGNANDSPRITE *this,
        HDC a2,
        const struct _DXGKWIN32KENG_INTERFACE *const a3,
        struct DXGADAPTER *a4,
        int a5,
        int a6)
{
  unsigned int v6; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax

  v6 = 0;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = a5;
  if ( *((_DWORD *)this + 5) )
  {
    WdLogSingleEntry1(1LL, 471LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0LL,
          2,
          -1,
          L"bSpriteLockTaken == NULL",
          471LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( a2 && a4 )
  {
    v13 = *(_QWORD *)this;
    *((_QWORD *)this + 1) = a4;
    (*(void (__fastcall **)(HDC))(v13 + 256))(a2);
    if ( a6 )
    {
      LOBYTE(v6) = *((_DWORD *)this + 4) == 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)this + 272LL))(*((_QWORD *)this + 1), v6);
      *((_DWORD *)this + 5) = 1;
    }
  }
}
