/*
 * XREFs of BuildReadWriteCommand @ 0x1C0011108
 * Callers:
 *     MdlToPrp @ 0x1C0005410 (MdlToPrp.c)
 * Callees:
 *     GetLbaFromCdb @ 0x1C0012620 (GetLbaFromCdb.c)
 *     GetStreamId @ 0x1C0012684 (GetStreamId.c)
 */

__int64 __fastcall BuildReadWriteCommand(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  _DWORD *v9; // rdi
  unsigned __int8 v10; // r10
  __int64 v11; // r14
  __int16 StreamId; // ax
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 LbaFromCdb; // rax
  __int16 v16; // r8
  int v17; // ecx
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = (_DWORD *)(a2 + 60);
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 7);
    v9 = (_DWORD *)(a2 + 16);
  }
  v11 = v10;
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
  StreamId = GetStreamId(a1, a2, v10);
  if ( StreamId )
  {
    v13 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
    *(_WORD *)(a5 + 54) = StreamId;
    *(_DWORD *)(a5 + 48) = v13 | 0x100000;
  }
LABEL_11:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = a6;
  *(_QWORD *)(a5 + 16) = 0LL;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1736) + 52LL);
  LbaFromCdb = GetLbaFromCdb(a3, a4, (v14 + *v9 - 1) / v14 - 1);
  *(_DWORD *)(a5 + 40) = LbaFromCdb;
  *(_WORD *)(a5 + 48) = v16;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = HIDWORD(LbaFromCdb);
  v17 = a3[1] & 8;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  *(_BYTE *)(a5 + 52) = 0;
  *(_DWORD *)(a5 + 48) = result | (v17 << 27);
  *(_QWORD *)(a5 + 56) = 0LL;
  return result;
}
