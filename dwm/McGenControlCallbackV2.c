/*
 * XREFs of McGenControlCallbackV2 @ 0x140004EC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400063A8 (memset_0.c)
 */

__int64 __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  unsigned __int8 v9; // dl
  __int64 v10; // rcx
  bool v11; // r11
  int v12; // edx
  int *v13; // rcx
  int v14; // edx

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        result = a5;
        *(_BYTE *)(a7 + 40) = a3;
        v8 = 0;
        *(_QWORD *)(a7 + 24) = a5;
        *(_QWORD *)(a7 + 16) = a4;
        *(_DWORD *)(a7 + 36) = 1;
        if ( *(_WORD *)(a7 + 42) )
        {
          do
          {
            v9 = *(_BYTE *)(a7 + 40);
            v10 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v8);
            v11 = (*(_BYTE *)(v8 + *(_QWORD *)(a7 + 64)) <= v9 || !v9)
               && (!v10 || (v10 & *(_QWORD *)(a7 + 16)) != 0 && (v10 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24));
            v12 = 1 << (v8 & 0x1F);
            v13 = (int *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v8 >> 5));
            if ( v11 )
              v14 = *v13 | v12;
            else
              v14 = *v13 & ~v12;
            *v13 = v14;
            ++v8;
            result = *(unsigned __int16 *)(a7 + 42);
          }
          while ( v8 < (unsigned int)result );
        }
      }
    }
    else
    {
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( *(_WORD *)(a7 + 42) )
        return (__int64)memset_0(*(void **)(a7 + 48), 0, 4LL * ((*(unsigned __int16 *)(a7 + 42) - 1) / 32 + 1));
    }
  }
  return result;
}
