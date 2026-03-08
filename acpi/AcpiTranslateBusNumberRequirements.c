/*
 * XREFs of AcpiTranslateBusNumberRequirements @ 0x1C00973E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiTranslateBusNumberRequirements(int a1, _OWORD *a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  __int64 Pool2; // rax
  int v10; // ebx

  *a5 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1383097153LL);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = a1 << 8;
  *(_OWORD *)Pool2 = *a2;
  *(_OWORD *)(Pool2 + 16) = a2[1];
  *(_DWORD *)(Pool2 + 12) |= v10;
  *(_DWORD *)(Pool2 + 16) |= v10;
  *a4 = 1;
  *a5 = Pool2;
  return 288LL;
}
