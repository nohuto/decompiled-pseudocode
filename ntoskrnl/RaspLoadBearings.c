/*
 * XREFs of RaspLoadBearings @ 0x14038307C
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x140382708 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x140383398 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x140383778 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v7; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int16 v13; // ax
  int v14; // esi
  __int16 v15; // bx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int16 v23; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 68);
  v7 = *(_QWORD *)(a1 + 16);
  v22 = 0;
  v23 = 0;
  v11 = *(_QWORD *)(v7 + 16);
  if ( a2 >= v4 )
  {
    v21 = v5 + 4 * v4;
    result = FioFwReadBytesAtOffset(v11, (unsigned int)(v21 - 4), 4LL, &v22);
    if ( (int)result < 0 )
      return result;
    v14 = (unsigned __int16)__ROR2__(v22, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v21 + 2 * (a2 - v4), &v23);
    if ( (int)result < 0 )
      return result;
    v15 = v23;
  }
  else
  {
    result = FioFwReadBytesAtOffset(v11, v5 + 4 * a2, 4LL, &v22);
    if ( (int)result < 0 )
      return result;
    v13 = __ROR2__(v22, 8);
    v14 = v13;
    v15 = __ROR2__(HIWORD(v22), 8);
    if ( !v13 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v4,
                 4LL,
                 &v22);
      if ( (int)result < 0 )
        return result;
      v14 = (unsigned __int16)__ROR2__(v22, 8);
    }
  }
  if ( v15 < 0 )
    v15 = 0;
  v16 = *(_DWORD *)(a3 + 18);
  v17 = *(unsigned __int16 *)(a3 + 24);
  if ( v14 < v15 + *(_DWORD *)(a3 + 10) - v16 )
    v14 = v15 + *(_DWORD *)(a3 + 10) - v16;
  v18 = *(_QWORD *)(a3 + 50);
  *a4 = v14;
  *(_DWORD *)(v18 + 4 * v17) = v16 - v15;
  *(_DWORD *)(v18 + 4 * v17 + 4) = v14 + *(_DWORD *)(a3 + 18) - v15;
  v19 = *(unsigned __int16 *)(a3 + 24);
  v20 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v20 + 4 * v19) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v20 + 4 * v19 + 4) = *(__int16 *)(a1 + 84) + *(__int16 *)(a1 + 82);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}
