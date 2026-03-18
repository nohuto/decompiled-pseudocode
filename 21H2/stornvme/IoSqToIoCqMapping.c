/*
 * XREFs of IoSqToIoCqMapping @ 0x1C00066C8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 */

__int64 __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  __int64 result; // rax
  unsigned int i; // edx
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int j; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int k; // edx
  __int64 v17; // rax
  char v18; // al
  __int64 *v19; // r9
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  __int16 v22; // ax
  int v23; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 792) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 800) + 168LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 800) + 176LL) = 0;
    result = 32902LL;
    if ( *(_WORD *)(a1 + 4) == 0x8086 )
    {
      result = 8209LL;
      if ( *(_WORD *)(a1 + 6) == 8209 )
      {
        result = *(_QWORD *)(a1 + 800);
        *(_DWORD *)(result + 176) = 1;
      }
    }
  }
  else
  {
    result = *(unsigned __int16 *)(a1 + 306);
    for ( i = 0; i < (unsigned int)result; ++i )
    {
      v5 = *(_QWORD *)(a1 + 800) + 344LL * i;
      if ( *(_DWORD *)(v5 + 180) )
      {
        v18 = v2;
        *(_QWORD *)(v5 + 180) = 0LL;
        if ( !v2 )
          v18 = 1;
        v2 = v18;
      }
      result = *(unsigned __int16 *)(a1 + 306);
    }
    if ( v2 )
    {
      NVMeZeroMemory(
        *(void **)(*(_QWORD *)(a1 + 800) + 192LL),
        8 * (unsigned __int16)result * ((*(unsigned __int16 *)(a1 + 304) - 1) / (unsigned __int16)result + 1));
      result = *(unsigned __int16 *)(a1 + 306);
    }
    v6 = 0;
    if ( *(_WORD *)(a1 + 304) )
    {
      do
      {
        v7 = v6++;
        v8 = *(_QWORD *)(a1 + 792) + 136 * v7;
        v9 = (unsigned __int16)((*(unsigned __int16 *)(v8 + 40) - 1) % *(unsigned __int16 *)(a1 + 306) + 1);
        *(_WORD *)(v8 + 50) = v9;
        v10 = *(_QWORD *)(a1 + 800);
        v11 = 344 * v9;
        *(_QWORD *)(*(_QWORD *)(344 * v9 + v10 - 152) + 8LL * *(unsigned int *)(344 * v9 + v10 - 160)) = v8;
        ++*(_DWORD *)(v11 + v10 - 160);
        ++*(_DWORD *)(v11 + v10 - 164);
      }
      while ( v6 < *(unsigned __int16 *)(a1 + 304) );
      result = *(unsigned __int16 *)(a1 + 306);
    }
    for ( j = 0; j < (unsigned int)result; ++j )
    {
      v13 = *(_QWORD *)(a1 + 280);
      v14 = j;
      v15 = *(_QWORD *)(a1 + 800) + 344LL * j;
      if ( *(_WORD *)(a1 + 272) != 1 )
        v14 = j + 1;
      *(_DWORD *)(v15 + 176) = *(_DWORD *)(v13 + 24 * v14);
      *(_QWORD *)(v13 + 24 * v14 + 16) = v15;
      if ( *(_BYTE *)(v15 + 200) && (*(_DWORD *)(a1 + 3844) & 0x10) != 0 )
      {
        v19 = *(__int64 **)(v13 + 24 * v14 + 8);
        v20 = 0;
        v23 = 0;
        do
        {
          v21 = *v19;
          if ( _bittest64(&v21, v20) )
            break;
          ++v20;
        }
        while ( v20 < 0x40u );
        v22 = *((_WORD *)v19 + 4);
        BYTE2(v23) = v20;
        LOWORD(v23) = v22;
        StorPortNotification(4107LL, a1, v15 + 216, &v23);
      }
      result = *(unsigned __int16 *)(a1 + 306);
    }
    for ( k = 0; k < (unsigned int)result; result = *(unsigned __int16 *)(a1 + 306) )
    {
      v17 = k++;
      *(_DWORD *)(344 * v17 + *(_QWORD *)(a1 + 800) + 184) = 0;
    }
  }
  return result;
}
