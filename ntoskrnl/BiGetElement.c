/*
 * XREFs of BiGetElement @ 0x140A59CEC
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5AB4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140A5AD88 (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A5BD48 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x140A5C248 (BiUpdateEfiEntry.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  int ElementDataWithFlags; // ebx
  void *Pool2; // rdi
  __int64 v10; // r8
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, (__int64)a3, 0LL, &v12);
  if ( ElementDataWithFlags == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(258LL, v12, 1262764866LL);
    if ( Pool2 )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v10, (__int64)Pool2, &v12);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x4B444342u);
      }
      else
      {
        *a4 = v12;
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ElementDataWithFlags;
}
