/*
 * XREFs of SepBuildCapPolicyTable @ 0x1403ADEDC
 * Callers:
 *     SepRmCapUpdateWrkr @ 0x14085D390 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14036F050 (RtlpCreateHashTable.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     memset @ 0x140435400 (memset.c)
 *     SepRegOpenKey @ 0x1407F5978 (SepRegOpenKey.c)
 *     SepReadAndPopulateCapes @ 0x14085D47C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1409D1DBC (SepReadAndInsertCaps.c)
 *     SepRmDestroyCapTable @ 0x1409D242C (SepRmDestroyCapTable.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepBuildCapPolicyTable(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  HANDLE v4; // [rsp+20h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  if ( (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies",
              0x201u,
              &KeyHandle) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
              0x201u,
              &v4) < 0
    || (int)SepRegOpenKey(
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPs",
              0x201u,
              &Handle) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = SepReadAndPopulateCapes(v4);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v2;
}
