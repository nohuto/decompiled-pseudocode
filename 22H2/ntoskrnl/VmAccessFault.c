/*
 * XREFs of VmAccessFault @ 0x14092E9B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VmpAccessFaultBatch @ 0x1405A2AAC (VmpAccessFaultBatch.c)
 *     VmpLogAccessFault @ 0x1405A3D4C (VmpLogAccessFault.c)
 *     VmpPrefetchForVirtualFault @ 0x14092F99C (VmpPrefetchForVirtualFault.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  PSLIST_ENTRY v7; // rbx
  unsigned __int64 *v10; // r13
  unsigned __int64 *v11; // rsi
  __int64 v12; // rdi
  _SLIST_ENTRY *v13; // r15
  unsigned __int64 *v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // edi
  int v22; // [rsp+40h] [rbp-368h]
  unsigned __int64 v23; // [rsp+48h] [rbp-360h]
  unsigned __int64 *v24; // [rsp+50h] [rbp-358h]
  volatile LONG *SpinLock; // [rsp+58h] [rbp-350h]
  char v26; // [rsp+60h] [rbp-348h] BYREF

  v7 = 0LL;
  v24 = a2;
  v10 = a2;
  v11 = a1;
  if ( (a4 & 0xFFFFFF80) != 0 )
    NT_ASSERT("(FaultTypeFlags & ~0x7F) == 0");
  SpinLock = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( !SpinLock )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a4 & 0x38) == 0x20 )
    VmpPrefetchForVirtualFault(a1);
  v12 = 0LL;
  v22 = 16;
  v13 = (_SLIST_ENTRY *)&v26;
  if ( a3 > 0x10 || v11[1] > 0x10 )
  {
    ++dword_140CEEC14;
    v7 = RtlpInterlockedPopEntrySList(&VmpLargeFaultBatchLookasideList);
    if ( !v7 )
    {
      ++dword_140CEEC18;
      v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CEEC30)(
                           (unsigned int)dword_140CEEC24,
                           (unsigned int)dword_140CEEC2C,
                           (unsigned int)dword_140CEEC28,
                           &VmpLargeFaultBatchLookasideList);
    }
    if ( v7 )
    {
      HIDWORD(v7->Next) = 0;
      v13 = v7 + 2;
      *((_QWORD *)&v7->Next + 1) = v7 + 2;
      v7[1].Next = v7 + 1538;
      *((_QWORD *)&v7[1].Next + 1) = v7 + 1538;
      v22 = 512;
      LODWORD(v7->Next) = 512;
    }
  }
  v14 = &v11[2 * a3];
  if ( v11 >= v14 )
    goto LABEL_29;
  do
  {
    v15 = *v11;
    v16 = *v10;
    v23 = v11[1] + *v11;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 8LL) )
      VmpLogAccessFault(v17, v16, v15, v18, a4, a5, a6);
    while ( v15 < v23 )
    {
      if ( v16 > 0x7FFFFFFEFLL )
        NT_ASSERT("SystemVpn <= ((ULONG_PTR)MmHighestUserAddress >> 12L)");
      v19 = 3 * v12;
      v12 = (unsigned int)(v12 + 1);
      *((_QWORD *)&v13[v19 + 1].Next + 1) = v16 & 0xFFFFFFFFFFFFFLL;
      v13[v19 + 2].Next = (_SLIST_ENTRY *)(v15 & 0xFFFFFFFFFFFFFLL);
      if ( (_DWORD)v12 == v22 )
      {
        v20 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v13, v12, (int)v7, a4, a5, a6, a7);
        if ( v20 < 0 )
          goto LABEL_30;
        v12 = 0LL;
      }
      ++v15;
      ++v16;
    }
    v11 += 2;
    v10 = ++v24;
  }
  while ( v11 < v14 );
  if ( !(_DWORD)v12
    || (v20 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v13, v12, (int)v7, a4, a5, a6, a7), v20 >= 0) )
  {
LABEL_29:
    v20 = 0;
  }
LABEL_30:
  if ( v7 )
  {
    ++dword_140CEEC1C;
    if ( LOWORD(VmpLargeFaultBatchLookasideList.Alignment) < (unsigned __int16)word_140CEEC10 )
    {
      RtlpInterlockedPushEntrySList(&VmpLargeFaultBatchLookasideList, v7);
    }
    else
    {
      ++dword_140CEEC20;
      ((void (__fastcall *)(PSLIST_ENTRY, _SLIST_HEADER *))qword_140CEEC38)(v7, &VmpLargeFaultBatchLookasideList);
    }
  }
  return (unsigned int)v20;
}
