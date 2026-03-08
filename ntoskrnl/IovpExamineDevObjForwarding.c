/*
 * XREFs of IovpExamineDevObjForwarding @ 0x140AC9F60
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140ACFAC0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilRelateDeviceObjects @ 0x140ACFD4C (IovUtilRelateDeviceObjects.c)
 */

__int64 __fastcall IovpExamineDevObjForwarding(__int64 a1, __int64 a2)
{
  void *UpperDeviceObjectWithTag; // rax
  void *v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !a2 )
  {
    UpperDeviceObjectWithTag = (void *)IovUtilGetUpperDeviceObjectWithTag(a1);
    if ( !UpperDeviceObjectWithTag )
      return 1LL;
    ObfDereferenceObjectWithTag(UpperDeviceObjectWithTag, 0x49667256u);
    return 4LL;
  }
  IovUtilRelateDeviceObjects(a1, a2, &v6);
  switch ( v6 )
  {
    case 0:
      return 2LL;
    case 1:
      return 3LL;
    case 2:
      return 2LL;
    case 3:
    case 4:
      return 3LL;
  }
  if ( v6 != 5 )
    return 2LL;
  v5 = (void *)IovUtilGetUpperDeviceObjectWithTag(a1);
  if ( !v5 )
    return 5LL;
  ObfDereferenceObjectWithTag(v5, 0x49667256u);
  return 6LL;
}
