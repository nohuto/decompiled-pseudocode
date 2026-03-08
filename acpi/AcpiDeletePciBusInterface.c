/*
 * XREFs of AcpiDeletePciBusInterface @ 0x1C008A2A4
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0028840 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     IsPciDevice @ 0x1C00358A8 (IsPciDevice.c)
 */

__int64 __fastcall AcpiDeletePciBusInterface(__int64 a1)
{
  unsigned __int8 v1; // cf
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int128 Object; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = _bittest64((const signed __int64 *)(a1 + 8), 0x33u);
  v7 = 0;
  Object = 0LL;
  v6 = 0LL;
  if ( v1 || !*(_QWORD *)(a1 + 80) )
    return 0LL;
  KeInitializeEvent((PRKEVENT)&Object, SynchronizationEvent, 0);
  v3 = *(volatile signed __int32 **)(a1 + 760);
  DWORD2(v6) = -1073741275;
  result = IsPciDevice(v3, (__int64)AmlisuppCompletePassive, (__int64)&Object, &v7);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    result = DWORD2(v6);
  }
  if ( (int)result >= 0 && v7 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 88), 0xFFFFFEFF);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 80) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x46706341u);
    *(_QWORD *)(a1 + 80) = 0LL;
    return 0LL;
  }
  return result;
}
