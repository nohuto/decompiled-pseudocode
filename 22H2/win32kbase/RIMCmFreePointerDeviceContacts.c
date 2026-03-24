/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C018026C
 * Callers:
 *     RIMFreePointerDevice @ 0x1C015D624 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167888 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C0169B4C (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017FF10 (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 936);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 936) = 0LL;
    *(_DWORD *)(a1 + 944) = 0;
  }
  v3 = *(_QWORD *)(a1 + 912);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  result = a1 + 920;
  *(_QWORD *)(a1 + 928) = a1 + 920;
  *(_QWORD *)(a1 + 920) = a1 + 920;
  return result;
}
