/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0076394
 * Callers:
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0076264 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B39A8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00BB3E4 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001454 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001EB4 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002020 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00260D4 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0067F6C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0076454 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00BE1B0 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00BE1DC (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY *Blink,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  struct _LIST_ENTRY *v5; // r12
  __int64 v7; // rbx
  struct _LIST_ENTRY *v9; // r15
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Flink; // rsi
  int v12; // eax
  int v13; // esi
  unsigned __int64 v15; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v17; // r13
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  struct _LIST_ENTRY *v20; // r9
  PVOID v21; // r10
  struct VIDMM_MAPPED_VA_RANGE *v22; // r15
  unsigned int v23; // edx
  struct _LIST_ENTRY *v24; // r9
  __int64 v25; // r9
  __int64 v26; // rsi
  struct _LIST_ENTRY *v27; // r9
  PVOID v28; // r10
  __int64 VidMmAllocFromOwner; // rax
  __int64 v30; // r8
  __int64 v31; // [rsp+50h] [rbp-68h]
  char v32; // [rsp+C0h] [rbp+8h]
  char v33; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+D8h] [rbp+20h]

  v33 = a3;
  v5 = Blink;
  v7 = a3;
  v32 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v32 = 1;
  }
  v9 = (struct _LIST_ENTRY *)((char *)a2 + 24 * v7 + 96);
  v10 = v9;
  if ( v5 )
    v10 = v5;
  Flink = v10->Flink;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( Flink == v9 )
        {
          v12 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v9);
          goto LABEL_8;
        }
        v15 = *((_QWORD *)a5 + 13);
        p_Blink = &Flink[-1].Blink;
        Blink = Flink[5].Blink;
        v17 = Flink;
        Flink = Flink->Flink;
        if ( v15 <= (unsigned __int64)Blink )
        {
          v12 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v17);
LABEL_8:
          v13 = v12;
          if ( v12 < 0 )
            goto LABEL_13;
LABEL_9:
          if ( v5 )
            v5->Flink = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
          {
            VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
            LODWORD(v31) = v30;
            McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
              *((_QWORD *)a5 + 9),
              &UpdateGpuVirtualAddressRangeMapping,
              v30,
              this,
              VidMmAllocFromOwner,
              *((_QWORD *)a5 + 9),
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13),
              *((_QWORD *)a5 + 11),
              *((_QWORD *)a5 + 10),
              v31,
              *((_QWORD *)a5 + 14),
              *((_QWORD *)a5 + 15));
          }
          goto LABEL_13;
        }
        v18 = *((_QWORD *)a5 + 12);
        v19 = (unsigned __int64)p_Blink[13];
      }
      while ( v18 >= v19 );
      if ( v18 > (unsigned __int64)Blink )
        break;
      if ( v15 < v19 )
      {
        v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v17);
        if ( v13 < 0 )
          goto LABEL_13;
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          (unsigned __int64)p_Blink[9],
          (unsigned __int64)p_Blink[12],
          *((_QWORD *)a5 + 13));
        if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
          p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                               (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                               *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
        p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
        goto LABEL_9;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
        (unsigned __int64)p_Blink[9],
        (unsigned __int64)Blink,
        (unsigned __int64)p_Blink[13]);
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v17, 0, 1);
    }
    if ( v15 < v19 )
      break;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (unsigned __int64)p_Blink[9],
      *((_QWORD *)a5 + 12),
      (unsigned __int64)p_Blink[13]);
    p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
  }
  v21 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v21 )
    v22 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v21,
                                            (__int64)a2,
                                            (__int64)p_Blink[12],
                                            *((_QWORD *)a5 + 12),
                                            v33,
                                            (__int64)p_Blink[7],
                                            (__int64)p_Blink[9],
                                            (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                            (__int64)p_Blink[11],
                                            (__int64)p_Blink[10],
                                            (__int64)p_Blink[15],
                                            (__int64)p_Blink[14]);
  else
    v22 = 0LL;
  if ( !v22 )
    goto LABEL_35;
  v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v22, v20, v17);
  if ( v13 < 0 )
    goto LABEL_36;
  v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v24, v17);
  if ( v13 < 0 )
    goto LABEL_13;
  v34 = VidMmiCalculateNewOwnerOffset(
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
  v26 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, *((_QWORD *)a5 + 13) - v25);
  v28 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  v22 = v28
      ? (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                          (__int64)v28,
                                          (__int64)a2,
                                          *((_QWORD *)a5 + 13),
                                          (__int64)p_Blink[13],
                                          v33,
                                          (__int64)p_Blink[7],
                                          v26,
                                          (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                          (__int64)p_Blink[11],
                                          (__int64)p_Blink[10],
                                          (__int64)p_Blink[15],
                                          (__int64)p_Blink[14])
      : 0LL;
  if ( !v22 )
  {
LABEL_35:
    v13 = -1073741801;
    goto LABEL_13;
  }
  v13 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v22, v27, v17);
  if ( v13 >= 0 )
  {
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      v34,
      *((_QWORD *)a5 + 12),
      *((_QWORD *)a5 + 13));
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v17, 0, 0);
    goto LABEL_9;
  }
LABEL_36:
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v22, v23);
LABEL_13:
  if ( v32 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
