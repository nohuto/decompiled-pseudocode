/*
 * XREFs of KiSetProcessorIdle @ 0x14037DFEC
 * Callers:
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiCompleteKernelInit @ 0x140A89D30 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  char v3; // r14
  __int64 v5; // rdi
  char v6; // bl
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 result; // rax
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a1 + 209);
  v5 = *(_QWORD *)(a1 + 192);
  v6 = *(_BYTE *)(a1 + 35);
  v7 = *(_QWORD *)(a1 + 34912);
  v8 = 1LL << v3;
  if ( !a2 )
  {
    *(_BYTE *)(a1 + 13243) = 0;
    if ( (v6 & 1) != 0 )
      __fastfail(0x21u);
    v14 = v6 | 1;
    v16 = 0;
    *(_BYTE *)(a1 + 35) = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(_QWORD *)v5 );
    }
    if ( (v14 & 8) == 0 )
      *(_QWORD *)(v5 + 8) &= ~(1LL << v3);
    *(_QWORD *)(v5 + 16) &= ~(1LL << v3);
    *(_QWORD *)(v5 + 24) &= ~v7;
    v15 = v8 | *(_QWORD *)(v5 + 40) & ~v7;
    if ( (v7 & ~*(_QWORD *)(v5 + 16)) != v8 )
      v15 = *(_QWORD *)(v5 + 40) & ~v7;
    *(_QWORD *)(v5 + 40) = v15;
    result = *(_QWORD *)(v5 + 32) & ~*(_QWORD *)(a1 + 34936);
    *(_QWORD *)(v5 + 32) = result;
    goto LABEL_13;
  }
  result = *(_QWORD *)(a1 + 35000);
  if ( result )
    *(_BYTE *)(result + 16) = 1;
  *(_BYTE *)(a1 + 13243) = a3;
  if ( (v6 & 1) != 0 )
  {
    v10 = v6 & 0xFE;
    v17 = 0;
    *(_BYTE *)(a1 + 35) = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)v5 );
    }
    if ( (v10 & 8) == 0 )
      *(_QWORD *)(v5 + 8) |= 1LL << v3;
    v11 = *(_QWORD *)(v5 + 16) | (1LL << v3);
    *(_QWORD *)(v5 + 16) = v11;
    if ( (v7 & v11) == v7 )
    {
      *(_QWORD *)(v5 + 24) |= v7;
    }
    else
    {
      v13 = v7 & ~v11;
      if ( ((v13 - 1) & v13) == 0 )
        *(_QWORD *)(v5 + 40) |= v13;
    }
    *(_QWORD *)(v5 + 40) &= ~(1LL << v3);
    v12 = *(_QWORD *)(a1 + 34936);
    result = *(_QWORD *)(v5 + 16) & v12;
    if ( result == v12 )
      *(_QWORD *)(v5 + 32) |= v12;
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  }
  return result;
}
