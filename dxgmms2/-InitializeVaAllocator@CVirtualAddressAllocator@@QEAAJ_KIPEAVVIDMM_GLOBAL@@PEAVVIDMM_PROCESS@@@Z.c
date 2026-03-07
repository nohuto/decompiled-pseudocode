__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  VIDMM_DEVICE *v12; // rax
  VIDMM_DEVICE *v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  struct VIDMM_VAD *Vad; // rax
  struct VIDMM_VAD *v17; // rbp
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx

  v5 = (char *)this + 24;
  v6 = 0LL;
  *((_QWORD *)this + 11) = a4;
  *((_QWORD *)this + 12) = a5;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  v10 = a3;
  v11 = 1;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !a5 )
    goto LABEL_12;
  v11 = *((_DWORD *)a4 + 1754);
  if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
  {
    *((_QWORD *)this + 13) = *((_QWORD *)a4 + 5049);
    v28 = *((_DWORD *)this + 36) & 0xFFFFFFFE;
    *((_DWORD *)this + 36) = v28;
    v15 = v28 | 4;
    goto LABEL_11;
  }
  v12 = (VIDMM_DEVICE *)operator new(320LL, 0x4B677844u, 256LL);
  if ( v12 )
    v13 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v13 = 0LL;
  *((_QWORD *)this + 13) = v13;
  if ( !v13 || (int)VIDMM_DEVICE::Init(v13, 0, a5) < 0 )
    goto LABEL_31;
  if ( dword_1C0076544 == 2 )
  {
    if ( (*((_BYTE *)a4 + 40937) & 1) != 0 )
      goto LABEL_9;
LABEL_35:
    v14 = 1;
    goto LABEL_10;
  }
  if ( dword_1C0076544 )
    goto LABEL_35;
LABEL_9:
  v14 = 0;
LABEL_10:
  v15 = v14 | *((_DWORD *)this + 36) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 36) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * v15)) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v10, a2, v11);
  v17 = Vad;
  if ( !Vad )
  {
    WdLogSingleEntry1(1LL, 2317LL);
    DxgkLogInternalTriageEvent(v29, 0x40000LL);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v18 = *(_QWORD *)v5;
  v19 = (_QWORD *)((char *)v17 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v19 = v18;
  *((_QWORD *)v17 + 6) = v5;
  *(_QWORD *)(v18 + 8) = v19;
  *(_QWORD *)v5 = v19;
  if ( !a5 )
    return 0LL;
  v20 = v11;
  v21 = 32LL * v11;
  if ( !is_mul_ok(v11, 0x20uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, 256LL);
  *((_QWORD *)this + 15) = v22;
  if ( v22 )
  {
    if ( v11 )
    {
      v23 = 0LL;
      do
      {
        v24 = v23 + *((_QWORD *)a4 + 5028);
        if ( (*(_BYTE *)(v24 + 444) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 16) = *(_DWORD *)(v24 + 48 * (*(unsigned int *)(v24 + 436) + 2LL));
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 20) = *(_DWORD *)(v24 + 48LL * *(unsigned int *)(v24 + 436) + 104);
          v25 = *((_QWORD *)this + 15);
          if ( (*((_DWORD *)a5 + 24) & 2) != 0 )
          {
            *(_DWORD *)(v6 + v25 + 28) = *(_DWORD *)(v24 + 52);
            v26 = *(_DWORD *)(v24 + 68);
          }
          else
          {
            *(_DWORD *)(v6 + v25 + 28) = *(_DWORD *)(v24 + 44);
            v26 = *(_DWORD *)(v24 + 60);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 15) + 24) = v26;
        }
        v23 += 1616LL;
        v6 += 32LL;
        --v20;
      }
      while ( v20 );
    }
    if ( (byte_1C00769C2 & 0x20) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        *(_QWORD *)(*((_QWORD *)this + 12) + 32LL),
        &CreateGpuVirtualAddressAllocator,
        *((_QWORD *)this + 11),
        this,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 32LL) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
    return 0LL;
  }
LABEL_31:
  WdLogSingleEntry0(3LL);
  return 3221225495LL;
}
