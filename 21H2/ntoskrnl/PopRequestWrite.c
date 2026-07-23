/*
 * XREFs of PopRequestWrite @ 0x140994DB4
 * Callers:
 *     PopWriteHiberImage @ 0x140994C74 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x140994D90 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     MmGetNumberOfPhysicalPages @ 0x140644560 (MmGetNumberOfPhysicalPages.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x1409950F8 (PopGetIoLocation.c)
 *     ConsumerGetBuffer @ 0x14099514C (ConsumerGetBuffer.c)
 *     PopHiberChecksumHiberFileData @ 0x140995200 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x1409956AC (ProducerConsumerBufferComplete.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409B21C4 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x1409B2694 (PopRecordHibernateDiagnosticInfo.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  ULONG_PTR v10; // r12
  __int64 v11; // rcx
  __int64 IoLocation; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r15
  __int64 Buffer; // rax
  __int64 v16; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r12
  unsigned int v26; // edi
  unsigned __int64 v27; // rbp
  ULONG_PTR v28; // r15
  unsigned __int64 v29; // rax
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v35; // [rsp+38h] [rbp-60h] BYREF
  ULONG MaxDataSize[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-50h]
  ULONG_PTR v38; // [rsp+50h] [rbp-48h]
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  RemainingHibernateRangeDataSize = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(BugCheckParameter3 + 320);
  v7 = BugCheckParameter3;
  *(_QWORD *)MaxDataSize = 0LL;
  v35 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 328);
      if ( !v8 )
        break;
      v18 = __rdtsc();
      v19 = v18;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(v7 + 168) + 128LL))(
                               2LL,
                               v7 + 368,
                               v6);
        v31 = __rdtsc();
        qword_140C23FC0 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v19;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21);
          PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(v7 + 328) = 2;
      }
      else
      {
        qword_140C23FB8 += v18 - *(_QWORD *)(v7 + 336);
        ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(v7 + 384), *(unsigned int *)(v7 + 360));
        v20 = __rdtsc();
        qword_140C23FE0 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v19;
        qword_140C24188 += *(_QWORD *)(v7 + 360);
        dword_140C24190 += (unsigned __int64)(*(_QWORD *)(v7 + 352) + 4095LL) >> 12;
        v21 = *(_QWORD *)(v7 + 352);
        *(_QWORD *)(v7 + 376) += v21;
        *(_QWORD *)(v7 + 344) += v21;
        *(_QWORD *)(v7 + 352) = 0LL;
        *(_DWORD *)(v7 + 328) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_140C008C0[0]();
    v9 = *(_QWORD *)(v7 + 376);
    v10 = v7 + 368;
    v11 = *(_QWORD *)(v7 + 160);
    ++PopWatchdogTimerCount;
    v38 = v7 + 368;
    IoLocation = PopGetIoLocation(v11, v9, &v35);
    v13 = *(unsigned int *)(v7 + 408);
    *(_QWORD *)(v7 + 368) = IoLocation;
    v14 = (v13 << 12) - *(_QWORD *)(v7 + 344) % (unsigned __int64)(v13 << 12);
    if ( v14 >= v35 )
      v14 = v35;
    v41 = v14;
    Buffer = ConsumerGetBuffer(v5, &v41, v4);
    v16 = Buffer;
    if ( !Buffer )
      break;
    v22 = *(_QWORD *)(v7 + 376);
    v23 = v41;
    *(_QWORD *)(v7 + 384) = Buffer;
    *(_QWORD *)(v7 + 360) = v23;
    if ( v22 + v14 > qword_140C23E70 )
    {
      PopCheckpointSystemSleep(22);
      if ( (unsigned int)(*(_DWORD *)(v7 + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(v7);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v7);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C23E70, *(unsigned int *)(v7 + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(v7, 1, v22, Buffer, v23);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 40) = v14;
    *(_QWORD *)(v6 + 24) = v16;
    v24 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    *(_DWORD *)(v6 + 44) = v16 & 0xFFF;
    v37 = v24;
    *(_WORD *)(v6 + 10) = 1;
    *(_WORD *)(v6 + 8) = 8 * (v24 + 6);
    *(_QWORD *)(v6 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v24 )
    {
      v25 = 0LL;
      v26 = 0;
      do
      {
        ++v26;
        *(_QWORD *)(v6 + 8 * v25 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v16 + (v25 << 12))).QuadPart >> 12;
        v25 = v26;
      }
      while ( v26 < ((v16 & 0xFFF) + v14 + 4095) >> 12 );
      v4 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      v7 = BugCheckParameter3;
      v10 = v38;
    }
    *(_QWORD *)(v7 + 352) = v14;
    if ( !*(_BYTE *)(v7 + 392) )
      goto LABEL_18;
    v27 = __rdtsc();
    v32 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(v7 + 168) + 128LL))(
            1LL,
            v10,
            v6,
            0LL);
    v33 = __rdtsc();
    qword_140C23FC0 += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v27;
    if ( (_DWORD)v32 == -1073741637 )
    {
      *(_BYTE *)(v7 + 392) = 0;
    }
    else
    {
      if ( (v32 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v32);
      }
      *(_DWORD *)(v7 + 328) = ((_DWORD)v32 != 259) + 1;
    }
    if ( !*(_BYTE *)(v7 + 392) )
    {
LABEL_18:
      v27 = __rdtsc();
      v28 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(v7 + 168) + 64LL))(v10, v6);
      v29 = __rdtsc();
      qword_140C23FC0 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v27;
      if ( (v28 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(v7, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v28);
      }
      *(_DWORD *)(v7 + 328) = 2;
    }
    v5 = a2;
    *(_QWORD *)(v7 + 336) = v27;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v41 == 0;
  return RemainingHibernateRangeDataSize;
}
