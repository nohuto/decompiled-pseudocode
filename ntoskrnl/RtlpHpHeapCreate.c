/*
 * XREFs of RtlpHpHeapCreate @ 0x140375288
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x140374B90 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x14037523C (ExCreateHeap.c)
 * Callees:
 *     RtlpHpVsContextInitialize @ 0x1402F7B28 (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x140375540 (RtlpHpSegContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x140375668 (RtlpHpHeapAllocate.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     RtlpHpSegContextReserve @ 0x14037596C (RtlpHpSegContextReserve.c)
 *     RtlpHpRegisterEnvironment @ 0x1403759F0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpLfhContextInitialize @ 0x140375CA8 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 *     CmSiRWLockInitialize @ 0x14080BCF0 (CmSiRWLockInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int MaximumProcessorCount; // r12d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int128 v12; // xmm0
  int v13; // ecx
  int v14; // r14d
  unsigned int v15; // edx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  __int128 v21; // [rsp+58h] [rbp-9h] BYREF
  __int128 v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(__int64, unsigned __int64, unsigned int); // [rsp+78h] [rbp+17h]
  __int64 (__fastcall *v24)(__int64, int, unsigned int); // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v25)(__int64); // [rsp+88h] [rbp+27h]

  v8 = 0LL;
  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) >= 0 )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount(v7, v6);
    if ( !MaximumProcessorCount )
      MaximumProcessorCount = 1;
    v21 = *a4;
    v10 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v21);
    v11 = v10;
    if ( v10 )
    {
      v12 = *a4;
      *(_DWORD *)(v10 + 16) = -571548178;
      v13 = 0;
      *(_DWORD *)(v10 + 20) = a1;
      *(_OWORD *)v10 = v12;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
      {
        v13 = 16;
        if ( (*(_BYTE *)(v10 + 30) & 1) == 0 )
        {
          v17 = *(_QWORD *)(v10 + 240);
          v18 = *(_QWORD *)(v10 + 248);
          if ( v17 > v18 && v17 - v18 >= 0x100000 && v18 - v11 <= 0x100000 )
            v13 = 48;
        }
      }
      v14 = v13 | 4;
      if ( (a1 & 0x4000000) == 0 )
        v14 = v13;
      v21 = v12;
      RtlpHpSegContextInitialize(
        v11 + 320,
        0x100000,
        v11,
        v11 + 896,
        v11 + 704,
        v11 + 128,
        v11 + 160,
        (__int64)&v21,
        v14);
      v15 = v14;
      if ( BYTE1(*(_QWORD *)a4) >= 2u && BYTE1(*(_QWORD *)a4) < 5u )
        v15 = v14 & 0xFFFFFFDF;
      v21 = *a4;
      RtlpHpSegContextInitialize(v11 + 512, 0x1000000, v11, 0, 0LL, v11 + 128, v11 + 176, (__int64)&v21, v15);
      *(_QWORD *)(v11 + 64) = 0LL;
      *(_QWORD *)(v11 + 72) = 0LL;
      *(_QWORD *)(v11 + 80) = 0LL;
      *(_QWORD *)(v11 + 224) = 0LL;
      if ( (*(_DWORD *)(v11 + 20) & 0x20000000) != 0 )
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = v19 + 1;
          if ( (__int64 (*)())CLFS_LSN_NULL_EXT[v19] == PdcCreateWatchdogAroundClientCall )
            break;
          ++v19;
          if ( v20 )
          {
            v20 = 0;
            break;
          }
        }
        *(_DWORD *)(v11 + 24) = v20;
      }
      v25 = 0LL;
      *(_QWORD *)&v22 = RtlpHpSegVsAllocate;
      v24 = RtlpHpSegLfhVsDecommit;
      *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      RtlpHpVsContextInitialize(v11 + 704, v11 + 320, &v22, *(_DWORD *)a4 & 1, 0, &dword_140C7465C);
      v24 = RtlpHpSegLfhVsDecommit;
      *(_QWORD *)&v22 = RtlpHpSegLfhAllocate;
      *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
      v23 = RtlpHpSegLfhVsCommit;
      v25 = RtlpHpSegLfhExtendContext;
      RtlpHpLfhContextInitialize(
        v11 + 896,
        v11 + 320,
        MaximumProcessorCount,
        *(_DWORD *)a4 & 1,
        (__int64)&v22,
        v11 + 128,
        (__int64)&unk_140C74658);
      CmSiRWLockInitialize((PRTL_RUN_ONCE)(v11 + 112));
      if ( (int)RtlpHpSegContextReserve(v11 + 320, 0LL, 0LL) < 0 )
        RtlpHpHeapDestroy(v11);
      else
        return v11;
    }
    else
    {
      RtlpHpRegisterEnvironment(a4, 0LL);
    }
  }
  return v8;
}
