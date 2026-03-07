__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  CVirtualAddressAllocator *v6; // rax
  CVirtualAddressAllocator *v7; // r10
  int v8; // ebp
  __int64 v10; // rcx
  __int64 v11; // rcx

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40936) & 4) == 0 )
    return 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)a2 + 1754) )
    return 0LL;
  while ( 1 )
  {
    v5 = 1616LL * (unsigned int)v4;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5028) + v5 + 444) & 8) == 0 )
      goto LABEL_8;
    v6 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    v7 = v6 ? CVirtualAddressAllocator::CVirtualAddressAllocator(v6) : 0LL;
    *((_QWORD *)this + v4 + 4) = v7;
    if ( !v7 )
      break;
    v8 = CVirtualAddressAllocator::InitializeVaAllocator(
           v7,
           1LL << *((_DWORD *)a2 + 10232),
           4096 << *(_DWORD *)(*((_QWORD *)a2 + 5028) + v5 + 76),
           a2,
           g_pVidMmSystemProcess);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(1LL, 7662LL);
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
      return (unsigned int)v8;
    }
LABEL_8:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a2 + 1754) )
      return 0LL;
  }
  WdLogSingleEntry1(1LL, 7653LL);
  DxgkLogInternalTriageEvent(v11, 0x40000LL);
  return 3221225495LL;
}
