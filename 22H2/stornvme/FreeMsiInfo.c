/*
 * XREFs of FreeMsiInfo @ 0x1C0009A38
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C0009B6C (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000EC50 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMsiInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 296);
  if ( v1 )
  {
    result = StorPortExtendedFunction(1LL, a1, v1);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  *(_WORD *)(a1 + 280) = 0;
  return result;
}
