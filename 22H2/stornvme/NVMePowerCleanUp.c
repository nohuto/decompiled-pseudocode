/*
 * XREFs of NVMePowerCleanUp @ 0x1C000FCA4
 * Callers:
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000EC50 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  *(_DWORD *)(a1 + 1880) &= 0xFFFFFFF8;
  *(_WORD *)(a1 + 1886) = 0;
  v2 = *(_QWORD *)(a1 + 1872);
  if ( v2 )
  {
    StorPortExtendedFunction(1LL, a1, v2);
    *(_QWORD *)(a1 + 1872) = 0LL;
  }
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1920));
  v4 = *(_QWORD *)(a1 + 1864);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 1864) = 0LL;
  }
  return result;
}
