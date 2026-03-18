/*
 * XREFs of RtlpHpHeapCreate @ 0x14036F620
 * Callers:
 *     ExCreateHeap @ 0x14036F5D4 (ExCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x1403DE6A0 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpHeapDestroy @ 0x14036EBE8 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegContextInitialize @ 0x14036F8F8 (RtlpHpSegContextInitialize.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpSegContextReserve @ 0x14036FAB0 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x14036FC3C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x14036FF40 (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1403700FC (RtlpHpHeapAllocate.c)
 *     RtlpHpRegisterEnvironment @ 0x140371C50 (RtlpHpRegisterEnvironment.c)
 *     CmSiRWLockInitialize @ 0x1407F3B30 (CmSiRWLockInitialize.c)
 */

unsigned __int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rsi
  unsigned int MaximumProcessorCount; // r15d
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // ebx
  unsigned int v13; // edx
  __int128 v14; // xmm0
  void *HeapManager; // rbx
  unsigned __int8 v16; // r10
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall *v21)(int, int, char, int, __int64); // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v22)(__int64, __int64, __int64, char); // [rsp+70h] [rbp+Fh]
  __int64 (__fastcall *v23)(int); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v24)(__int64, int, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v25)(__int64); // [rsp+88h] [rbp+27h]

  v6 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( !MaximumProcessorCount )
      MaximumProcessorCount = 1;
    v20 = *a4;
    v8 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v20);
    v9 = v8;
    if ( v8 )
    {
      v10 = *a4;
      *(_DWORD *)(v8 + 16) = -571548178;
      v11 = 0;
      *(_DWORD *)(v8 + 20) = a1;
      *(_OWORD *)v8 = v10;
      if ( BYTE1(*(_QWORD *)a4) >= 2u )
      {
        v11 = 16;
        if ( (*(_BYTE *)(v8 + 30) & 1) == 0 )
        {
          v18 = *(_QWORD *)(v8 + 240);
          v19 = *(_QWORD *)(v8 + 248);
          if ( v18 > v19 && v18 - v19 >= 0x100000 && v19 - v9 <= 0x100000 )
            v11 = 48;
        }
      }
      v12 = v11 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v12 = v11;
      v20 = v10;
      RtlpHpSegContextInitialize(v9 + 320, 0x100000, v9, v9 + 896, v9 + 704, v9 + 128, v9 + 160, (__int64)&v20, v12);
      v13 = v12 & 0xFFFFFFDF;
      v20 = *a4;
      if ( BYTE1(v20) < 2u )
        v13 = v12;
      RtlpHpSegContextInitialize(v9 + 512, 0x1000000, v9, 0, 0LL, v9 + 128, v9 + 176, (__int64)&v20, v13);
      *(_QWORD *)(v9 + 64) = 0LL;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 224) = 0LL;
      if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
        *(_DWORD *)(v9 + 24) = CLFS_LSN_NULL_EXT == (_QWORD)HalSystemVectorDispatchEntry;
      v14 = *a4;
      v25 = 0LL;
      v21 = RtlpHpSegVsAllocate;
      v22 = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      v24 = RtlpHpSegLfhVsDecommit;
      v20 = v14;
      HeapManager = RtlpHpEnvGetHeapManager(&v20);
      RtlpHpVsContextInitialize(
        v9 + 704,
        v9 + 320,
        (unsigned int)&v21,
        v16 & (unsigned __int8)*(_DWORD *)a4,
        0,
        (__int64)HeapManager + 14556);
      v21 = RtlpHpSegLfhAllocate;
      v22 = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      v24 = RtlpHpSegLfhVsDecommit;
      v25 = RtlpHpSegLfhExtendContext;
      RtlpHpLfhContextInitialize(
        v9 + 896,
        v9 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v21,
        v9 + 128,
        (__int64)HeapManager + 14552);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v9 + 112));
      if ( (int)RtlpHpSegContextReserve(v9 + 320, 0LL, 0LL) < 0 )
        RtlpHpHeapDestroy(v9);
      else
        return v9;
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0LL);
    }
  }
  return v6;
}
