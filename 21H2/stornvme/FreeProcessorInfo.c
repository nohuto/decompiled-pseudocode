/*
 * XREFs of FreeProcessorInfo @ 0x1C00078F8
 * Callers:
 *     GetProcessorInformation @ 0x1C00075B8 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C0018DF8 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C00195A8 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeProcessorInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 )
  {
    result = StorPortExtendedFunction(1LL, a1, v4, a4);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 )
  {
    result = StorPortExtendedFunction(1LL, a1, v6, a4);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  return result;
}
