volatile signed __int32 *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct _KTHREAD **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14)
{
  __int64 v14; // rbx
  volatile signed __int32 *v15; // r15
  struct _RTL_AVL_TREE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rbp
  struct VIDMM_VAD **v22; // r14
  int v23; // eax
  __int64 v24; // r8
  struct VIDMM_VAD *v25; // rsi
  struct _RTL_BALANCED_NODE *v26; // rdi
  struct _RTL_BALANCED_NODE *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  void **v30; // r14
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 **v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  volatile signed __int32 *v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned int v39; // r8d
  unsigned int v40; // ecx
  char *v41; // rsi
  char **v42; // rcx
  char *v43; // rax
  int v45; // r9d
  int v46; // eax
  unsigned __int64 v47; // r8
  char v48; // dl
  struct _KTHREAD **v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct _KTHREAD **v55; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v56; // [rsp+20h] [rbp-98h]
  struct VIDMM_VAD *v57; // [rsp+50h] [rbp-68h] BYREF
  char v58[8]; // [rsp+58h] [rbp-60h] BYREF
  struct _KTHREAD **v59; // [rsp+60h] [rbp-58h]
  int v60; // [rsp+68h] [rbp-50h]
  char v61; // [rsp+C0h] [rbp+8h]

  v14 = a10;
  v15 = 0LL;
  v59 = a1 + 7;
  if ( a1 != (struct _KTHREAD **)-56LL && a1[8] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(v50, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v59, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v45 = *((_DWORD *)v59 + 6);
      if ( v45 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventBlockThread, v19, v45);
    }
    ExAcquirePushLockExclusiveEx(v59, 0LL);
  }
  v20 = a6;
  v21 = a5;
  v22 = a1 + 6;
  v59[1] = KeGetCurrentThread();
  v60 = 2;
  v57 = 0LL;
  v61 = 0;
  if ( !v20 )
    goto LABEL_6;
  v25 = *v22;
  a6 = v20;
  if ( !v25 )
    goto LABEL_6;
  while ( 1 )
  {
    v46 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v25);
    if ( v46 >= 0 )
      break;
    v25 = *(struct VIDMM_VAD **)v25;
LABEL_55:
    if ( !v25 )
      goto LABEL_56;
  }
  if ( v46 > 0 )
  {
    v25 = (struct VIDMM_VAD *)*((_QWORD *)v25 + 1);
    goto LABEL_55;
  }
LABEL_56:
  if ( v25 )
  {
    v47 = *((_QWORD *)v25 + 4);
    if ( (*((_DWORD *)v25 + 18) & 0x1000) != 0 )
      v47 -= 4096LL;
    if ( v47 < v20 + a5 )
    {
      WdLogSingleEntry3(3LL, a6, v20 + a5, v25);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
      return 0LL;
    }
    else
    {
      v48 = v14 ^ ((unsigned __int64)*((unsigned int *)v25 + 18) >> 7);
      v57 = v25;
      if ( (v48 & 0x10) == 0 )
        goto LABEL_21;
      WdLogSingleEntry1(1LL, 1383LL);
      DxgkLogInternalTriageEvent(v51, 0x40000LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
      return 0LL;
    }
  }
LABEL_6:
  v23 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (CVirtualAddressAllocator *)a1,
          v17,
          a5,
          v20,
          a7,
          a8,
          a9,
          &v57,
          1u);
  v25 = v57;
  if ( v23 < 0 )
    goto LABEL_21;
  v26 = (struct _RTL_BALANCED_NODE *)*v22;
  LOBYTE(v24) = 0;
  v61 = 1;
  if ( !*v22 )
    goto LABEL_14;
  while ( 2 )
  {
    if ( (int)CompareVadRangeAvl(v25, v26) < 0 )
    {
      v27 = v26->Children[0];
      if ( !v26->Children[0] )
      {
        LOBYTE(v24) = 0;
        goto LABEL_14;
      }
      goto LABEL_10;
    }
    v27 = v26->Children[1];
    if ( v27 )
    {
LABEL_10:
      v26 = v27;
      continue;
    }
    break;
  }
  LOBYTE(v24) = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a1 + 6, v26, v24, v25);
  if ( (v14 & 0x10) != 0 )
    *((_DWORD *)v25 + 18) |= 0x800u;
  if ( (v14 & 8) != 0 || (v14 & 4) != 0 )
    v29 = *((_DWORD *)v25 + 18) & 0xFFFFFFF0 | 2;
  else
    v29 = *((_DWORD *)v25 + 18) & 0xFFFFFFF0 | 3;
  *((_DWORD *)v25 + 18) = v29;
  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    LODWORD(v56) = v29;
    McTemplateK0pqxx_EtwWriteTransfer(
      v29,
      &CreateGpuVirtualAddressRange,
      v28,
      a1,
      v56,
      *((_QWORD *)v25 + 3),
      *((_QWORD *)v25 + 4));
  }
LABEL_21:
  if ( v25 )
  {
    v30 = a13;
    if ( !a13 || (v31 = operator new(24LL, 0x39346956u, 256LL), (*v30 = (void *)v31) != 0LL) )
    {
      if ( (*((_BYTE *)v25 + 72) & 0xF) == 3 && ((v14 & 8) != 0 || (v14 & 4) != 0) )
      {
        WdLogSingleEntry0(3LL);
      }
      else
      {
        if ( v61 )
          v20 = *((_QWORD *)v25 + 3);
        if ( a4 == 1 )
        {
          v33 = (__int64 **)a2;
          goto LABEL_31;
        }
        if ( a4 == 3 )
        {
          v34 = a2;
LABEL_33:
          if ( v34 )
            v21 = *(_QWORD *)(v34 + 16);
          goto LABEL_35;
        }
        if ( a4 != 4 )
        {
          if ( a4 == 5 )
          {
            v33 = *(__int64 ***)(a2 + 24);
            goto LABEL_31;
          }
          goto LABEL_35;
        }
        v33 = *(__int64 ***)(a2 + 64);
LABEL_31:
        if ( v33 )
        {
          v34 = **v33;
          goto LABEL_33;
        }
LABEL_35:
        v35 = v21 - a3;
        v36 = operator new(136LL, 0x39346956u, 256LL);
        v37 = (volatile signed __int32 *)v36;
        if ( v36 )
        {
          v38 = 0LL;
          *(_QWORD *)v36 = v25;
          if ( v35 < a5 )
            v38 = v35 >> 12;
          *(_QWORD *)(v36 + 56) = a2;
          *(_QWORD *)(v36 + 80) = a11;
          v39 = a12;
          *(_QWORD *)(v36 + 72) = a3;
          *(_QWORD *)(v36 + 112) = a3;
          *(_QWORD *)(v36 + 104) = v20 + a5;
          *(_DWORD *)(v36 + 64) = 0;
          v40 = *(_DWORD *)(v36 + 64) & 0xFFFFFC00 | (16 * (v39 & 0x3F));
          *(_QWORD *)(v36 + 88) = v14;
          *(_QWORD *)(v36 + 96) = v20;
          *(_QWORD *)(v36 + 120) = v38;
          *(_DWORD *)(v36 + 128) = 1;
          *(_DWORD *)(v36 + 64) = a4 & 0xF | v40;
          if ( a4 == 6 )
            *(_QWORD *)(v36 + 88) |= 4uLL;
          *(_OWORD *)(v36 + 8) = 0LL;
          *(_OWORD *)(v36 + 24) = 0LL;
          *(_OWORD *)(v36 + 40) = 0LL;
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      a1,
                      v25,
                      v39,
                      0LL,
                      (struct VIDMM_MAPPED_VA_RANGE *)v36) >= 0 )
          {
            v15 = v37;
            if ( v30 )
            {
              v41 = (char *)v25 + 80;
              *((_QWORD *)*v30 + 2) = v37;
              v42 = (char **)*((_QWORD *)v41 + 1);
              v43 = (char *)*v30;
              if ( *v42 != v41 )
                __fastfail(3u);
              *(_QWORD *)v43 = v41;
              *((_QWORD *)v43 + 1) = v42;
              *v42 = v43;
              *((_QWORD *)v41 + 1) = v43;
            }
            if ( a14 )
              _InterlockedIncrement(v37 + 32);
            goto LABEL_46;
          }
          WdLogSingleEntry0(3LL);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v37, v52);
        }
        else
        {
          _InterlockedIncrement(&dword_1C00768B4);
          WdLogSingleEntry1(6LL, 1919LL);
          DxgkLogInternalTriageEvent(v53, 262145LL);
          v25 = v57;
        }
        WdLogSingleEntry1(1LL, 1426LL);
        DxgkLogInternalTriageEvent(v54, 0x40000LL);
      }
    }
    if ( v61 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v25, v32);
    if ( v30 )
    {
      operator delete(*v30);
      *v30 = 0LL;
    }
    if ( v60 == 1 )
    {
      v55 = v59;
      v60 = 0;
      _InterlockedDecrement((volatile signed __int32 *)v59 + 4);
      ExReleasePushLockSharedEx(v55, 0LL);
LABEL_74:
      KeLeaveCriticalRegion();
    }
    else if ( v60 == 2 )
    {
      v49 = v59;
      v60 = 0;
      v59[1] = 0LL;
      ExReleasePushLockExclusiveEx(v49, 0LL);
      goto LABEL_74;
    }
    return 0LL;
  }
  else
  {
LABEL_46:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    return v15;
  }
}
