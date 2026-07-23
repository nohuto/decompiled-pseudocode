/*
 * XREFs of PopRestoreHiberContext @ 0x1409944E8
 * Callers:
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 * Callees:
 *     IoNotifyDump @ 0x140384030 (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x14038DD88 (IoInitializeDumpStack.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 *     PopDecompressHiberBlocks @ 0x140995874 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1409B22A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 *     BgLibraryInitialize @ 0x1409F2854 (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // rdx
  _DWORD *v7; // rsi
  int v8; // ebp
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // r11
  __int64 v19; // rdi
  unsigned int v20; // ebp
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // eax
  ULONG_PTR v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void (*v32)(void); // rax
  __int64 v33; // rax
  __int128 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+90h] [rbp+8h]

  v34 = 0LL;
  v35 = 0LL;
  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number < *(_DWORD *)(BugCheckParameter3 + 256) )
  {
    v4 = 0LL;
    *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 264) + ((unsigned __int64)Number << 7) + 80) = 0LL;
    if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
    {
      byte_140C50690 = 0;
      v11 = __rdtsc();
      if ( qword_140C50688 )
      {
        v12 = BgLibraryInitialize(qword_140C50688, 0xFFFFFFFFLL);
        v13 = byte_140C50690;
        if ( v12 >= 0 )
          v13 = 1;
        byte_140C50690 = v13;
      }
      v14 = __rdtsc();
      qword_140C24120 += (((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - v11;
    }
    if ( !Number )
    {
      v5 = 0LL;
      v6 = *(_QWORD **)(BugCheckParameter3 + 200);
      v36 = __rdtsc();
      if ( v6[11] == v6[69] )
        v5 = v6[72];
      *(_QWORD *)(BugCheckParameter3 + 400) = v5;
      v7 = qword_140C23EF8;
      v8 = *(_DWORD *)(BugCheckParameter3 + 280);
      v9 = *(_QWORD *)(BugCheckParameter3 + 272);
      memset(qword_140C23EF8, 0, 0x40uLL);
      v7[6] = 0;
      *(_QWORD *)v7 = v9;
      v7[2] = v8;
      *((_QWORD *)v7 + 2) = v5;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      IoNotifyDump(2);
      if ( *(_QWORD *)(BugCheckParameter3 + 400) )
      {
        *(_DWORD *)(BugCheckParameter3 + 184) = 9;
        *(_QWORD *)(BugCheckParameter3 + 160) = &v34;
        *(_QWORD *)&v34 = qword_140C23E78;
        *((_QWORD *)&v34 + 1) = qword_140C23E78;
        v35 = 0LL;
        ((void (__fastcall *)(_QWORD))off_140C00858[0])(0LL);
        v27 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
        v28 = v27;
        if ( v27 < 0 || PopSimulateHiberBugcheck == 4 )
        {
          PopCheckpointSystemSleep(28);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v28, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        v29 = __rdtsc();
        v10 = v36;
        qword_140C24100 = (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v36;
        v30 = *(_QWORD *)(BugCheckParameter3 + 168);
        *(_DWORD *)(BugCheckParameter3 + 328) = 0;
        *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
        if ( *(_QWORD *)(v30 + 128) )
          *(_BYTE *)(BugCheckParameter3 + 392) = 1;
        PopHiberReadChecksums(BugCheckParameter3);
        v31 = *(_QWORD *)(BugCheckParameter3 + 200);
        *(_DWORD *)(BugCheckParameter3 + 184) = 10;
        *(_QWORD *)(BugCheckParameter3 + 376) = *(_QWORD *)(v31 + 112) << 12;
        while ( *(_QWORD *)(BugCheckParameter3 + 400) )
        {
          PopRequestRead(BugCheckParameter3);
          if ( (unsigned int)PopDecompressHiberBlocks(BugCheckParameter3, (__int64)PopDecompressCallback) == -2147483614
            && !*(_DWORD *)(BugCheckParameter3 + 328) )
          {
            _mm_pause();
          }
        }
        PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
        v32 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
        if ( v32 )
          v32();
      }
      else
      {
        v10 = v36;
      }
      IoNotifyDump(3);
      ((void (__fastcall *)(__int64))off_140C00858[0])(1LL);
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( 1 )
      {
        v15 = *(_DWORD *)(BugCheckParameter3 + 256);
        if ( *(_DWORD *)(BugCheckParameter3 + 16) == v15 )
          break;
        _mm_pause();
      }
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0;
      if ( v15 )
      {
        v21 = *(_QWORD *)(BugCheckParameter3 + 264);
        do
        {
          v22 = v4;
          v23 = (unsigned __int64)v20 << 7;
          qword_140C240E0 += *(_QWORD *)(v23 + v21 + 64);
          qword_140C240F0 += *(_QWORD *)(v23 + *(_QWORD *)(BugCheckParameter3 + 264) + 72);
          qword_140C24118 += *(_QWORD *)(v23 + *(_QWORD *)(BugCheckParameter3 + 264) + 80);
          v21 = *(_QWORD *)(BugCheckParameter3 + 264);
          v4 = *(_QWORD *)(v23 + v21 + 64) + *(_QWORD *)(v23 + v21 + 72);
          if ( v4 <= v22 )
            v4 = v22;
          v16 += *(_QWORD *)(v23 + v21 + 88);
          v17 += *(_QWORD *)(v23 + v21 + 96);
          ++v20;
          v18 += *(_QWORD *)(v23 + v21 + 104);
          v19 += *(_QWORD *)(v23 + v21 + 112);
          v15 = *(_DWORD *)(BugCheckParameter3 + 256);
        }
        while ( v20 < v15 );
      }
      v24 = v16 / (v18 + 1);
      v25 = v17 / (v19 + 1);
      if ( v25 > v24 )
      {
        v33 = 100 * (qword_140C240E8 * v15 / (v18 + v19 + 1) - v24) / (v25 - v24);
        if ( v33 > 99 )
        {
          dword_140C23EA4 = 99;
          goto LABEL_27;
        }
        dword_140C23EA4 = v33;
        if ( (int)v33 >= 1 )
          goto LABEL_27;
      }
      dword_140C23EA4 = 1;
LABEL_27:
      v26 = __rdtsc();
      qword_140C24108 = (((unsigned __int64)HIDWORD(v26) << 32) | (unsigned int)v26) - v10;
      result = (struct _KPRCB *)(qword_140C24108 - qword_140C24100 - v4);
      qword_140C240D8 = (__int64)result;
      return result;
    }
    while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
      _mm_pause();
    result = (struct _KPRCB *)PopDecompressHiberBlocks(BugCheckParameter3, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  }
  return result;
}
