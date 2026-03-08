/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C002A3B0
 * Callers:
 *     ??$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_52ccb54780299a4e07ee11c360aca89b_@@CAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C00BA540 (--$_lambda_invoker_cdecl_@W4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@_lambda_52ccb54780299a4e07ee.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C002A658 (-Create@-$CSectionEntry@$0DGAAA@$0DGA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C002A9A4 (-Allocate@-$CSectionBitmapAllocator@$0DGAAA@$0DGA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C009FFD0 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0153458 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

PVOID __fastcall NSInstrumentation::CTypeIsolation<221184,864>::Allocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _QWORD *i; // r15
  __int64 *v5; // rsi
  __int64 v6; // rdi
  ULONG ClearBits; // r12d
  unsigned int v8; // eax
  ULONG v9; // ecx
  ULONG v10; // r13d
  __int64 v11; // rsi
  __int64 v13; // rcx
  void *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // [rsp+60h] [rbp+8h]
  ULONG v20; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 36) )
    return ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = (__int64 *)i[4];
    v21 = *v5;
    v6 = v21;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    ClearBits = RtlFindClearBits(
                  (PRTL_BITMAP)(v5[3] ^ v5[2]),
                  1u,
                  *((_DWORD *)v5 + 8) < 0xD8u ? *((_DWORD *)v5 + 8) : 0);
    if ( ClearBits == -1 )
      goto LABEL_5;
    v8 = *((_DWORD *)v5 + 9);
    v9 = ClearBits >> 2;
    if ( ClearBits >> 2 < v8 || v8 >= 0x36 )
    {
      v19 = v5 + 1;
      v10 = v9 << 12;
    }
    else
    {
      v13 = v9 << 12;
      v14 = (void *)(v13 + (v5[2] ^ v5[1]));
      v19 = v5 + 1;
      v20 = v13;
      if ( (int)MmCommitSessionMappedView(v14, 4096LL) < 0 )
      {
LABEL_5:
        NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v21);
        continue;
      }
      memset(v14, 0, 0x1000uLL);
      ++*((_DWORD *)v5 + 9);
      v10 = v20;
    }
    RtlTestBit((PRTL_BITMAP)(v5[2] ^ v5[3]), ClearBits);
    RtlSetBit((PRTL_BITMAP)(v5[2] ^ v5[3]), ClearBits);
    if ( ++*((_DWORD *)v5 + 8) >= 0xD8u )
      *((_DWORD *)v5 + 8) = 0;
    v11 = v10 + (v5[2] ^ *v19);
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( v11 + 864 * (ClearBits & 3) )
    {
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      return (PVOID)(v11 + 864 * (ClearBits & 3));
    }
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  v15 = NSInstrumentation::CSectionEntry<221184,864>::Create();
  v16 = (_QWORD *)v15;
  if ( v15 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<221184,864>::Allocate(*(_QWORD *)(v15 + 32));
    if ( v3 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v17, 0LL);
      v18 = *(_QWORD **)(a1 + 8);
      if ( *v18 != a1 )
        __fastfail(3u);
      v16[1] = v18;
      *v16 = a1;
      *v18 = v16;
      *(_DWORD *)(a1 + 32) += 216;
      *(_QWORD *)(a1 + 8) = v16;
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v16);
      ExFreePoolWithTag(v16, 0);
    }
  }
  return (PVOID)v3;
}
