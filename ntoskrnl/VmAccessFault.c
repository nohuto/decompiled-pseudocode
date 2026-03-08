/*
 * XREFs of VmAccessFault @ 0x1409D9200
 * Callers:
 *     VmpPinMemoryRange @ 0x1405F7F20 (VmpPinMemoryRange.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VmpAccessFaultBatch @ 0x14045DEF6 (VmpAccessFaultBatch.c)
 *     VmpLogAccessFault @ 0x1405F7518 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1405F765C (VmpLogAccessFaultRange.c)
 *     VmpPrefetchForVirtualFault @ 0x1409DA7AC (VmpPrefetchForVirtualFault.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  _QWORD *v7; // rbx
  unsigned __int64 *v10; // rsi
  __int64 v11; // rdi
  char *v12; // r13
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // r10d
  unsigned __int64 *v22; // r14
  __int64 *v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // edi
  int v31; // [rsp+40h] [rbp-388h]
  __int64 v33; // [rsp+50h] [rbp-378h]
  unsigned __int64 v34; // [rsp+58h] [rbp-370h]
  volatile LONG *SpinLock; // [rsp+60h] [rbp-368h]
  char v36; // [rsp+70h] [rbp-358h] BYREF

  v7 = 0LL;
  v10 = a1;
  if ( (a4 & 0xFFFFFF80) != 0 )
    NT_ASSERT("(FaultTypeFlags & ~0x7F) == 0");
  if ( (a5 & 0xFFFFFFFD) != 0 )
    NT_ASSERT("(AllowedPromotionFlags & ~0x02) == 0");
  SpinLock = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( !SpinLock )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( (a4 & 0x38) == 0x20 )
    VmpPrefetchForVirtualFault(a1);
  v11 = 0LL;
  v12 = &v36;
  v31 = 16;
  if ( a3 > 0x10 || v10[1] > 0x10 )
  {
    v13 = (char *)ExAllocateFromLookasideListEx(&VmpLargeFaultBatchLookasideList);
    v7 = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 1) = 0;
      v12 = v13 + 32;
      *((_QWORD *)v13 + 1) = v13 + 32;
      *(_DWORD *)v13 = 512;
      v14 = v13 + 24608;
      v7[2] = v14;
      v7[3] = v14;
      v31 = 512;
    }
  }
  if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 8LL) )
  {
    v16 = 0LL;
    v17 = v10;
    v18 = &v10[2 * a3];
    if ( v10 < v18 )
    {
      do
      {
        v16 += v17[1];
        v17 += 2;
      }
      while ( v17 < v18 );
    }
    if ( tlgKeywordOn(VmpTraceLoggingProvider, v15) )
      VmpLogAccessFault(v19, a4, a5, a6, a3, v20, v21);
  }
  v22 = &v10[2 * a3];
  if ( v10 >= v22 )
    goto LABEL_38;
  v23 = a2;
  do
  {
    v24 = *v10;
    v25 = *v23;
    v33 = *v23;
    v34 = v10[1] + *v10;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider )
    {
      if ( tlgKeywordOn(VmpTraceLoggingProvider, 16LL) )
      {
        VmpLogAccessFaultRange(v26, v25, v24, v27, a4, a5, a6, a3);
        v25 = v33;
      }
      v23 = a2;
    }
    if ( v24 < v34 )
    {
      do
      {
        if ( (unsigned __int64)(v25 << 12) > 0x7FFFFFFEFFFFLL )
          NT_ASSERT("((PVOID) ((PVOID)(SystemVpn << 12L)) <= MmHighestUserAddress)");
        v28 = 6 * v11;
        v11 = (unsigned int)(v11 + 1);
        *(_QWORD *)&v12[8 * v28 + 24] = v25 & 0xFFFFFFFFFFFFFLL;
        *(_QWORD *)&v12[8 * v28 + 32] = v24 & 0xFFFFFFFFFFFFFLL;
        if ( (_DWORD)v11 == v31 )
        {
          v29 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v12, v11, (int)v7, a4, a5, a6, a7);
          if ( v29 < 0 )
            goto LABEL_39;
          v25 = v33;
          v11 = 0LL;
        }
        ++v25;
        ++v24;
        v33 = v25;
      }
      while ( v24 < v34 );
      v23 = a2;
    }
    ++v23;
    v10 += 2;
    a2 = v23;
  }
  while ( v10 < v22 );
  if ( !(_DWORD)v11
    || (v29 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v12, v11, (int)v7, a4, a5, a6, a7), v29 >= 0) )
  {
LABEL_38:
    v29 = 0;
  }
LABEL_39:
  if ( v7 )
    ExFreeToLookasideListEx(&VmpLargeFaultBatchLookasideList, v7);
  return (unsigned int)v29;
}
