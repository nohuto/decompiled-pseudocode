/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x1403BA8F4
 * Callers:
 *     MiGetHugePageToZero @ 0x1402E41D8 (MiGetHugePageToZero.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiDecrementHugeContext @ 0x1403D0A68 (MiDecrementHugeContext.c)
 *     MiLockHugePfnInternal @ 0x14061F020 (MiLockHugePfnInternal.c)
 */

RTL_BITMAP *__fastcall MiGetUltraHugeAlreadyActive(__int64 a1)
{
  RTL_BITMAP *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  ULONG ClearBitsAndSet; // eax
  __int16 v7; // r13
  RTL_BITMAP *result; // rax
  RTL_BITMAP **v9; // r12
  RTL_BITMAP *i; // r14
  ULONG v11; // eax
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(RTL_BITMAP **)(a1 + 344);
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL);
  if ( !v1 )
    goto LABEL_11;
  ClearBitsAndSet = RtlFindClearBitsAndSet(v1 + 6, 1u, 0);
  v7 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
LABEL_10:
    MiDecrementHugeContext(v1);
    *(_QWORD *)(a1 + 344) = 0LL;
LABEL_11:
    v9 = (RTL_BITMAP **)(v5 + 32);
    for ( i = *v9; ; i = *(RTL_BITMAP **)&i->SizeOfBitMap )
    {
      if ( i == (RTL_BITMAP *)v9 )
        return 0LL;
      v1 = i - 5;
      v11 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
      v7 = v11;
      if ( v11 != -1 )
      {
        if ( *((_BYTE *)&v1[4].SizeOfBitMap + 4) )
        {
          v4 = qword_140C67A70 + 8 * (*(_QWORD *)&v1[11].SizeOfBitMap & 0x3FFFFFLL);
          MiLockHugePfnInternal(v4, 0LL);
        }
        else
        {
          v3 = 48LL * *(_QWORD *)&v1[11].SizeOfBitMap - 0x220000000000LL;
          v13 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v13);
            while ( *(__int64 *)(v3 + 24) < 0 );
          }
        }
        if ( !*((_BYTE *)&v1[4].SizeOfBitMap + 6) )
        {
          ++*(&v1[20].SizeOfBitMap + 1);
          *(_QWORD *)(a1 + 344) = v1;
          goto LABEL_7;
        }
        if ( *((_BYTE *)&v1[4].SizeOfBitMap + 4) )
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v4 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v4 - qword_140C67A70) >> 3) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  if ( *((_BYTE *)&v1[4].SizeOfBitMap + 4) )
  {
    v4 = qword_140C67A70 + 8 * (*(_QWORD *)&v1[11].SizeOfBitMap & 0x3FFFFFLL);
    MiLockHugePfnInternal(v4, 0LL);
    if ( !*((_BYTE *)&v1[4].SizeOfBitMap + 6) )
      goto LABEL_7;
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v4 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((v4 - qword_140C67A70) >> 3) & 0x1F)));
    goto LABEL_10;
  }
  v3 = 48LL * *(_QWORD *)&v1[11].SizeOfBitMap - 0x220000000000LL;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  if ( *((_BYTE *)&v1[4].SizeOfBitMap + 6) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_10;
  }
LABEL_7:
  if ( *((_BYTE *)&v1[4].SizeOfBitMap + 4) )
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v4 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((v4 - qword_140C67A70) >> 3) & 0x1F)));
  else
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_WORD *)(a1 + 336) = v7;
  result = v1;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
