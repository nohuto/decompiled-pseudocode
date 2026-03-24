/*
 * XREFs of NVMeCancelAllCompletionQueueDpc @ 0x1C000D1D8
 * Callers:
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCancelAllCompletionQueueDpc(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int i; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *(_QWORD *)(a1 + 784);
    if ( !v5 || i >= *(unsigned __int16 *)(a1 + 290) )
      break;
    v4 = v5 + 344LL * i;
    if ( *(_BYTE *)(v4 + 200) )
      v2 = StorPortExtendedFunction(95LL, a1, v4 + 216, &v7);
  }
  return v2;
}
