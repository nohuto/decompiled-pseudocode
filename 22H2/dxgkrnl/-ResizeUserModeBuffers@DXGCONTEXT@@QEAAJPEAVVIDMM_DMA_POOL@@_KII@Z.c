/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C01600E8
 * Callers:
 *     DxgkRender @ 0x1C00F3920 (DxgkRender.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00034C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        SIZE_T a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG_PTR v5; // rax
  HANDLE v7; // r13
  HANDLE v8; // r12
  __int64 v9; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rbx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  struct DXGADAPTER *v31; // rbx
  struct DXGGLOBAL *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  PVOID v44; // rbx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  SIZE_T v48; // rcx
  _QWORD *v49; // rax
  ULONG_PTR v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  ULONG_PTR v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  ULONG_PTR Size; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-88h] BYREF
  PVOID Address; // [rsp+48h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  PVOID v64; // [rsp+60h] [rbp-68h] BYREF
  HANDLE v65; // [rsp+68h] [rbp-60h]
  HANDLE v66; // [rsp+70h] [rbp-58h]
  PVOID PoolWithTag; // [rsp+78h] [rbp-50h]
  ULONG_PTR v68; // [rsp+80h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v71; // [rsp+E8h] [rbp+20h]

  v71 = a4;
  NumberOfBytes = a3;
  v5 = a4;
  v64 = 0LL;
  PoolWithTag = 0LL;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  v66 = 0LL;
  Size = 0LL;
  Address = 0LL;
  P = 0LL;
  v8 = 0LL;
  v65 = 0LL;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v64, 0LL, &NumberOfBytes, 0x3000u, 4u);
    v9 = v10;
    if ( v10 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v47[3] = this;
      v48 = NumberOfBytes;
      v47[5] = v9;
    }
    else
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v15 = *(struct DXGADAPTER **)(v14 + 16);
      Global = DXGGLOBAL::GetGlobal(v14, v11);
      if ( !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
              (struct DXGGLOBAL *)((char *)Global + 1548),
              v15) )
        goto LABEL_4;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B677844u);
      if ( PoolWithTag )
        goto LABEL_4;
      LODWORD(v9) = -1073741801;
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, a2, a3);
      v47[3] = this;
      v48 = NumberOfBytes;
      v47[5] = -1073741801LL;
    }
    v47[4] = v48;
    WdLogEvent5_WdWarning(v47);
LABEL_4:
    v5 = v71;
  }
  if ( (int)v9 < 0 || !(_DWORD)v5 )
    goto LABEL_14;
  v68 = v5;
  v17 = 8 * v5;
  v18 = 0xFFFFFFFFLL;
  if ( v17 <= 0xFFFFFFFF )
    v18 = (unsigned int)v17;
  LODWORD(v9) = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  RegionSize = v18;
  if ( v17 > 0xFFFFFFFF )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, a2, a3);
    v49[3] = this;
    v50 = v68;
    goto LABEL_56;
  }
  v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  v9 = v19;
  if ( v19 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v49[3] = this;
    v50 = RegionSize;
    v49[5] = v9;
LABEL_56:
    v49[4] = v50;
    WdLogEvent5_WdWarning(v49);
  }
  if ( (int)v9 < 0 )
  {
LABEL_63:
    v44 = P;
    goto LABEL_48;
  }
  v7 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
  v66 = v7;
  if ( !v7 )
  {
    LODWORD(v9) = -1073741801;
    v51 = WdLogNewEntry5_WdWarning(v23, a2, a3);
    *(_QWORD *)(v51 + 24) = this;
    *(_QWORD *)(v51 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v51);
  }
LABEL_14:
  if ( (int)v9 < 0 )
    goto LABEL_63;
  if ( !a5 )
    goto LABEL_24;
  v24 = 24LL * a5;
  v25 = 0xFFFFFFFFLL;
  if ( v24 <= 0xFFFFFFFF )
    v25 = (unsigned int)v24;
  LODWORD(v9) = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
  Size = v25;
  if ( v24 > 0xFFFFFFFF )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, a2, a3);
    v55[3] = this;
    v56 = a5;
    goto LABEL_62;
  }
  v26 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v9 = v26;
  if ( v26 < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
    v55[3] = this;
    v56 = Size;
    v55[5] = v9;
    goto LABEL_62;
  }
  v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v31 = *(struct DXGADAPTER **)(v30 + 16);
  v32 = DXGGLOBAL::GetGlobal(v28, v30);
  if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v32 + 1548), v31) )
  {
    P = ExAllocatePoolWithTag(PagedPool, Size, 0x4B677844u);
    if ( !P )
    {
      LODWORD(v9) = -1073741801;
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
      v55[3] = this;
      v56 = NumberOfBytes;
      v55[5] = -1073741801LL;
LABEL_62:
      v55[4] = v56;
      WdLogEvent5_WdWarning(v55);
    }
  }
  if ( (int)v9 < 0 )
    goto LABEL_63;
  v8 = MmSecureVirtualMemory(Address, Size, 4u);
  v65 = v8;
  if ( !v8 )
  {
    LODWORD(v9) = -1073741801;
    v57 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v57 + 24) = this;
    *(_QWORD *)(v57 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v57);
  }
LABEL_24:
  if ( (int)v9 < 0 )
    goto LABEL_63;
  v36 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, SIZE_T, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                                                               + 8LL)
                                                                                   + 480LL))(
          a2,
          NumberOfBytes,
          v71,
          a5);
  v9 = v36;
  if ( v36 < 0 )
  {
    v58 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v58 + 24) = this;
    *(_QWORD *)(v58 + 32) = v9;
    WdLogEvent5_WdWarning(v58);
  }
  if ( (int)v9 < 0 )
    goto LABEL_63;
  if ( NumberOfBytes )
  {
    if ( *((_QWORD *)this + 7) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    v40 = (void *)*((_QWORD *)this + 8);
    if ( v40 )
      ExFreePoolWithTag(v40, 0);
    *((_QWORD *)this + 7) = v64;
    *((_QWORD *)this + 8) = PoolWithTag;
    *((_QWORD *)this + 6) = NumberOfBytes;
  }
  if ( v71 )
  {
    v41 = (void *)*((_QWORD *)this + 12);
    if ( v41 )
      MmUnsecureVirtualMemory(v41);
    if ( *((_QWORD *)this + 11) )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 12) = v7;
    *((_QWORD *)this + 11) = BaseAddress;
    *((_DWORD *)this + 18) = v71;
    *((_QWORD *)this + 10) = RegionSize;
  }
  if ( !a5 )
    goto LABEL_63;
  v42 = (void *)*((_QWORD *)this + 17);
  if ( v42 )
    MmUnsecureVirtualMemory(v42);
  if ( *((_QWORD *)this + 15) )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
  v43 = (void *)*((_QWORD *)this + 16);
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
  *((_QWORD *)this + 17) = v8;
  *((_QWORD *)this + 15) = Address;
  v44 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 14) = Size;
LABEL_48:
  if ( (int)v9 < 0 )
  {
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( Address )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
    if ( v44 )
      ExFreePoolWithTag(v44, 0);
    if ( v7 )
      MmUnsecureVirtualMemory(v7);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( v64 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v64, &NumberOfBytes, 0x8000u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v9;
}
