/*
 * XREFs of IopCaptureObjectName @ 0x140A9B740
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ObQueryNameString @ 0x14071EA00 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_WORD *__fastcall IopCaptureObjectName(void *a1)
{
  _WORD *v1; // rbx
  _WORD *Pool2; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-228h] BYREF
  struct _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-218h] BYREF

  ReturnLength[0] = 0;
  v1 = 0LL;
  if ( ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength) >= 0 )
  {
    if ( ObjectNameInfo.Name.Buffer )
    {
      Pool2 = (_WORD *)ExAllocatePool2(64LL, ObjectNameInfo.Name.Length + 2LL, 1766084676LL);
      v1 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, ObjectNameInfo.Name.Buffer, ObjectNameInfo.Name.Length);
        v1[(unsigned __int64)ObjectNameInfo.Name.Length >> 1] = 0;
      }
    }
  }
  return v1;
}
