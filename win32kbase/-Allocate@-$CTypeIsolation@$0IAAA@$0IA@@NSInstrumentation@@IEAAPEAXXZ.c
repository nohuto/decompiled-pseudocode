PVOID __fastcall NSInstrumentation::CTypeIsolation<32768,128>::Allocate(__int64 a1)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // r15
  __int64 *v6; // r14
  __int64 v7; // rdi
  ULONG v8; // r8d
  ULONG ClearBits; // eax
  ULONG v10; // r12d
  ULONG v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbp
  unsigned int v17; // r12d
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rax
  void *v22; // [rsp+50h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = *(_QWORD **)a1;
  while ( v5 != (_QWORD *)a1 )
  {
    v6 = (__int64 *)v5[4];
    v7 = *v6;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = 0;
    if ( *((_DWORD *)v6 + 8) < 0x100u )
      v8 = *((_DWORD *)v6 + 8);
    ClearBits = RtlFindClearBits((PRTL_BITMAP)(v6[2] ^ v6[3]), 1u, v8);
    v10 = ClearBits;
    if ( ClearBits == -1 )
    {
LABEL_15:
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_16;
    }
    v11 = ClearBits;
    v12 = *((_DWORD *)v6 + 9);
    v13 = v11 >> 5;
    if ( v12 >= 8 || v13 < v12 )
    {
      v14 = v6 + 1;
      LODWORD(v15) = v13 << 12;
    }
    else
    {
      v14 = v6 + 1;
      v15 = v13 << 12;
      v22 = (void *)(v15 + (v6[2] ^ v6[1]));
      if ( (int)MmCommitSessionMappedView(v22, 4096LL) < 0 )
        goto LABEL_15;
      memset(v22, 0, 0x1000uLL);
      ++*((_DWORD *)v6 + 9);
    }
    RtlTestBit((PRTL_BITMAP)(v6[2] ^ v6[3]), v10);
    RtlSetBit((PRTL_BITMAP)(v6[2] ^ v6[3]), v10);
    if ( ++*((_DWORD *)v6 + 8) >= 0x100u )
      *((_DWORD *)v6 + 8) = 0;
    v16 = (unsigned int)v15 + (v6[2] ^ *v14);
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    v17 = (v10 & 0x1F) << 7;
    if ( v16 + v17 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)(v16 + v17);
    }
LABEL_16:
    v5 = (_QWORD *)*v5;
    v4 = 0LL;
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v18 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v19 = (_QWORD *)v18;
  if ( v18 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*(__int64 **)(v18 + 32));
    if ( v4 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      v21 = *(_QWORD **)(a1 + 8);
      if ( *v21 != a1 )
        __fastfail(3u);
      *v19 = a1;
      v19[1] = v21;
      *v21 = v19;
      *(_DWORD *)(a1 + 32) += 256;
      *(_QWORD *)(a1 + 8) = v19;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v19);
      ExFreePoolWithTag(v19, 0);
    }
  }
  return (PVOID)v4;
}
