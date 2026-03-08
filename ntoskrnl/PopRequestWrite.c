/*
 * XREFs of PopRequestWrite @ 0x140AA0E40
 * Callers:
 *     PopCompressCallback @ 0x140A9EDE0 (PopCompressCallback.c)
 *     PopWriteHiberImage @ 0x140AA272C (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     MmGetNumberOfPhysicalPages @ 0x140768AB0 (MmGetNumberOfPhysicalPages.c)
 *     ConsumerGetBuffer @ 0x140A9E584 (ConsumerGetBuffer.c)
 *     PopGetIoLocation @ 0x140A9FBBC (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140A9FC4C (PopGetRemainingHibernateRangeDataSize.c)
 *     PopHiberChecksumHiberFileData @ 0x140A9FFDC (PopHiberChecksumHiberFileData.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140AA0920 (PopRecordHibernateDiagnosticInfo.c)
 *     ProducerConsumerBufferComplete @ 0x140AA2D38 (ProducerConsumerBufferComplete.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  __int64 v3; // r15
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  char v5; // bl
  __int64 v6; // r13
  ULONG_PTR i; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 IoLocation; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  unsigned __int64 Buffer; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // r12
  ULONG_PTR v29; // rbp
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  ULONG MaxDataSize[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  RemainingHibernateRangeDataSize = 0LL;
  *(_QWORD *)MaxDataSize = 0LL;
  v34 = 0LL;
  v5 = a3;
  v35 = v3;
  v6 = a2;
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 336) = v28 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(i + 328);
      if ( !v8 )
        break;
      v9 = __rdtsc();
      v10 = v9;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 368,
                               v3);
        v14 = __rdtsc();
        qword_140C3CFE0 += (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v10;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL);
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
        qword_140C3CFD8 += v9 - *(_QWORD *)(i + 336);
        ProducerConsumerBufferComplete(v6, v6 + 48, *(_QWORD *)(i + 384), *(unsigned int *)(i + 360));
        v11 = __rdtsc();
        qword_140C3D000 += (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - v10;
        qword_140C3D1A8 += *(_QWORD *)(i + 360);
        dword_140C3D1B0 += (unsigned __int64)(*(_QWORD *)(i + 352) + 4095LL) >> 12;
        v12 = *(_QWORD *)(i + 352);
        *(_QWORD *)(i + 376) += v12;
        *(_QWORD *)(i + 344) += v12;
        *(_QWORD *)(i + 352) = 0LL;
        *(_DWORD *)(i + 328) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_140C01CD0[0]();
    v15 = *(_QWORD *)(i + 376);
    v16 = *(_QWORD *)(i + 160);
    ++PopWatchdogTimerCount;
    IoLocation = PopGetIoLocation(v16, v15, &v34);
    v18 = *(unsigned int *)(i + 408);
    *(_QWORD *)(i + 368) = IoLocation;
    v19 = (v18 << 12) - *(_QWORD *)(i + 344) % (unsigned __int64)(v18 << 12);
    v40 = v19;
    if ( v19 >= v34 )
    {
      v40 = v34;
      v19 = v34;
    }
    Buffer = ConsumerGetBuffer(v6, (unsigned int *)&v40, v5);
    v21 = Buffer;
    if ( !Buffer )
      break;
    v22 = *(_QWORD *)(i + 376);
    v23 = v40;
    *(_QWORD *)(i + 384) = Buffer;
    *(_QWORD *)(i + 360) = v23;
    if ( v22 + v19 > qword_140C3CA70 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(i);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140C3CA70, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(i, 1, v22, Buffer, v23);
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v19;
    *(_QWORD *)(v3 + 24) = v21;
    v24 = ((v21 & 0xFFF) + v19 + 4095) >> 12;
    v25 = 0;
    *(_DWORD *)(v3 + 44) = v21 & 0xFFF;
    v40 = v24;
    *(_WORD *)(v3 + 10) = 1;
    *(_WORD *)(v3 + 8) = 8 * (v24 + 6);
    *(_QWORD *)(v3 + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
    if ( v24 )
    {
      v26 = v35;
      v27 = 0LL;
      do
      {
        ++v25;
        *(_QWORD *)(v26 + 8 * v27 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v21 + (v27 << 12))).QuadPart >> 12;
        v27 = v25;
      }
      while ( v25 < ((v21 & 0xFFF) + v19 + 4095) >> 12 );
      v5 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      i = BugCheckParameter3;
      v3 = v35;
    }
    *(_QWORD *)(i + 352) = v19;
    if ( !*(_BYTE *)(i + 392) )
      goto LABEL_25;
    v28 = __rdtsc();
    v29 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(
            1LL,
            i + 368,
            v3,
            0LL);
    v30 = __rdtsc();
    qword_140C3CFE0 += (((unsigned __int64)HIDWORD(v30) << 32) | (unsigned int)v30) - v28;
    if ( (_DWORD)v29 == -1073741637 )
    {
      *(_BYTE *)(i + 392) = 0;
    }
    else
    {
      if ( (v29 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v29);
      }
      *(_DWORD *)(i + 328) = ((_DWORD)v29 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 392) )
    {
LABEL_25:
      v28 = __rdtsc();
      v31 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(i + 368, v3);
      v32 = __rdtsc();
      qword_140C3CFE0 += (((unsigned __int64)HIDWORD(v32) << 32) | (unsigned int)v32) - v28;
      if ( (v31 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v31);
      }
      *(_DWORD *)(i + 328) = 2;
    }
    v6 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v40 == 0;
  return RemainingHibernateRangeDataSize;
}
