/*
 * XREFs of sub_1800B4E60 @ 0x1800B4E60
 * Callers:
 *     sub_180045E2C @ 0x180045E2C (sub_180045E2C.c)
 *     sub_1800B4E60 @ 0x1800B4E60 (sub_1800B4E60.c)
 * Callees:
 *     sub_1800B4E60 @ 0x1800B4E60 (sub_1800B4E60.c)
 *     sub_1800B619C @ 0x1800B619C (sub_1800B619C.c)
 */

char __fastcall sub_1800B4E60(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char result; // al
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rdi
  _BYTE *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbx

  result = 0;
  *a3 = 0;
  if ( a2 )
  {
    result = sub_1800B4E60(a1, *(_QWORD *)(a2 + 16), a3, a4);
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
      if ( !*(_DWORD *)v9 )
        *(_DWORD *)v9 = _InterlockedIncrement(&dword_18019DA00);
      if ( !*(_DWORD *)(a1 + 72) )
      {
        *(_OWORD *)(a1 + 72) = *(_OWORD *)v9;
        *(_QWORD *)(a1 + 88) = *(_QWORD *)(v9 + 16);
      }
      v10 = &a3[a4];
      *(_OWORD *)(a1 + 96) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(v9 + 16);
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      v13 = &a3[v12];
      if ( v10 - v13 > 2 )
      {
        *v13 = 92;
        v14 = v13 + 1;
        v15 = *(_QWORD *)(v9 + 8);
        do
          ++v11;
        while ( *(_BYTE *)(v15 + v11) );
        v16 = v10 - v14;
        v17 = v11 + 1;
        if ( v17 >= v16 )
          v17 = v16;
        sub_1800B619C(v14, v16, v15, v17);
        v14[v17 - 1] = 0;
      }
      return 1;
    }
  }
  return result;
}
