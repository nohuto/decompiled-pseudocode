/*
 * XREFs of ?DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C02D54BC
 * Callers:
 *     DpiIndirectOpenDevice @ 0x1C02D5E3C (DpiIndirectOpenDevice.c)
 * Callees:
 *     <none>
 */

int __fastcall DpiIndirectGetObjectName(PVOID Object, struct _OBJECT_NAME_INFORMATION **a2)
{
  int result; // eax
  struct _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+18h] BYREF

  ReturnLength = 0;
  result = ObQueryNameString(Object, 0LL, 0, &ReturnLength);
  if ( result >= 0 )
    return -1073741275;
  if ( result == -1073741820 )
  {
    PoolWithTag = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74727044u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
      return ObQueryNameString(Object, PoolWithTag, ReturnLength, &ReturnLength);
    else
      return -1073741801;
  }
  return result;
}
