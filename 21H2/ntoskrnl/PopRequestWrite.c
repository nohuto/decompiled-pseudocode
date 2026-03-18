/*
 * XREFs of PopRequestWrite @ 0x140A4C5B4
 * Callers:
 *     PopWriteHiberImage @ 0x140A4C0E8 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x140A4C590 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406AD260 (MmGetNumberOfPhysicalPages.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x140A4D8D8 (PopGetIoLocation.c)
 *     ProducerConsumerBufferComplete @ 0x140A4D96C (ProducerConsumerBufferComplete.c)
 *     PopHiberChecksumHiberFileData @ 0x140A4DA40 (PopHiberChecksumHiberFileData.c)
 *     ConsumerGetBuffer @ 0x140A4DB8C (ConsumerGetBuffer.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140A6B37C (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140A6B414 (PopRecordHibernateDiagnosticInfo.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r13
  ULONG_PTR i; // rdi
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
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  unsigned int v28; // edi
  unsigned __int64 v29; // rbp
  ULONG_PTR v30; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  ULONG MaxDataSize[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-58h]
  ULONG_PTR v37; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  RemainingHibernateRangeDataSize = 0LL;
  *(_QWORD *)MaxDataSize = 0LL;
  v34 = 0LL;
  v5 = a3;
  v6 = a2;
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 336) = v29 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(i + 328);
      if ( !v8 )
        break;
      v18 = __rdtsc();
      v19 = v18;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 368,
                               v3);
        v21 = __rdtsc();
        qword_140C22D20 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21);
          PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(i + 328) = 2;
      }
      else
      {
        qword_140C22D18 += v18 - *(_QWORD *)(i + 336);
        ProducerConsumerBufferComplete(v6, v6 + 48, *(_QWORD *)(i + 384), *(unsigned int *)(i + 360));
        v22 = __rdtsc();
        qword_140C22D40 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v19;
        qword_140C22EE8 += *(_QWORD *)(i + 360);
        dword_140C22EF0 += (unsigned __int64)(*(_QWORD *)(i + 352) + 4095LL) >> 12;
        v23 = *(_QWORD *)(i + 352);
        *(_QWORD *)(i + 376) += v23;
        *(_QWORD *)(i + 344) += v23;
        *(_QWORD *)(i + 352) = 0LL;
        *(_DWORD *)(i + 328) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_140C01F10[0]();
    v9 = *(_QWORD *)(i + 376);
    v10 = i + 368;
    v11 = *(_QWORD *)(i + 160);
    ++PopWatchdogTimerCount;
    v37 = i + 368;
    IoLocation = PopGetIoLocation(v11, v9, &v34);
    v13 = *(unsigned int *)(i + 408);
    *(_QWORD *)(i + 368) = IoLocation;
    v14 = (v13 << 12) - *(_QWORD *)(i + 344) % (unsigned __int64)(v13 << 12);
    if ( v14 >= v34 )
      v14 = v34;
    v41 = v14;
    Buffer = ConsumerGetBuffer(v6, &v41, v5);
    v16 = Buffer;
    if ( !Buffer )
      break;
    v24 = *(_QWORD *)(i + 376);
    v25 = v41;
    *(_QWORD *)(i + 384) = Buffer;
    *(_QWORD *)(i + 360) = v25;
    if ( v24 + v14 > qword_140C22BD0 )
    {
      PopCheckpointSystemSleep(22);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(i);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C22BD0, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(i, 1, v24, Buffer, v25);
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v14;
    *(_QWORD *)(v3 + 24) = v16;
    v26 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    *(_DWORD *)(v3 + 44) = v16 & 0xFFF;
    v36 = v26;
    *(_WORD *)(v3 + 10) = 1;
    *(_WORD *)(v3 + 8) = 8 * (v26 + 6);
    *(_QWORD *)(v3 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v26 )
    {
      v27 = 0LL;
      v28 = 0;
      do
      {
        ++v28;
        *(_QWORD *)(v3 + 8 * v27 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v16 + (v27 << 12))).QuadPart >> 12;
        v27 = v28;
      }
      while ( v28 < ((v16 & 0xFFF) + v14 + 4095) >> 12 );
      v5 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      i = BugCheckParameter3;
      v10 = v37;
    }
    *(_QWORD *)(i + 352) = v14;
    if ( !*(_BYTE *)(i + 392) )
      goto LABEL_28;
    v29 = __rdtsc();
    v30 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(1LL, v10, v3, 0LL);
    v31 = __rdtsc();
    qword_140C22D20 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v29;
    if ( (_DWORD)v30 == -1073741637 )
    {
      *(_BYTE *)(i + 392) = 0;
    }
    else
    {
      if ( (v30 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v30);
      }
      *(_DWORD *)(i + 328) = ((_DWORD)v30 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 392) )
    {
LABEL_28:
      v29 = __rdtsc();
      v32 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(v10, v3);
      v33 = __rdtsc();
      qword_140C22D20 += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v29;
      if ( (v32 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v32);
      }
      *(_DWORD *)(i + 328) = 2;
    }
    v6 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v41 == 0;
  return RemainingHibernateRangeDataSize;
}
