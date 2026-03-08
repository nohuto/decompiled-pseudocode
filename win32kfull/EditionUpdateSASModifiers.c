/*
 * XREFs of EditionUpdateSASModifiers @ 0x1C0102CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C0148E14 (-VKTOMODIFIERS@@YAIE@Z.c)
 */

void __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rax

  if ( (!a1 || gProtocolType && gptiCurrent == gptiRit) && (a3 & 0x200) == 0 )
  {
    v4 = VKTOMODIFIERS(a2);
    if ( v5 )
    {
      v6 = SGDGetUserSessionState(v3);
      *(_DWORD *)(v6 + 13796) &= ~v4;
    }
    else
    {
      v7 = SGDGetUserSessionState(v3);
      *(_DWORD *)(v7 + 13796) |= v4;
    }
  }
}
