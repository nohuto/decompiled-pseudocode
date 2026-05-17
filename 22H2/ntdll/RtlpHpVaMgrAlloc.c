/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x180005BCC
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 * Callees:
 *     RtlpHpVaMgrRangeFind @ 0x180005DA8 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrFree @ 0x180005E4C (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180005FCC (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrRangeCreate @ 0x1800060D0 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x180006740 (RtlpHpVaMgrAllocAligned.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]
  unsigned __int64 v20; // [rsp+48h] [rbp-18h]

  v3 = *a2;
  *(_QWORD *)&v18 = 0x10000000100000LL;
  v4 = a3;
  *((_QWORD *)&v18 + 1) = 0x4000000000200000LL;
  if ( !v3 )
    __int2c();
  if ( v3 <= (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1 )
  {
    v7 = v3 >> 20;
    RtlAcquireSRWLockExclusive(a1);
    v8 = RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v7, (unsigned __int16)(v4 >> 20), &v18);
    v10 = v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 8, v8, v9);
      v11 = v18;
      if ( (_QWORD)v18 != v10 )
      {
        *(_OWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_BYTE *)v10 = 1;
        *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v10, (v11 - v10) >> 5);
        RtlpHpVaMgrFree(a1, v10);
        v10 = v11;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(a1);
    v10 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(a1);
LABEL_7:
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24)
                                                                                             + 24LL) << 20);
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_BYTE *)v10 = 1;
      *(_BYTE *)(v10 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v10 + 24) > (unsigned __int16)v7 )
      {
        v14 = RtlpHpVaMgrRangeSplit(a1, v10, (unsigned __int16)v7);
        RtlpHpVaMgrFree(a1, v14);
      }
      v17 = v12;
      RtlReleaseSRWLockExclusive(a1);
      return v17;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3)) )
    v4 = *((unsigned int *)&v18 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3));
  v16 = v3 - ((v4 - 1) & (v4 + v3 - 1)) + v4 - 1;
  result = RtlpHpVaMgrAllocAligned(a1, &v16, v4);
  v17 = result;
  if ( result )
  {
    v15 = *(_BYTE *)(a1 + 44);
    v18 = 0LL;
    BYTE1(v18) = v15;
    v20 = v16 >> 20;
    v19 = 0LL;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, result, &v18) )
    {
      *a2 = v16;
      return v17;
    }
    ZwFreeVirtualMemory(-1LL, &v17, &v16, 0x8000LL);
    return 0LL;
  }
  return result;
}
