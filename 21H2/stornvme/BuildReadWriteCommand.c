/*
 * XREFs of BuildReadWriteCommand @ 0x1C001A150
 * Callers:
 *     MdlToPrp @ 0x1C0004D00 (MdlToPrp.c)
 * Callees:
 *     GetLbaFromCdb @ 0x1C001AE7C (GetLbaFromCdb.c)
 *     GetStreamId @ 0x1C001AF28 (GetStreamId.c)
 */

__int64 __fastcall BuildReadWriteCommand(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rsi
  unsigned __int8 v11; // dl
  __int64 v12; // r15
  __int16 StreamId; // ax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 LbaFromCdb; // rax
  __int16 v17; // r8
  int v18; // ecx
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v10 = 60LL;
    v11 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 7);
    v10 = 16LL;
  }
  v12 = v11;
  if ( *a3 == 40 )
    goto LABEL_10;
  if ( *a3 != 42 )
  {
    if ( *a3 != 136 )
    {
      if ( *a3 != 138 )
        goto LABEL_11;
      goto LABEL_8;
    }
LABEL_10:
    *(_BYTE *)a5 = 2;
    goto LABEL_11;
  }
LABEL_8:
  *(_BYTE *)a5 = 1;
  StreamId = GetStreamId(a1, a2, v11);
  if ( StreamId )
  {
    v14 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
    *(_WORD *)(a5 + 54) = StreamId;
    *(_DWORD *)(a5 + 48) = v14 | 0x100000;
  }
LABEL_11:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = a6;
  *(_QWORD *)(a5 + 16) = 0LL;
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v12 + 1752) + 52LL);
  LbaFromCdb = GetLbaFromCdb(a3, a4, (v15 + *(_DWORD *)(a2 + v10) - 1) / v15 - 1);
  *(_DWORD *)(a5 + 40) = LbaFromCdb;
  *(_WORD *)(a5 + 48) = v17;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = HIDWORD(LbaFromCdb);
  v18 = a3[1] & 8;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  *(_BYTE *)(a5 + 52) = 0;
  *(_DWORD *)(a5 + 48) = result | (v18 << 27);
  *(_QWORD *)(a5 + 56) = 0LL;
  return result;
}
