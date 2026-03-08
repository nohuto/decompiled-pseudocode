/*
 * XREFs of MiMoveLargeFreePage @ 0x14064D244
 * Callers:
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiMoveBadPageCrossPartition @ 0x14064B358 (MiMoveBadPageCrossPartition.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140659730 (MiUpdatePartitionChildPageCounts.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, unsigned int a2, __int64 a3, _WORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r12
  ULONG_PTR v8; // r13
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // al
  __int16 v13; // cx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r14
  int v18; // [rsp+40h] [rbp-98h] BYREF
  _WORD *v19; // [rsp+48h] [rbp-90h]
  int v20; // [rsp+50h] [rbp-88h] BYREF
  __int64 v21; // [rsp+58h] [rbp-80h]
  ULONG_PTR v22; // [rsp+60h] [rbp-78h]
  _QWORD v23[2]; // [rsp+68h] [rbp-70h] BYREF
  __int128 v24; // [rsp+78h] [rbp-60h]

  v19 = a4;
  v5 = 0;
  v7 = MiLargePageSizes[a2];
  v21 = v7;
  v8 = a1 & ~(v7 - 1);
  v22 = v8;
  result = MiTryUnlinkNodeLargePages(a3, v8, a2, 1LL, 64, &v20, 0LL);
  v10 = result;
  if ( result )
  {
    v11 = *(_QWORD *)(result + 16);
    v12 = MiLockPageInline(result);
    v23[1] = (v11 & 0x3E0) != 0;
    v24 = 0LL;
    LOBYTE(v24) = v12;
    v23[0] = v8;
    if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)) == a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = *a4;
      v14 = v10 + 48 * v7 - 48;
      if ( v14 >= v10 )
      {
        v15 = (unsigned __int64)v19;
        v16 = v14 + 24;
        v17 = (unsigned __int64)(v13 & 0x3FF) << 43;
        do
        {
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *(__int64 *)v16 < 0 );
          }
          if ( (*(_BYTE *)(v16 + 11) & 0x40) != 0 )
            MiMoveBadPageCrossPartition(v14, a3, v15);
          *(_QWORD *)(v16 + 16) = v17 | *(_QWORD *)(v16 + 16) & 0xFFE007FFFFFFFFFFuLL;
          if ( v14 != v10 )
            _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
          v14 -= 48LL;
          v16 -= 48LL;
        }
        while ( v14 >= v10 );
        v7 = v21;
        v8 = v22;
      }
      MiUpdatePartitionChildPageCounts(v19, a3, v8, v7);
      v5 = 1;
    }
    MiInsertLargePageInNodeList((__int64)v23);
    return v5;
  }
  return result;
}
