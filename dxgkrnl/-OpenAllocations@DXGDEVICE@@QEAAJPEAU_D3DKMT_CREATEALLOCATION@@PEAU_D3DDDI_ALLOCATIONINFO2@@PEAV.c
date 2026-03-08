/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C01CBFF0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C02C4060 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        D3DKMT_CREATESTANDARDALLOCATION *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  struct DXGALLOCATION *v13; // r14
  __int64 v16; // rcx
  UINT v17; // ebx
  int v18; // r12d
  UINT *p_NumAllocations; // rdi
  UINT NumAllocations; // edx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // r10
  UINT v22; // esi
  UINT *p_PrivateDriverDataSize; // rsi
  unsigned __int64 PrivateDriverDataSize; // rax
  struct DXGALLOCATION *v25; // r14
  _BYTE **v26; // r9
  __int64 v27; // r15
  const void *v28; // rdx
  size_t v29; // r8
  char *v30; // rcx
  size_t v31; // r8
  void *v32; // rcx
  __int64 v33; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v34; // r8
  void *v35; // rcx
  void *pPrivateDriverData; // r11
  void *v38; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v39; // rdx
  size_t v40; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  ULONG64 v42; // [rsp+50h] [rbp-B8h]
  void *v43; // [rsp+60h] [rbp-A8h]
  _DXGKARG_OPENALLOCATION v44; // [rsp+78h] [rbp-90h] BYREF
  void **v45; // [rsp+B0h] [rbp-58h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]

  v13 = a4;
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v16 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 168)) )
  {
    v17 = 0;
  }
  else
  {
    WdLogSingleEntry1(1LL, 3623LL);
    v17 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3623LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v43 = 0LL;
  v18 = 0;
  p_NumAllocations = &a2->NumAllocations;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_36;
  *(&v44.NumAllocations + 1) = 0;
  v44.pPrivateDriverData = 0LL;
  v44.PrivateDriverSize = 0;
  memset(&v44.SubresourceIndex + 1, 0, 20);
  p_Flags = &a2->Flags;
  v44.Flags.Value = (a10 == 0) | (*(_DWORD *)&a2->Flags >> 6) & 2;
  v44.NumAllocations = NumAllocations;
  v44.pOpenAllocation = a5;
  v44.SubresourceIndex = a11;
  v22 = 0;
  while ( v22 < *p_NumAllocations )
  {
    v33 = v22;
    v44.pOpenAllocation[v33].hAllocation = *((_DWORD *)v13 + 4);
    v44.pOpenAllocation[v33].hDeviceSpecificAllocation = 0LL;
    v34 = &a3[v22];
    v44.pOpenAllocation[v33].PrivateDriverDataSize = v34->PrivateDriverDataSize;
    v35 = a6[v22];
    v44.pOpenAllocation[v33].pPrivateDriverData = v35;
    pPrivateDriverData = v34->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( a9 && (*(_DWORD *)p_Flags & 0x10000) == 0 )
      {
        memmove(v35, a7[v22], v34->PrivateDriverDataSize);
LABEL_34:
        p_Flags = &a2->Flags;
        goto LABEL_35;
      }
      memmove(v44.pOpenAllocation[v33].pPrivateDriverData, pPrivateDriverData, v34->PrivateDriverDataSize);
      p_Flags = &a2->Flags;
      ++v22;
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
    }
    else
    {
      if ( v34->PrivateDriverDataSize && a9 )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        v18 = -1073741811;
        goto LABEL_34;
      }
LABEL_35:
      ++v22;
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
    }
  }
  p_PrivateDriverDataSize = &a2->PrivateDriverDataSize;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v44.PrivateDriverSize = a2->PrivateDriverDataSize;
  v25 = a4;
  if ( !a2->pStandardAllocation || !(_DWORD)PrivateDriverDataSize )
  {
LABEL_8:
    if ( v18 < 0 )
      goto LABEL_36;
    if ( (*(_DWORD *)p_Flags & 0x100000) == 0 )
      v18 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 77), &v44);
    if ( v18 < 0 )
      goto LABEL_36;
    if ( a12 )
      *a12 = v44.Pitch;
    if ( a13 )
      *a13 = v44.SubresourceOffset;
    if ( v43 && !a10 )
    {
      if ( a9 )
      {
        v40 = *p_PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        v42 = MmUserProbeAddress;
        if ( (unsigned __int64)pStandardAllocation + v40 > MmUserProbeAddress
          || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v40) <= pStandardAllocation )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(pStandardAllocation, v43, v40);
        memmove(Src, v43, *p_PrivateDriverDataSize);
        v26 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_18;
      }
      memmove(a2->pStandardAllocation, v43, *p_PrivateDriverDataSize);
    }
    v26 = (_BYTE **)MmUserProbeAddress;
    v42 = MmUserProbeAddress;
LABEL_18:
    while ( v17 < *p_NumAllocations )
    {
      v46 = v17;
      *((_QWORD *)v25 + 4) = v44.pOpenAllocation[v17].hDeviceSpecificAllocation;
      v27 = v17;
      v47 = v27 * 8;
      v45 = &a6[v27];
      v28 = a6[v27];
      if ( v28 && !a10 )
      {
        if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v31 = a3[v17].PrivateDriverDataSize;
          v32 = a3[v17].pPrivateDriverData;
        }
        else
        {
          v29 = a3[v17].PrivateDriverDataSize;
          v30 = (char *)a3[v17].pPrivateDriverData;
          if ( &v30[v29] > *v26 || &v30[v29] <= v30 )
            **v26 = 0;
          memmove(v30, v28, v29);
          v31 = a3[v17].PrivateDriverDataSize;
          v28 = a6[v27];
          v32 = a7[v27];
        }
        memmove(v32, v28, v31);
      }
      ++v17;
      v25 = (struct DXGALLOCATION *)*((_QWORD *)v25 + 8);
      v26 = (_BYTE **)v42;
    }
    goto LABEL_36;
  }
  v38 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
  v43 = v38;
  if ( v38 )
  {
    v44.pPrivateDriverData = v38;
    if ( a9 )
      v39 = Src;
    else
      v39 = a2->pStandardAllocation;
    memmove(v38, v39, *p_PrivateDriverDataSize);
    p_Flags = &a2->Flags;
    goto LABEL_8;
  }
  v18 = -1073741801;
  WdLogSingleEntry3(3LL, this, *p_PrivateDriverDataSize, -1073741801LL);
LABEL_36:
  operator delete(v43);
  return (unsigned int)v18;
}
