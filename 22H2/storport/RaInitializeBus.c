/*
 * XREFs of RaInitializeBus @ 0x1C0079EE8
 * Callers:
 *     RaidAdapterConfigureResources @ 0x1C002BE0C (RaidAdapterConfigureResources.c)
 *     RaidAdapterHack @ 0x1C002CD14 (RaidAdapterHack.c)
 * Callees:
 *     RaQueryInterface @ 0x1C0044778 (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (__int64)a2, a3, a4, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
