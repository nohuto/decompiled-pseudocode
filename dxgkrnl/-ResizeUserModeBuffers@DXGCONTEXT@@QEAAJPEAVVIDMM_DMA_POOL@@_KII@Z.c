/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C02DFD9C
 * Callers:
 *     DxgkRender @ 0x1C0348D00 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        SIZE_T a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  HANDLE v7; // r12
  HANDLE v8; // r14
  signed int v9; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rcx
  SIZE_T v20; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v21; // rax
  int v22; // eax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // r9
  SIZE_T v25; // r8
  int v26; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  SIZE_T *v28; // r13
  void *v29; // rcx
  void *v30; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v31; // rax
  SIZE_T *v32; // r13
  void *v33; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v34; // rax
  SIZE_T *v35; // r13
  void *v36; // rcx
  PVOID v37; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v38; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v39; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v40; // rax
  SIZE_T v42; // [rsp+48h] [rbp-90h] BYREF
  SIZE_T Size; // [rsp+50h] [rbp-88h] BYREF
  PVOID v44; // [rsp+58h] [rbp-80h] BYREF
  PVOID Address; // [rsp+60h] [rbp-78h] BYREF
  PVOID P; // [rsp+68h] [rbp-70h]
  __int64 v47; // [rsp+70h] [rbp-68h] BYREF
  HANDLE v48; // [rsp+78h] [rbp-60h]
  HANDLE v49; // [rsp+80h] [rbp-58h]
  DXGCONTEXT *v50; // [rsp+88h] [rbp-50h]
  PVOID Pool2; // [rsp+90h] [rbp-48h]
  SIZE_T v53; // [rsp+F0h] [rbp+18h] BYREF
  unsigned int v54; // [rsp+F8h] [rbp+20h]

  v54 = a4;
  v53 = a3;
  v5 = a4;
  v50 = this;
  v47 = 0LL;
  Pool2 = 0LL;
  Size = 0LL;
  Address = 0LL;
  v7 = 0LL;
  v49 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  v9 = 0;
  if ( a3 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, SIZE_T *, int, int))VirtualMemoryInterface)(
            -1LL,
            &v47,
            0LL,
            &v53,
            12288,
            4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v13 = v11;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
              (struct DXGGLOBAL *)((char *)Global + 1684),
              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        goto LABEL_8;
      Pool2 = (PVOID)ExAllocatePool2(256LL, v53, 1265072196LL);
      if ( Pool2 )
        goto LABEL_8;
      v9 = -1073741801;
      v13 = -1073741801LL;
    }
    WdLogSingleEntry3(3LL, this, v53, v13);
LABEL_8:
    v5 = v54;
  }
  if ( v9 >= 0 && v5 )
  {
    v14 = v5;
    v15 = 8LL * v5;
    v16 = 0xFFFFFFFFLL;
    if ( v15 <= 0xFFFFFFFF )
      v16 = (unsigned int)v15;
    v9 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
    Size = v16;
    if ( v15 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v14);
    }
    else
    {
      v17 = DxgkGetVirtualMemoryInterface();
      v18 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v17)(
              -1LL,
              &Address,
              0LL,
              &Size,
              12288,
              4);
      v9 = v18;
      if ( v18 < 0 )
        WdLogSingleEntry3(3LL, this, Size, v18);
    }
    if ( v9 < 0 )
      goto LABEL_62;
    v7 = MmSecureVirtualMemory(Address, Size, 4u);
    v49 = v7;
    if ( !v7 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
    }
  }
  if ( v9 < 0 )
  {
LABEL_62:
    v37 = P;
    goto LABEL_63;
  }
  if ( !a5 )
    goto LABEL_35;
  v19 = 24LL * a5;
  v20 = 0xFFFFFFFFLL;
  if ( v19 <= 0xFFFFFFFF )
    v20 = (unsigned int)v19;
  v9 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v42 = v20;
  if ( v19 > 0xFFFFFFFF )
  {
    WdLogSingleEntry2(3LL, this, a5);
  }
  else
  {
    v21 = DxgkGetVirtualMemoryInterface();
    v22 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v21)(-1LL, &v44, 0LL, &v42, 12288, 4);
    v9 = v22;
    if ( v22 < 0 )
    {
      v24 = v22;
      v25 = v42;
      goto LABEL_30;
    }
    v23 = DXGGLOBAL::GetGlobal();
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)v23 + 1684),
           *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      P = (PVOID)ExAllocatePool2(256LL, v42, 1265072196LL);
      if ( !P )
      {
        v9 = -1073741801;
        v24 = -1073741801LL;
        v25 = v53;
LABEL_30:
        WdLogSingleEntry3(3LL, this, v25, v24);
      }
    }
  }
  if ( v9 < 0 )
    goto LABEL_62;
  v8 = MmSecureVirtualMemory(v44, v42, 4u);
  v48 = v8;
  if ( !v8 )
  {
    v9 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
LABEL_35:
  if ( v9 < 0 )
    goto LABEL_62;
  v26 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, SIZE_T, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                               + 8LL)
                                                                                   + 472LL))(
          a2,
          v53,
          v54,
          a5);
  v9 = v26;
  if ( v26 < 0 )
    WdLogSingleEntry2(3LL, this, v26);
  if ( v9 < 0 )
    goto LABEL_62;
  if ( v53 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v27 = DxgkGetVirtualMemoryInterface();
      v28 = (SIZE_T *)((char *)this + 48);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v27 + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 48,
        0x8000LL);
    }
    else
    {
      v28 = (SIZE_T *)((char *)v50 + 48);
    }
    v29 = (void *)*((_QWORD *)this + 8);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    *((_QWORD *)this + 7) = v47;
    *((_QWORD *)this + 8) = Pool2;
    *v28 = v53;
  }
  if ( v54 )
  {
    v30 = (void *)*((_QWORD *)this + 12);
    if ( v30 )
      MmUnsecureVirtualMemory(v30);
    if ( *((_QWORD *)this + 11) )
    {
      v31 = DxgkGetVirtualMemoryInterface();
      v32 = (SIZE_T *)((char *)this + 80);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v31 + 2))(
        -1LL,
        (char *)this + 88,
        (char *)this + 80,
        0x8000LL);
    }
    else
    {
      v32 = (SIZE_T *)((char *)v50 + 80);
    }
    *((_QWORD *)this + 12) = v7;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v54;
    *v32 = Size;
  }
  if ( !a5 )
    goto LABEL_62;
  v33 = (void *)*((_QWORD *)this + 17);
  if ( v33 )
    MmUnsecureVirtualMemory(v33);
  if ( *((_QWORD *)this + 15) )
  {
    v34 = DxgkGetVirtualMemoryInterface();
    v35 = (SIZE_T *)((char *)this + 112);
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v34 + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
  }
  else
  {
    v35 = (SIZE_T *)((char *)v50 + 112);
  }
  v36 = (void *)*((_QWORD *)this + 16);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  *((_QWORD *)this + 17) = v8;
  *((_QWORD *)this + 15) = v44;
  v37 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *v35 = v42;
LABEL_63:
  if ( v9 < 0 )
  {
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( v44 )
    {
      v38 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64))v38 + 2))(-1LL, &v44, &v42, 0x8000LL);
    }
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    if ( v7 )
      MmUnsecureVirtualMemory(v7);
    if ( Address )
    {
      v39 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, SIZE_T *, __int64))v39 + 2))(-1LL, &Address, &Size, 0x8000LL);
    }
    if ( v47 )
    {
      v40 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, SIZE_T *, __int64))v40 + 2))(-1LL, &v47, &v53, 0x8000LL);
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v9;
}
