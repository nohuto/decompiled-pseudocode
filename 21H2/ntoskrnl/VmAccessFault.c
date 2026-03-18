/*
 * XREFs of VmAccessFault @ 0x1409D8E00
 * Callers:
 *     VmpPinMemoryRange @ 0x14062AE30 (VmpPinMemoryRange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VmpAccessFaultBatch @ 0x14062908C (VmpAccessFaultBatch.c)
 *     VmpLogAccessFault @ 0x14062A42C (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14062A570 (VmpLogAccessFaultRange.c)
 *     VmpPrefetchForVirtualFault @ 0x1409DA3EC (VmpPrefetchForVirtualFault.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  PSLIST_ENTRY v7; // rbx
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 *v15; // rcx
  unsigned __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // r10d
  unsigned __int64 *v20; // r14
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edi
  int v28; // [rsp+40h] [rbp-388h]
  struct _SLIST_ENTRY *v29; // [rsp+48h] [rbp-380h]
  unsigned __int64 v30; // [rsp+50h] [rbp-378h]
  unsigned __int64 *v31; // [rsp+58h] [rbp-370h]
  volatile LONG *SpinLock; // [rsp+60h] [rbp-368h]
  char v33; // [rsp+70h] [rbp-358h] BYREF

  v7 = 0LL;
  v31 = a2;
  v10 = a2;
  v11 = a1;
  if ( (a4 & 0xFFFFFF80) != 0 )
    NT_ASSERT("(FaultTypeFlags & ~0x7F) == 0");
  if ( (a5 & 0xFFFFFFFD) != 0 )
    NT_ASSERT("(AllowedPromotionFlags & ~0x02) == 0");
  SpinLock = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( !SpinLock )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a4 & 0x38) == 0x20 )
    VmpPrefetchForVirtualFault(a1);
  v12 = 0LL;
  v29 = (struct _SLIST_ENTRY *)&v33;
  v28 = 16;
  if ( a3 > 0x10 || v11[1] > 0x10 )
  {
    ++dword_140CF93D4;
    v7 = RtlpInterlockedPopEntrySList(&VmpLargeFaultBatchLookasideList);
    if ( !v7 )
    {
      ++dword_140CF93D8;
      v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CF93F0)(
                           (unsigned int)dword_140CF93E4,
                           (unsigned int)dword_140CF93EC,
                           (unsigned int)dword_140CF93E8,
                           &VmpLargeFaultBatchLookasideList);
    }
    if ( v7 )
    {
      HIDWORD(v7->Next) = 0;
      v29 = v7 + 2;
      v7[1].Next = v7 + 1538;
      *((_QWORD *)&v7[1].Next + 1) = v7 + 1538;
      v28 = 512;
      LODWORD(v7->Next) = 512;
      *((_QWORD *)&v7->Next + 1) = v7 + 2;
    }
  }
  if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 8LL) )
  {
    v14 = 0LL;
    v15 = v11;
    v16 = &v11[2 * a3];
    if ( v11 < v16 )
    {
      do
      {
        v14 += v15[1];
        v15 += 2;
      }
      while ( v15 < v16 );
    }
    if ( tlgKeywordOn(VmpTraceLoggingProvider, v13) )
      VmpLogAccessFault(v17, a4, a5, a6, a3, v18, v19);
  }
  v20 = &v11[2 * a3];
  if ( v11 >= v20 )
    goto LABEL_38;
  do
  {
    v21 = *v11;
    v22 = *v10;
    v30 = v11[1] + *v11;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 16LL) )
      VmpLogAccessFaultRange(v23, v22, v21, v24, a4, a5, a6, a3);
    while ( v21 < v30 )
    {
      if ( v22 > 0x7FFFFFFEFLL )
        NT_ASSERT("SystemVpn <= ((ULONG_PTR)MmHighestUserAddress >> 12L)");
      v25 = 3 * v12;
      v12 = (unsigned int)(v12 + 1);
      *((_QWORD *)&v29[v25 + 1].Next + 1) = v22 & 0xFFFFFFFFFFFFFLL;
      v29[v25 + 2].Next = (_SLIST_ENTRY *)(v21 & 0xFFFFFFFFFFFFFLL);
      if ( (_DWORD)v12 == v28 )
      {
        v26 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v29, v12, (int)v7, a4, a5, a6, a7);
        if ( v26 < 0 )
          goto LABEL_39;
        v12 = 0LL;
      }
      ++v21;
      ++v22;
    }
    v11 += 2;
    v10 = ++v31;
  }
  while ( v11 < v20 );
  if ( !(_DWORD)v12
    || (v26 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v29, v12, (int)v7, a4, a5, a6, a7), v26 >= 0) )
  {
LABEL_38:
    v26 = 0;
  }
LABEL_39:
  if ( v7 )
  {
    ++dword_140CF93DC;
    if ( LOWORD(VmpLargeFaultBatchLookasideList.Alignment) < (unsigned __int16)word_140CF93D0 )
    {
      RtlpInterlockedPushEntrySList(&VmpLargeFaultBatchLookasideList, v7);
    }
    else
    {
      ++dword_140CF93E0;
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))qword_140CF93F8)(v7, &VmpLargeFaultBatchLookasideList);
    }
  }
  return (unsigned int)v26;
}
