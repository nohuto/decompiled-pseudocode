__int64 __fastcall CmSiPrefetchVirtualMemoryRange(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v3 = *a1;
  v5[0] = a2;
  v5[1] = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
           v3,
           0LL,
           1LL,
           v5,
           &v6,
           4);
}
