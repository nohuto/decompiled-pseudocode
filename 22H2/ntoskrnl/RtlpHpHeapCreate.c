/*
 * XREFs of RtlpHpHeapCreate @ 0x14037A994
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x14037A950 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x14039D048 (ExCreateHeap.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegContextInitialize @ 0x14037AC44 (RtlpHpSegContextInitialize.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AD70 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpSegContextReserve @ 0x14037ADF0 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x14037AE78 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x14037B17C (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x14037B320 (RtlpHpHeapAllocate.c)
 *     RtlpHpRegisterEnvironment @ 0x14037B598 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x1403891BC (RtlpHpHeapDestroy.c)
 *     CmSiRWLockInitialize @ 0x1407905A0 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int MaximumProcessorCount; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm0
  int v10; // ebx
  __int128 v11; // xmm0
  void *HeapManager; // rbx
  unsigned __int8 v13; // r10
  __int64 v14; // rbx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v20)(int, int, char, int, __int64); // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v21)(__int64, __int64, __int64, char); // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v22)(int); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v23)(__int64, __int64, unsigned int); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v24)(__int64); // [rsp+70h] [rbp-10h]

  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  if ( !MaximumProcessorCount )
    MaximumProcessorCount = 1;
  v19 = *a4;
  v7 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v19);
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    *(_DWORD *)(v7 + 20) = a1;
    *(_DWORD *)(v7 + 16) = -571548178;
    *(_OWORD *)v7 = v9;
    v10 = (BYTE1(*(_QWORD *)a4) >= 2u ? 0x10 : 0) | 4;
    if ( (a1 & 0x4000000) == 0 )
      v10 = BYTE1(*(_QWORD *)a4) >= 2u ? 0x10 : 0;
    v19 = *a4;
    RtlpHpSegContextInitialize(v7 + 256, 0x100000, v7, v7 + 832, v7 + 640, v7 + 128, (__int64)&v19, v10);
    LODWORD(v18) = v10;
    v19 = *a4;
    RtlpHpSegContextInitialize(v8 + 448, 0x1000000, v8, 0, 0LL, v8 + 128, (__int64)&v19, v18);
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_QWORD *)(v8 + 224) = 0LL;
    if ( (*(_DWORD *)(v8 + 20) & 0x20000000) != 0 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = v16 + 1;
        if ( (__int64 (*)())RtlpInterceptorRoutines[v16] == HalSystemVectorDispatchEntry )
          break;
        ++v16;
        if ( v17 )
        {
          v17 = 0;
          break;
        }
      }
      *(_DWORD *)(v8 + 24) = v17;
    }
    v11 = *a4;
    v24 = 0LL;
    v20 = RtlpHpSegVsAllocate;
    v21 = RtlpHpSegLfhVsFree;
    v22 = RtlpHpSegLfhVsCommit;
    v23 = RtlpHpSegLfhVsDecommit;
    v19 = v11;
    HeapManager = RtlpHpEnvGetHeapManager(&v19);
    RtlpHpVsContextInitialize(
      v8 + 640,
      v8 + 256,
      (unsigned int)&v20,
      v13 & (unsigned __int8)*(_DWORD *)a4,
      0,
      (__int64)HeapManager + 14540);
    v20 = RtlpHpSegLfhAllocate;
    v21 = RtlpHpSegLfhVsFree;
    v22 = RtlpHpSegLfhVsCommit;
    v23 = RtlpHpSegLfhVsDecommit;
    v24 = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v8 + 832,
      v8 + 256,
      MaximumProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)&v20,
      v8 + 128,
      (__int64)HeapManager + 14536);
    CmSiRWLockInitialize((PRTL_RUN_ONCE)(v8 + 104));
    if ( (int)RtlpHpSegContextReserve(v8 + 256, 0LL, 0LL) < 0 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      RtlpHpHeapDestroy(v8);
  }
  else
  {
    v14 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v14;
}
