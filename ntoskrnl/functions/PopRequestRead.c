void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v6; // rbp
  int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 IoLocation; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  __int64 Buffer; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rbp
  __int64 v26; // r15
  char v27; // r15
  int v28; // ebp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
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
      off_140C01CD0[0]();
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
        v9 = __rdtsc();
        qword_140C3D108 += v9 - *(_QWORD *)(BugCheckParameter3 + 336);
        ProducerConsumerBufferComplete(
          v6,
          v6 + 32,
          *(_QWORD *)(BugCheckParameter3 + 384),
          *(unsigned int *)(BugCheckParameter3 + 360));
        v10 = __rdtsc();
        qword_140C3D138 += (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) - v9;
        v11 = *(_QWORD *)(BugCheckParameter3 + 360);
        v12 = *(_QWORD *)(BugCheckParameter3 + 400) == v11;
        *(_QWORD *)(BugCheckParameter3 + 400) -= v11;
        if ( v12 )
          *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
        v13 = *(_QWORD *)(BugCheckParameter3 + 352);
        *(_QWORD *)(BugCheckParameter3 + 376) += v13;
        *(_QWORD *)(BugCheckParameter3 + 344) += v13;
        *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
        *(_DWORD *)(BugCheckParameter3 + 328) = 0;
        continue;
      }
      ++qword_140C3D118;
      v14 = __rdtsc();
      v15 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              2LL,
              BugCheckParameter3 + 368,
              v3);
      BugCheckParameter4 = v15;
      if ( v15 < 0 )
      {
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
      }
      v17 = __rdtsc();
      qword_140C3D130 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v14;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      IoLocation = PopGetIoLocation(*(_QWORD *)(BugCheckParameter3 + 160), *(_QWORD *)(BugCheckParameter3 + 376), &v32);
      v19 = *(unsigned int *)(BugCheckParameter3 + 408);
      *(_QWORD *)(BugCheckParameter3 + 368) = IoLocation;
      v20 = *(_QWORD *)(BugCheckParameter3 + 400);
      v21 = (v19 << 12) - *(_QWORD *)(BugCheckParameter3 + 344) % (unsigned __int64)(v19 << 12);
      if ( v21 >= v32 )
        v21 = v32;
      v22 = (unsigned int)v21;
      if ( v21 >= v20 )
        v22 = (unsigned int)v20;
      Buffer = ProducerGetBuffer(v6, (unsigned int)v21, v22, a3);
      v24 = Buffer;
      if ( !Buffer )
        return;
      *(_QWORD *)(BugCheckParameter3 + 384) = Buffer;
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 40) = v21;
      *(_QWORD *)(v3 + 24) = Buffer;
      *(_WORD *)(v3 + 10) = 1;
      v25 = ((Buffer & 0xFFF) + v21 + 4095) >> 12;
      *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
      *(_WORD *)(v3 + 8) = 8 * (v25 + 6);
      if ( v25 )
      {
        v26 = 0LL;
        do
        {
          ++v4;
          *(_QWORD *)(v3 + 8 * v26 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v24 + (v26 << 12))).QuadPart >> 12;
          v26 = v4;
        }
        while ( v4 < v25 );
      }
      v27 = *(_BYTE *)(BugCheckParameter3 + 392);
      v4 = 0;
      *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
      v28 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
              v27 != 0,
              BugCheckParameter3 + 368,
              v3);
      if ( v28 == -1073741637 )
      {
        if ( !v27 )
          goto LABEL_34;
        *(_BYTE *)(BugCheckParameter3 + 392) = 0;
        *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
        v28 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                0LL,
                BugCheckParameter3 + 368,
                v3);
      }
      if ( v28 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_34:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v28);
      }
      v29 = __rdtsc();
      qword_140C3D130 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29)
                       - *(_QWORD *)(BugCheckParameter3 + 336);
      v30 = v21;
      v31 = *(_QWORD *)(BugCheckParameter3 + 400);
      *(_QWORD *)(BugCheckParameter3 + 352) = v21;
      if ( v21 >= v31 )
        v30 = v31;
      *(_QWORD *)(BugCheckParameter3 + 360) = v30;
      if ( v27 && v28 )
      {
        *(_DWORD *)(BugCheckParameter3 + 328) = 1;
        goto LABEL_12;
      }
    }
    *(_DWORD *)(BugCheckParameter3 + 328) = 2;
LABEL_12:
    v6 = v33;
  }
}
