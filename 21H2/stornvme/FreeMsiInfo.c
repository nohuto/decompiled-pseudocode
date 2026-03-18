/*
 * XREFs of FreeMsiInfo @ 0x1C000642C
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C0006260 (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMsiInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 280);
  if ( v6 )
  {
    result = StorPortExtendedFunction(1LL, a1, v6, a4);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  *(_WORD *)(a1 + 272) = 0;
  return result;
}
