/*
 * XREFs of KeConfigureDynamicMemory @ 0x14056C5A8
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     VslConfigureDynamicMemory @ 0x1405488C4 (VslConfigureDynamicMemory.c)
 *     HvlConfigureDynamicMemory @ 0x1406764F0 (HvlConfigureDynamicMemory.c)
 */

__int64 __fastcall KeConfigureDynamicMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  int v7; // ebx

  v3 = a3;
  if ( (((_DWORD)a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    result = HvlConfigureDynamicMemory(a1, a2, a3);
    if ( (int)result < 0 )
      return result;
    v7 = VslConfigureDynamicMemory(a1, a2, v3);
    if ( v7 < 0 && !v3 )
      HvlConfigureDynamicMemory(a1, a2, 8LL);
  }
  else
  {
    result = VslConfigureDynamicMemory(a1, a2, a3);
    if ( (int)result < 0 )
      return result;
    v7 = HvlConfigureDynamicMemory(a1, a2, v3);
    if ( v7 < 0 && v3 == 2 )
      VslConfigureDynamicMemory(a1, a2, 8u);
  }
  return (unsigned int)v7;
}
