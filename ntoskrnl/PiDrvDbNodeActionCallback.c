/*
 * XREFs of PiDrvDbNodeActionCallback @ 0x1408692B0
 * Callers:
 *     <none>
 * Callees:
 *     PiDrvDbUnloadNode @ 0x140869314 (PiDrvDbUnloadNode.c)
 *     PiDrvDbLoadNode @ 0x1408693C4 (PiDrvDbLoadNode.c)
 */

__int64 __fastcall PiDrvDbNodeActionCallback(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6)
{
  unsigned int v6; // ecx
  int v7; // r8d

  v6 = 0;
  if ( (*(_DWORD *)(a6 + 64) & 4) == 0 )
    return (unsigned int)-1073741822;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( a4 != 1 )
      return v6;
    return (unsigned int)PiDrvDbLoadNode(a6, *a5);
  }
  if ( v7 != 1 )
    return (unsigned int)-1073741822;
  if ( a4 == 1 )
    return (unsigned int)PiDrvDbUnloadNode(a6, *a5);
  return v6;
}
