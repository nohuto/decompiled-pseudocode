__int64 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  unsigned int v8; // ebx
  int v9; // edi
  signed __int64 v10; // r10
  __int64 v12; // rcx

  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5) && (MiFlags & 0x300) == 0 )
      v8 = 1;
  }
  else
  {
    v10 = a6 | 0x20;
    v9 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 )
    goto LABEL_15;
  if ( (v10 & 0x42) != 0 )
  {
    if ( (v10 & 0x42) == 0x40 )
      goto LABEL_20;
LABEL_15:
    if ( !v9 )
      goto LABEL_12;
    goto LABEL_9;
  }
  if ( (MiFlags & 0x300) == 0 )
LABEL_20:
    v8 = 1;
  v10 |= 0x42uLL;
LABEL_9:
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( a6 != _InterlockedCompareExchange64(a2, v10, a6) )
    return 0LL;
LABEL_12:
  if ( v8 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
      v6 = MiTbFlushType(v12);
    KeFlushSingleTb(a3, v6, a5);
  }
  return v8;
}
