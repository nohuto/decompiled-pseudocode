__int64 __fastcall MiMakeProtoTransition(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 UltraMapping; // r9
  __int64 v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // r15
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // r8d
  int v14; // eax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 *MmInternal; // rsi
  unsigned __int64 *v17; // rcx

  UltraMapping = 0LL;
  v3 = a1[2] >> 5;
  v4 = a1[5] & 0xFFFFFFFFFFLL;
  v5 = 0LL;
  v7 = a1;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = v7 + 5;
      v9 = ((unsigned int)v7[1] >> 3) & 0x1FF;
      if ( v5 )
      {
        if ( (*v8 & 0xFFFFFFFFFFLL) != v4 )
          break;
      }
      if ( !UltraMapping )
        goto LABEL_13;
LABEL_5:
      v10 = (*(_QWORD *)(UltraMapping + 8 * v9) >> 12) & 0xFFFFFFFFFFLL;
      if ( (_QWORD *)(48 * v10 - 0x220000000000LL) != v7 )
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x44000000000LL) >> 4),
          (unsigned int)v9 + UltraMapping,
          *(_QWORD *)(UltraMapping + 8 * v9));
      v11 = 32 * ((v10 << 7) | v3 & 0x1F | 0x40);
      if ( qword_140C657C0 )
      {
        if ( (v11 & qword_140C657C0) != 0 )
          v11 |= 0x10uLL;
        else
          v11 |= qword_140C657C0;
      }
      *(_QWORD *)(UltraMapping + 8 * v9) = v11;
      if ( ++v5 != a2 )
      {
        v7 = (_QWORD *)(48 * (*v7 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( v5 < a2 )
          continue;
      }
      goto LABEL_11;
    }
    MiUnmapPageInHyperSpaceWorker(UltraMapping, 0x11u);
LABEL_13:
    v13 = 4;
    v4 = *v8 & 0xFFFFFFFFFFLL;
    v14 = *(unsigned __int8 *)(48 * v4 - 0x220000000000LL + 34) >> 6;
    if ( !v14 || v14 == 3 )
    {
      v13 = 12;
    }
    else if ( v14 == 2 )
    {
      v13 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, *v8 & 0xFFFFFFFFFFLL, v13 | 0xA0000000);
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
    v17 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MmInternal[1543] = (unsigned __int64)v17;
    *v17 = ValidPte;
    goto LABEL_5;
  }
LABEL_11:
  result = ZeroPte;
  *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
  *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  return result;
}
