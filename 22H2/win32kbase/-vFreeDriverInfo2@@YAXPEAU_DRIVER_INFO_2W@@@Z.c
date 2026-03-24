/*
 * XREFs of ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C0C10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 */

void __fastcall vFreeDriverInfo2(struct _DRIVER_INFO_2W *a1)
{
  char *v1; // rbx

  if ( a1 )
  {
    v1 = (char *)a1 - 32;
    PopThreadGuardedObject((_QWORD *)a1 - 4);
    Win32FreePool((__int64)v1);
  }
}
