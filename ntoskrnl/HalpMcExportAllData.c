/*
 * XREFs of HalpMcExportAllData @ 0x14085CB80
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x14085CB10 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void *__fastcall HalpMcExportAllData(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rdi
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  Pool2 = 0LL;
  if ( HalpMcUpdateExportDataFunc )
  {
    if ( (unsigned int)HalpMcUpdateExportDataFunc(0LL, &v7, 0LL) == -1073741789 )
    {
      v7 = (v7 + 4095) & 0xFFFFF000;
      Pool2 = (void *)ExAllocatePool2(a2, v7, 1668047176LL);
      if ( Pool2 )
      {
        v8 = v7;
        if ( (int)HalpMcUpdateExportDataFunc(Pool2, &v8, 0LL) < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x636C6148u);
          Pool2 = 0LL;
        }
        else
        {
          v2 = v7;
        }
      }
    }
  }
  *a1 = v2;
  return Pool2;
}
