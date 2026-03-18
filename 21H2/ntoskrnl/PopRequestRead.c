/*
 * XREFs of PopRequestRead @ 0x140A4D4A4
 * Callers:
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x140A4D480 (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     ProducerGetBuffer @ 0x140A4D828 (ProducerGetBuffer.c)
 *     PopGetIoLocation @ 0x140A4D8D8 (PopGetIoLocation.c)
 *     PopHiberCheckForDebugBreak @ 0x140A4D92C (PopHiberCheckForDebugBreak.c)
 *     ProducerConsumerBufferComplete @ 0x140A4D96C (ProducerConsumerBufferComplete.c)
 *     PopHiberChecksumHiberFileData @ 0x140A4DA40 (PopHiberChecksumHiberFileData.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v6; // rbp
  int v8; // ecx
  __int64 IoLocation; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 Buffer; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rbp
  int v17; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // r15
  char v22; // r15
  int v23; // ebp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+78h] [rbp+10h]

  v33 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  v4 = 0;
  v6 = a2;
  v32 = 0LL;
  while ( *(_QWORD *)(BugCheckParameter3 + 400) )
  {
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_140C01F10[0]();
    ++PopWatchdogTimerCount;
    v8 = *(_DWORD *)(BugCheckParameter3 + 328);
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        PopHiberChecksumHiberFileData(
          BugCheckParameter3,
          0,
          *(_QWORD *)(BugCheckParameter3 + 376),
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(_QWORD *)(BugCheckParameter3 + 360));
        v27 = __rdtsc();
        qword_140C22E48 += v27 - *(_QWORD *)(BugCheckParameter3 + 336);
        ProducerConsumerBufferComplete(
          v6,
          v6 + 32,
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(unsigned int *)(BugCheckParameter3 + 360));
        v28 = __rdtsc();
        qword_140C22E78 += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28) - v27;
        v29 = *(_QWORD *)(BugCheckParameter3 + 360);
        v30 = *(_QWORD *)(BugCheckParameter3 + 400) == v29;
        *(_QWORD *)(BugCheckParameter3 + 400) -= v29;
        if ( v30 )
          *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
        v31 = *(_QWORD *)(BugCheckParameter3 + 352);
        *(_QWORD *)(BugCheckParameter3 + 376) += v31;
        *(_QWORD *)(BugCheckParameter3 + 344) += v31;
        *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 328) = 0;
        continue;
      }
      ++qword_140C22E58;
      v16 = __rdtsc();
      v17 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 368,
              v3);
      BugCheckParameter4 = v17;
      if ( v17 < 0 )
      {
        PopCheckpointSystemSleep(29);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v19 = __rdtsc();
      qword_140C22E70 += (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v16;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
      *(_DWORD *)(BugCheckParameter3 + 328) = 2;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), *(_QWORD *)(BugCheckParameter3 + 376), &v32);
      v10 = *(unsigned int *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 368) = IoLocation;
      v11 = *(_QWORD *)(BugCheckParameter3 + 400);
      v12 = (v10 << 12) - *(_QWORD *)(BugCheckParameter3 + 344) % (unsigned __int64)(v10 << 12);
      if ( v12 >= v32 )
        v12 = v32;
      v13 = (unsigned int)v12;
      if ( v12 >= v11 )
        v13 = (unsigned int)v11;
      Buffer = ProducerGetBuffer(v6, (unsigned int)v12, v13, a3);
      v15 = Buffer;
      if ( !Buffer )
        return;
      *(_QWORD *)(BugCheckParameter3 + 384) = Buffer;
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 40) = v12;
      *(_QWORD *)(v3 + 24) = Buffer;
      *(_WORD *)(v3 + 10) = 1;
      v20 = ((Buffer & 0xFFF) + v12 + 4095) >> 12;
      *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
      *(_WORD *)(v3 + 8) = 8 * (v20 + 6);
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v21 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v15 + (v21 << 12))).QuadPart >> 12;
          v21 = v4;
        }
        while ( v4 < v20 );
      }
      v22 = *(_BYTE *)(BugCheckParameter3 + 392);
      v4 = 0;
      *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
      v23 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v22 != 0,
              BugCheckParameter3 + 368,
              v3);
      if ( v23 == -1073741637 )
      {
        if ( !v22 )
          goto LABEL_36;
        *(_BYTE *)(BugCheckParameter3 + 392) = 0;
        *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
        v23 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                BugCheckParameter3 + 368,
                v3);
      }
      if ( v23 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_36:
        PopCheckpointSystemSleep(29);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v23);
      }
      v24 = __rdtsc();
      qword_140C22E70 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24)
                       - *(_QWORD *)(BugCheckParameter3 + 336);
      v25 = v12;
      v26 = *(_QWORD *)(BugCheckParameter3 + 400);
      *(_QWORD *)(BugCheckParameter3 + 352) = v12;
      if ( v12 >= v26 )
        v25 = v26;
      *(_QWORD *)(BugCheckParameter3 + 360) = v25;
      if ( !v22 || !v23 )
      {
        v6 = v33;
        *(_DWORD *)(BugCheckParameter3 + 328) = 2;
        continue;
      }
      *(_DWORD *)(BugCheckParameter3 + 328) = 1;
    }
    v6 = v33;
  }
}
