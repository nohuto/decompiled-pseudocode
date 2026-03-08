/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1405AE434
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1409BE3B8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1405AE16C (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1409BD590 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetCharacterInfo @ 0x1409BD7E0 (Normalization__GetCharacterInfo.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  char v5; // r15
  unsigned int CurrentOutputChar; // eax
  __int64 v7; // rsi
  unsigned int v8; // r14d
  int v9; // r14d
  char v10; // al
  unsigned __int16 *v11; // r8
  _WORD *v12; // rdx
  __int64 v13; // rax
  char v14; // [rsp+50h] [rbp+30h] BYREF
  char v15; // [rsp+58h] [rbp+38h] BYREF
  unsigned __int16 *v16; // [rsp+60h] [rbp+40h] BYREF

  v1 = *(_BYTE *)(a1 + 93) == 64;
  v2 = a1;
  result = *(_QWORD *)(a1 + 80);
  v16 = (unsigned __int16 *)result;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = 0;
    if ( result != v4 )
    {
      while ( 1 )
      {
        v14 = 0;
        v15 = 0;
        CurrentOutputChar = NormBuffer__GetCurrentOutputChar(a1, &v16);
        v7 = *(_QWORD *)(v2 + 112);
        v8 = CurrentOutputChar;
        result = Normalization__GetCharacterInfo(v7, CurrentOutputChar, &v14, &v15);
        if ( v14 == v5 )
          goto LABEL_16;
        if ( v15 != -64 )
          break;
        result = Normalization__CanCombinableCharactersCombine(v7, *(unsigned int *)(v2 + 88), v8);
        v9 = result;
        if ( !(_DWORD)result )
          break;
        Normalization__GetCharacterInfo(v7, (unsigned int)result, &v14, &v15);
        v10 = v14;
        *(_WORD *)(*(_QWORD *)(v2 + 80) - 2LL) = v9;
        v11 = v16;
        v4 = *(_QWORD *)(v2 + 40) - 2LL;
        *(_BYTE *)(v2 + 92) = v10;
        v12 = v11;
        *(_BYTE *)(v2 + 93) = v15;
        result = *(_QWORD *)(v2 + 64);
        *(_DWORD *)(v2 + 88) = v9;
        *(_QWORD *)(v2 + 40) = v4;
        if ( result == v4 )
        {
          if ( (unsigned __int64)v11 >= result )
          {
            v13 = *(_QWORD *)(v2 + 24);
            *(_DWORD *)(v2 + 56) = 0;
            result = v13 - 2;
            *(_WORD *)(v2 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v2 + 64) = result;
        }
        if ( v11 != (unsigned __int16 *)v4 )
        {
          do
          {
            a1 = (__int64)(v12 + 1);
            result = (unsigned __int16)v12[1];
            *v12 = result;
            v12 = (_WORD *)a1;
            v4 = *(_QWORD *)(v2 + 40);
          }
          while ( a1 != v4 );
        }
        if ( *(_BYTE *)(v2 + 93) != 64 )
          return result;
LABEL_17:
        if ( v11 == (unsigned __int16 *)v4 )
          return result;
      }
      v5 = v14;
LABEL_16:
      v11 = ++v16;
      goto LABEL_17;
    }
  }
  return result;
}
