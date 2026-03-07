PVOID __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _QWORD *i; // r15
  __int64 *v5; // rsi
  __int64 v6; // rdi
  ULONG ClearBits; // r13d
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // [rsp+70h] [rbp+8h]
  unsigned int v17; // [rsp+78h] [rbp+10h]
  void *v18; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = (__int64 *)i[4];
    v19 = *v5;
    v6 = v19;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    ClearBits = RtlFindClearBits(
                  (PRTL_BITMAP)(v5[3] ^ v5[2]),
                  1u,
                  *((_DWORD *)v5 + 8) < 0xFCu ? *((_DWORD *)v5 + 8) : 0);
    if ( ClearBits == -1 )
      goto LABEL_5;
    v8 = *((_DWORD *)v5 + 9);
    v9 = ClearBits / 0x1C;
    if ( ClearBits / 0x1C < v8 || v8 >= 9 )
    {
      v17 = v9 << 12;
      v16 = v5 + 1;
    }
    else
    {
      v16 = v5 + 1;
      v17 = v9 << 12;
      v18 = (void *)((v9 << 12) + (v5[1] ^ v5[2]));
      if ( (int)MmCommitSessionMappedView(v18, 4096LL) < 0 )
      {
LABEL_5:
        NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v19);
        continue;
      }
      memset(v18, 0, 0x1000uLL);
      ++*((_DWORD *)v5 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v5[3] ^ v5[2]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(v5[3] ^ v5[2]), ClearBits);
    if ( ++*((_DWORD *)v5 + 8) >= 0xFCu )
      *((_DWORD *)v5 + 8) = 0;
    v10 = v17 + (*v16 ^ v5[2]);
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 + 144 * (ClearBits % 0x1C) )
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)(v10 + 144 * (ClearBits % 0x1C));
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v12 = NSInstrumentation::CSectionEntry<36864,144>::Create();
  v13 = (_QWORD *)v12;
  if ( v12 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(*(__int64 **)(v12 + 32));
    if ( v3 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      v15 = *(_QWORD **)(a1 + 8);
      if ( *v15 != a1 )
        __fastfail(3u);
      v13[1] = v15;
      *v13 = a1;
      *v15 = v13;
      *(_DWORD *)(a1 + 32) += 252;
      *(_QWORD *)(a1 + 8) = v13;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v13);
      ExFreePoolWithTag(v13, 0);
    }
  }
  return (PVOID)v3;
}
