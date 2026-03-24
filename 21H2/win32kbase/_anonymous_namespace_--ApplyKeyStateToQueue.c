/*
 * XREFs of _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1C0092EE8
 * Callers:
 *     _anonymous_namespace_::UpdateKeyState @ 0x1C0092E50 (_anonymous_namespace_--UpdateKeyState.c)
 * Callees:
 *     <none>
 */

int __fastcall anonymous_namespace_::ApplyKeyStateToQueue(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int64 v5; // rcx
  char v6; // r8
  int v7; // eax
  int result; // eax
  unsigned __int64 v9; // r10
  int v10; // r11d
  int v11; // r8d
  unsigned int v12; // eax
  int v13; // r8d

  if ( a3 )
  {
    v9 = (unsigned __int64)a2 >> 2;
    v10 = a2 & 3;
    v11 = *(unsigned __int8 *)(v9 + a1 + 228);
    if ( !_bittest(&v11, (unsigned __int8)(2 * v10)) )
    {
      v12 = 2 * v10 + 1;
      if ( _bittest(&v11, v12) )
        v13 = v11 & ~(1 << v12);
      else
        v13 = v11 | (1 << v12);
      *(_BYTE *)(v9 + a1 + 228) = v13;
    }
  }
  v5 = (unsigned __int64)a2 >> 2;
  v6 = 2 * (a2 & 3);
  v7 = *(unsigned __int8 *)(v5 + a1 + 228);
  if ( a3 )
    result = v7 | (1 << v6);
  else
    result = v7 & ~(1 << v6);
  *(_BYTE *)(v5 + a1 + 228) = result;
  if ( a2 < 0x20u )
  {
    result = (int)gpsi;
    ++*((_DWORD *)gpsi + 1746);
  }
  return result;
}
