/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C01DEA60
 * Callers:
 *     RIMFreePointerDevice @ 0x1C01B5B18 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C01C4DCC (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C01DE2F0 (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  char *v1; // rdx
  char *v3; // rdx
  __int64 result; // rax

  v1 = *(char **)(a1 + 992);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *(_QWORD *)(a1 + 992) = 0LL;
    *(_DWORD *)(a1 + 1000) = 0;
  }
  v3 = *(char **)(a1 + 968);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *(_QWORD *)(a1 + 968) = 0LL;
  }
  result = a1 + 976;
  *(_QWORD *)(a1 + 984) = a1 + 976;
  *(_QWORD *)(a1 + 976) = a1 + 976;
  return result;
}
