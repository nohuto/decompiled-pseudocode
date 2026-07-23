/*
 * XREFs of PsCreateSystemThreadEx @ 0x1406A7470
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 *     NtGetMUIRegistryInfo @ 0x1405FB840 (NtGetMUIRegistryInfo.c)
 *     ExpWatchProductTypeWork @ 0x140612A40 (ExpWatchProductTypeWork.c)
 *     ExpNodeCreateSystemThread @ 0x1406A7338 (ExpNodeCreateSystemThread.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 *     IoCreateSystemThread @ 0x14076DFD0 (IoCreateSystemThread.c)
 *     PopInitSystemSleeperThread @ 0x140779B98 (PopInitSystemSleeperThread.c)
 *     CmpCreateRegistryThread @ 0x140790D84 (CmpCreateRegistryThread.c)
 *     KiStartDpcThread @ 0x14079F874 (KiStartDpcThread.c)
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 *     PfTStart @ 0x1407BFF5C (PfTStart.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407C9994 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1407CB690 (PopFxCreateEmergencyWorkerThread.c)
 *     IopStartApcHardError @ 0x140892FD0 (IopStartApcHardError.c)
 *     MiInitializePartitionThreads @ 0x1408C7DB4 (MiInitializePartitionThreads.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C1A0 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x1402942A0 (KeQueryActiveGroupCount.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspCreateThread @ 0x14063DA6C (PspCreateThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 *v10; // rsi
  char v13; // r12
  __int64 v14; // rbx
  _DWORD *v15; // rdi
  int Thread; // edi
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  unsigned int v20; // ebx
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  int v25[4]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v32[33]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a8;
  v30 = a5;
  v29 = a6;
  v24 = a2;
  v28 = a7;
  memset(v32, 0, 0x208uLL);
  *(_OWORD *)v25 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v13 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 0x72437350u, (__int64)&v23, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v14 = v23;
    v13 = 1;
  }
  else
  {
    v14 = *((_QWORD *)PspSystemPartition + 13);
    v23 = v14;
  }
  v15 = (_DWORD *)(v14 + 2172);
  if ( (*(_DWORD *)(v14 + 2172) & 0x1000) != 0 )
  {
    if ( a8 )
      goto LABEL_17;
    if ( !a9 )
    {
      v20 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v31;
      WORD4(v31) = v20 % KeQueryActiveGroupCount();
      v14 = v23;
      *(_QWORD *)&v31 = qword_140CFC848[WORD4(v31)];
    }
    if ( v10 )
    {
LABEL_17:
      v21 = *v10;
      v22 = 4096;
      DWORD1(v32[0]) = 4096;
      v32[20] = v21;
    }
    else
    {
      v22 = DWORD1(v32[0]);
    }
    if ( a9 )
    {
      DWORD1(v32[0]) = v22 | 0x4000;
      HIDWORD(v32[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = *a3;
    v26 = (__m128i)a3[1];
    *(_OWORD *)v25 = v18;
    v19 = a3[2];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) | 0x200;
    v27 = v19;
  }
  else
  {
    v25[0] = 48;
    v27 = 0LL;
    *(_QWORD *)&v25[2] = 0LL;
    v26.m128i_i32[2] = 512;
    v26.m128i_i64[0] = 0LL;
  }
  Thread = PspCreateThread(
             a1,
             v24,
             (__int64)v25,
             0LL,
             (_KPROCESS *)v14,
             (unsigned __int64)v32 & -(__int64)((*v15 & 0x1000) != 0),
             v30,
             0LL,
             0LL,
             0,
             v29,
             v28,
             0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag((PVOID)v14, 0x72437350u);
  return (unsigned int)Thread;
}
