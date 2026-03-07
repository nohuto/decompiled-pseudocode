void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  _QWORD *v2; // rsi
  void *v3; // rcx
  int *v4; // r8
  unsigned __int64 v5; // r9
  int v6; // edx
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v10; // eax
  void **v11; // rcx
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  VIDMM_RECYCLE_BLOCK **v15; // rdx
  VIDMM_RECYCLE_BLOCK **v16; // rcx
  void *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  v3 = (void *)*((_QWORD *)this + 5);
  v4 = (int *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 6) - (_QWORD)v3;
  v22 = v5;
  v6 = *v4;
  if ( (unsigned int)(*v4 - 9) <= 1 )
  {
    v17 = (void *)*((_QWORD *)this + 14);
    if ( v17 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v17,
        *((_QWORD *)this + 15),
        v5,
        1);
  }
  else if ( (unsigned int)(v6 - 3) > 3 )
  {
    if ( v3 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v10 = (*((__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64 *, __int64))VirtualMemoryInterface + 2))(
              -1LL,
              v2,
              &v22,
              0x8000LL);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741558 )
      {
        v18 = v10;
        WdLogSingleEntry4(1LL, *v2, this, v10, **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL));
        v21 = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL);
        HIDWORD(v20) = HIDWORD(v18);
        HIDWORD(v19) = HIDWORD(this);
        DxgkLogInternalTriageEvent(v21, 0x40000LL);
      }
    }
  }
  else
  {
    if ( (unsigned int)(v6 - 5) <= 1 && v3 )
      MmUnmapViewInSystemSpace(v3);
    v7 = (void *)*((_QWORD *)this + 7);
    if ( !v7 || *((_QWORD *)this + 8) )
    {
      v8 = *((_QWORD *)this + 8);
      if ( !v8 )
        goto LABEL_13;
      ObCloseHandle((HANDLE)v8, (v8 & 0xFFFFFFFF80000000uLL) == 0);
      v7 = (void *)*((_QWORD *)this + 7);
    }
    VidMmDereferenceObjectAsync(v7);
  }
LABEL_13:
  v11 = (void **)*((_QWORD *)this + 17);
  if ( v11 )
  {
    operator delete(*v11);
    operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( bTracingEnabled )
  {
    v12 = (unsigned int *)*((_QWORD *)this + 4);
    v13 = *v12;
    v14 = (unsigned int)(v13 - 3) <= 3 ? *((_QWORD *)this + 7) : *v2;
    if ( (byte_1C00769C2 & 2) != 0 )
    {
      LODWORD(v21) = 1;
      LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 1) + 8LL) + 8LL);
      LODWORD(v19) = *v12;
      McTemplateK0pxqqt_EtwWriteTransfer(
        v13,
        &EventDestroyProcessAllocation,
        (unsigned int)v20,
        v14,
        v22,
        v19,
        v20,
        v21);
    }
  }
  WdLogSingleEntry1(4LL, this);
  v15 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v15[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v16 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v16 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v16 = (VIDMM_RECYCLE_BLOCK *)v15;
  v15[1] = (VIDMM_RECYCLE_BLOCK *)v16;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
