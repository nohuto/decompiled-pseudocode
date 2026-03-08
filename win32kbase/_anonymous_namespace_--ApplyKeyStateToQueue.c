/*
 * XREFs of _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1C00B8D74
 * Callers:
 *     _anonymous_namespace_::UpdateKeyState @ 0x1C00B8CEC (_anonymous_namespace_--UpdateKeyState.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::ApplyKeyStateToQueue(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v3; // r10
  char v4; // dl
  int v5; // eax
  int result; // eax
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // edx

  v3 = a2;
  if ( a3 )
  {
    v7 = a2 & 3;
    v8 = *(unsigned __int8 *)(((unsigned __int64)a2 >> 2) + a1 + 236);
    if ( !_bittest(&v8, (unsigned __int8)(2 * v7)) )
    {
      v9 = 2 * v7 + 1;
      if ( _bittest(&v8, v9) )
        v10 = v8 & ~(1 << v9);
      else
        v10 = v8 | (1 << v9);
      *(_BYTE *)((v3 >> 2) + a1 + 236) = v10;
    }
  }
  v4 = 2 * (v3 & 3);
  v5 = *(unsigned __int8 *)((v3 >> 2) + a1 + 236);
  if ( a3 )
    result = v5 | (1 << v4);
  else
    result = v5 & ~(1 << v4);
  *(_BYTE *)((v3 >> 2) + a1 + 236) = result;
  if ( (unsigned __int8)v3 < 0x20u )
  {
    result = (int)gpsi;
    ++*((_DWORD *)gpsi + 1746);
  }
  return result;
}
