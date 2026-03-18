/*
 * XREFs of EditionUpdateSASModifiers @ 0x1C010A490
 * Callers:
 *     <none>
 * Callees:
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C0207BBC (-VKTOMODIFIERS@@YAIE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3)
{
  unsigned int v3; // r8d
  int v4; // r9d

  if ( (!a1 || gProtocolType && gptiCurrent == gptiRit) && (a3 & 0x200) == 0 )
  {
    v3 = VKTOMODIFIERS(a2);
    if ( v4 )
      gfsSASModifiersDown &= ~v3;
    else
      gfsSASModifiersDown |= v3;
  }
}
