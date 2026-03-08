/*
 * XREFs of ?DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C039F91C
 * Callers:
 *     DpiIndirectOpenDevice @ 0x1C03A0200 (DpiIndirectOpenDevice.c)
 * Callees:
 *     <none>
 */

int __fastcall DpiIndirectGetObjectName(PVOID Object, struct _OBJECT_NAME_INFORMATION **a2)
{
  int result; // eax
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+18h] BYREF

  ReturnLength = 0;
  result = ObQueryNameString(Object, 0LL, 0, &ReturnLength);
  if ( result >= 0 )
    return -1073741275;
  if ( result == -1073741820 )
  {
    Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1953656900LL);
    *a2 = Pool2;
    if ( Pool2 )
      return ObQueryNameString(Object, Pool2, ReturnLength, &ReturnLength);
    else
      return -1073741801;
  }
  return result;
}
