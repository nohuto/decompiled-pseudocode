/*
 * XREFs of EtwpConstructIptData @ 0x1409F06F4
 * Callers:
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1409F0788 (EtwpUpdateProcessorTraceConfiguration.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ZwLoadDriver @ 0x14041C820 (ZwLoadDriver.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpConstructIptData(__int64 a1)
{
  NTSTATUS Driver; // eax
  _QWORD *Pool2; // rbx
  unsigned __int64 ExtensionTable; // rax

  Driver = ZwLoadDriver(&DriverServiceName);
  if ( (int)(Driver + 0x80000000) >= 0 && Driver != -1073741554 )
    return 3221226092LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1769436229LL);
  if ( !Pool2 )
    return 3221225495LL;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
  Pool2[2] = ExtensionTable;
  if ( !ExtensionTable )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221226092LL;
  }
  *(_QWORD *)(a1 + 1032) = Pool2;
  return 0LL;
}
