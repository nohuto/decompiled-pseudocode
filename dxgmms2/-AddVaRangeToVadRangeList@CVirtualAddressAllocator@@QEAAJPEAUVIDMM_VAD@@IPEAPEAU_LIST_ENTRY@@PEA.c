/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C009C8A0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00A69AC (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001310 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0011974 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C002FF60 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0087938 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00B3DB0 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00B4824 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00B4920 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  struct _KTHREAD **v7; // r13
  __int64 v8; // rsi
  struct _LIST_ENTRY *v9; // rdi
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY *v11; // rbp
  __int64 *v12; // rsi
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rbp
  bool v17; // dl
  _QWORD *v18; // r13
  unsigned __int64 v19; // r9
  __int64 v20; // rbp
  _QWORD *v21; // r8
  __int64 ***v22; // rcx
  __int64 *v23; // rdx
  __int64 **v24; // rax
  char **Blink; // rcx
  char *v26; // rax
  int v27; // edi
  unsigned __int64 *v28; // r12
  int v30; // ecx
  struct _LIST_ENTRY *v31; // r9
  unsigned __int64 *p_Blink; // rax
  unsigned __int64 v33; // rcx
  struct _LIST_ENTRY *v34; // rdx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  __int64 v37; // r10
  struct VIDMM_MAPPED_VA_RANGE *v38; // rax
  struct VIDMM_VAD *v39; // rdx
  struct _LIST_ENTRY *v40; // r9
  unsigned int v41; // edx
  struct _LIST_ENTRY *v42; // r9
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // r10
  struct VIDMM_VAD *v46; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v47; // rsi
  struct _LIST_ENTRY *v48; // r9
  unsigned int v49; // edx
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  unsigned __int64 v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  struct _KTHREAD **v61; // r14
  struct _KTHREAD ***v62; // rax
  struct _KTHREAD *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // [rsp+50h] [rbp-78h]
  struct _LIST_ENTRY *v67; // [rsp+70h] [rbp-58h]
  struct _LIST_ENTRY *v68; // [rsp+70h] [rbp-58h]
  VIDMM_MAPPED_VA_RANGE *v70; // [rsp+D0h] [rbp+8h]
  VIDMM_MAPPED_VA_RANGE *v71; // [rsp+D0h] [rbp+8h]
  struct VIDMM_MAPPED_VA_RANGE *v72; // [rsp+D8h] [rbp+10h]
  char v73; // [rsp+E0h] [rbp+18h]
  struct _LIST_ENTRY *v74; // [rsp+E8h] [rbp+20h]

  v7 = this;
  v8 = a3;
  v73 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v73 = 1;
  }
  v9 = (struct _LIST_ENTRY *)((char *)a2 + 24 * v8 + 96);
  v10 = a4;
  if ( !a4 )
    v10 = (struct _LIST_ENTRY **)((char *)a2 + 24 * v8 + 96);
  v11 = *v10;
  if ( *v10 == v9 )
  {
LABEL_6:
    v12 = (__int64 *)*((_QWORD *)a5 + 7);
    v13 = (int)(*((_DWORD *)a5 + 16) << 28) >> 28;
    if ( v13 != 1 )
    {
      v30 = v13 - 4;
      if ( v30 )
      {
        if ( v30 != 1 )
          goto LABEL_12;
        v12 = (__int64 *)v12[3];
      }
      else
      {
        v12 = (__int64 *)v12[8];
      }
    }
    if ( v12 )
    {
      v14 = *(_QWORD *)*v12;
      KeEnterCriticalRegion();
      v15 = v14 + 368;
      ExAcquirePushLockExclusiveEx(v14 + 368, 0LL);
      v16 = *((_QWORD *)a5 + 10);
      v17 = v16 < 0;
      v18 = (_QWORD *)(v14 + 168);
      v19 = *((_QWORD *)a5 + 9);
      v20 = v16 & 0x7FFFFFFFFFFFFFFFLL;
      v21 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 == v18 )
      {
LABEL_9:
        if ( v17 )
        {
          v59 = (_QWORD *)v18[1];
          v60 = (_QWORD *)((char *)a5 + 40);
          if ( (_QWORD *)*v59 != v18 )
            goto LABEL_82;
          *v60 = v18;
          *((_QWORD *)a5 + 6) = v59;
          *v59 = v60;
          v18[1] = v60;
        }
      }
      else
      {
        while ( 1 )
        {
          v54 = v21[4];
          if ( v19 + *((_QWORD *)a5 + 13) - *((_QWORD *)a5 + 12) <= v54 )
            break;
          v68 = (struct _LIST_ENTRY *)v21[8];
          if ( v19 < (unsigned __int64)v68 + v54 - v21[7] && v20 != (v21[5] & 0x7FFFFFFFFFFFFFFFLL) )
          {
            WdLogSingleEntry4(1LL, v21[7], v68, v21[5], v20);
            DxgkLogInternalTriageEvent(v55, 0x40000LL);
            v27 = -1073741811;
            ExReleasePushLockExclusiveEx(v15, 0LL);
            KeLeaveCriticalRegion();
            WdLogSingleEntry1(1LL, 9040LL);
            DxgkLogInternalTriageEvent(v56, 0x40000LL);
            v7 = this;
            goto LABEL_18;
          }
          if ( v17 && v19 < v54 )
            goto LABEL_67;
          v21 = (_QWORD *)*v21;
          if ( v21 == v18 )
            goto LABEL_9;
        }
        if ( v17 )
        {
LABEL_67:
          v57 = (_QWORD *)v21[1];
          v58 = (_QWORD *)((char *)a5 + 40);
          if ( (_QWORD *)*v57 != v21 )
            goto LABEL_82;
          *v58 = v21;
          *((_QWORD *)a5 + 6) = v57;
          *v57 = v58;
          v21[1] = v58;
        }
      }
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      v22 = (__int64 ***)(v12 + 16);
      v23 = (__int64 *)v12[16];
      v24 = (__int64 **)((char *)a5 + 24);
      if ( (__int64 *)v23[1] != v12 + 16 )
        goto LABEL_82;
      v7 = this;
      *v24 = v23;
      *((_QWORD *)a5 + 4) = v22;
      v23[1] = (__int64)v24;
      *v22 = v24;
    }
LABEL_12:
    Blink = (char **)v9->Blink;
    v26 = (char *)a5 + 8;
    if ( *Blink == (char *)v9 )
    {
      *(_QWORD *)v26 = v9;
      *((_QWORD *)a5 + 2) = Blink;
      *Blink = v26;
      v9->Blink = (struct _LIST_ENTRY *)v26;
      ++*((_DWORD *)a2 + 19);
      if ( (*((_BYTE *)a5 + 88) & 4) == 0 )
        goto LABEL_14;
      v61 = (struct _KTHREAD **)((char *)a2 + 56);
      if ( *v61 )
        goto LABEL_14;
      v62 = (struct _KTHREAD ***)(v7 + 16);
      v63 = v7[16];
      if ( *((struct _KTHREAD ***)v63 + 1) == v7 + 16 )
      {
        *v61 = v63;
        v61[1] = (struct _KTHREAD *)v62;
        *((_QWORD *)v63 + 1) = v61;
        *v62 = v61;
LABEL_14:
        v27 = 0;
        v28 = (unsigned __int64 *)((char *)a5 + 104);
        goto LABEL_15;
      }
    }
LABEL_82:
    __fastfail(3u);
  }
  v28 = (unsigned __int64 *)((char *)a5 + 104);
  while ( 1 )
  {
    v31 = v11[5].Blink;
    p_Blink = (unsigned __int64 *)&v11[-1].Blink;
    v33 = *v28;
    v34 = v11;
    v74 = v11;
    v11 = v11->Flink;
    v67 = v34;
    v72 = (struct VIDMM_MAPPED_VA_RANGE *)p_Blink;
    if ( *v28 <= (unsigned __int64)v31 )
      break;
    v35 = *((_QWORD *)a5 + 12);
    v36 = p_Blink[13];
    if ( v35 < v36 )
    {
      if ( v35 <= (unsigned __int64)v31 )
      {
        if ( v33 < v36 )
        {
          v27 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v7, a2, a5, v31, v34);
          if ( v27 < 0 )
            goto LABEL_18;
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)v7,
            v72,
            *((_QWORD *)v72 + 9),
            *((_QWORD *)v72 + 12),
            *v28);
          v50 = *((_QWORD *)v72 + 7);
          v51 = (int)(*((_DWORD *)v72 + 16) << 28) >> 28;
          if ( v51 >= 1 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              v53 = v52 - 3;
              if ( !v53 )
              {
                v50 = *(_QWORD *)(v50 + 64);
                goto LABEL_50;
              }
              if ( v53 == 1 )
              {
                v50 = *(_QWORD *)(v50 + 24);
                goto LABEL_50;
              }
            }
            else
            {
LABEL_50:
              if ( v50 )
                *((_QWORD *)v72 + 9) = VidMmiCalculateNewOwnerOffset(v72, *v28 - *((_QWORD *)v72 + 12));
            }
          }
          *((_QWORD *)v72 + 12) = *v28;
          goto LABEL_15;
        }
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)v7,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          p_Blink[9],
          (unsigned __int64)v31,
          p_Blink[13]);
        CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)v7, v67, 0, 1);
      }
      else
      {
        if ( v33 < v36 )
        {
          v37 = operator new(136LL, 0x39346956u, 256LL);
          if ( !v37 )
            goto LABEL_55;
          v38 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                  v37,
                                                  (__int64)a2,
                                                  *((_QWORD *)v72 + 12),
                                                  *((_QWORD *)a5 + 12),
                                                  v8,
                                                  *((_QWORD *)v72 + 7),
                                                  *((_QWORD *)v72 + 9),
                                                  (int)(*((_DWORD *)v72 + 16) << 28) >> 28,
                                                  *((_QWORD *)v72 + 11),
                                                  *((_QWORD *)v72 + 10),
                                                  *((_QWORD *)v72 + 15),
                                                  *((_QWORD *)v72 + 14));
          v70 = v38;
          if ( !v38 )
            goto LABEL_55;
          v27 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v7, v39, v38, v40, v74);
          if ( v27 < 0 )
          {
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v70, v41);
            goto LABEL_18;
          }
          v27 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v7, a2, a5, v42, v74);
          if ( v27 < 0 )
            goto LABEL_18;
          v71 = (VIDMM_MAPPED_VA_RANGE *)VidMmiCalculateNewOwnerOffset(
                                           v72,
                                           *((_QWORD *)a5 + 12) - *((_QWORD *)v72 + 12));
          v44 = VidMmiCalculateNewOwnerOffset(v72, *v28 - v43);
          v45 = operator new(136LL, 0x39346956u, 256LL);
          if ( !v45
            || (v47 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                        v45,
                                                        (__int64)a2,
                                                        *v28,
                                                        *((_QWORD *)v72 + 13),
                                                        v8,
                                                        *((_QWORD *)v72 + 7),
                                                        v44,
                                                        (int)(*((_DWORD *)v72 + 16) << 28) >> 28,
                                                        *((_QWORD *)v72 + 11),
                                                        *((_QWORD *)v72 + 10),
                                                        *((_QWORD *)v72 + 15),
                                                        *((_QWORD *)v72 + 14))) == 0LL )
          {
LABEL_55:
            v27 = -1073741801;
            goto LABEL_18;
          }
          v27 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v7, v46, v47, v48, v74);
          if ( v27 < 0 )
          {
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v47, v49);
            goto LABEL_18;
          }
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)v7,
            v72,
            (unsigned __int64)v71,
            *((_QWORD *)a5 + 12),
            *v28);
          CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)v7, v67, 0, 0);
          goto LABEL_15;
        }
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)v7,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          p_Blink[9],
          v35,
          p_Blink[13]);
        *((_QWORD *)v72 + 13) = *((_QWORD *)a5 + 12);
      }
    }
    if ( v11 == v9 )
      goto LABEL_6;
  }
  v27 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)v7, a2, a5, v31, v34);
  if ( v27 < 0 )
    goto LABEL_18;
LABEL_15:
  if ( a4 )
    *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
  if ( (byte_1C00769C2 & 0x20) != 0 )
  {
    v64 = *((_QWORD *)a5 + 7);
    v65 = (unsigned int)((int)(*((_DWORD *)a5 + 16) << 28) >> 28);
    if ( (int)v65 >= 1 )
    {
      v65 = (unsigned int)(v65 - 1);
      if ( !(_DWORD)v65 )
      {
LABEL_81:
        LODWORD(v66) = *((_DWORD *)a5 + 16);
        McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
          v65,
          &UpdateGpuVirtualAddressRangeMapping,
          (unsigned int)v66,
          v7,
          v64,
          *((_QWORD *)a5 + 9),
          *((_QWORD *)a5 + 12),
          *v28,
          *((_QWORD *)a5 + 11),
          *((_QWORD *)a5 + 10),
          v66,
          *((_QWORD *)a5 + 14),
          *((_QWORD *)a5 + 15));
        goto LABEL_18;
      }
      v65 = (unsigned int)(v65 - 3);
      if ( !(_DWORD)v65 )
      {
        v64 = *(_QWORD *)(v64 + 64);
        goto LABEL_81;
      }
      if ( (_DWORD)v65 == 1 )
      {
        v64 = *(_QWORD *)(v64 + 24);
        goto LABEL_81;
      }
    }
    v64 = 0LL;
    goto LABEL_81;
  }
LABEL_18:
  if ( v73 )
  {
    v7[8] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v27;
}
