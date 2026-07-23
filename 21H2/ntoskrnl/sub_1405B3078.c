/*
 * XREFs of sub_1405B3078 @ 0x1405B3078
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409065D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14061AFD0 (RtlQueryRegistryValuesEx.c)
 *     ExInitLicenseData @ 0x1407AAF08 (ExInitLicenseData.c)
 *     ExpInitLicensing @ 0x1407D41F8 (ExpInitLicensing.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405B3078(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *Pool2; // r14
  NTSTATUS v5; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v7; // rbx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  __int64 v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+47h]
  int v16; // [rsp+A0h] [rbp+4Fh]

  Blink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  if ( a1 )
    Blink = a1[79].Blink;
  v3 = 0LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 81928LL, 1767066707LL);
  if ( Pool2 && (v3 = (struct _LIST_ENTRY *)ExAllocatePool2(256LL, 47040LL, 1767066707LL)) != 0LL )
  {
    memset(Pool2, 0, 0x14000uLL);
    memset(&v3->Blink, 0, 0xB7B4uLL);
    HIDWORD(Pool2[5120].Flink) = 0;
    QueryTable.DefaultData = 0LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    LODWORD(Pool2[5120].Flink) = 81920;
    HIDWORD(v3[2939].Blink) = -1;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ExpQueryRegistryRoutine;
    v3->Flink = Pool2;
    QueryTable.Name = L"ProductPolicy";
    Blink[56].Blink = v3;
    QueryTable.Flags = 256;
    QueryTable.DefaultType = 50331651;
    QueryTable.DefaultLength = 81920;
    QueryTable.EntryContext = v3;
    ExpInitLicensing(Blink);
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
    v5 = RtlQueryRegistryValuesEx(2u, L"ProductOptions", &QueryTable, 0LL, 0LL);
    ExInitLicenseData();
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = v7;
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x69534C53u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x69534C53u);
  return (unsigned int)v5;
}
