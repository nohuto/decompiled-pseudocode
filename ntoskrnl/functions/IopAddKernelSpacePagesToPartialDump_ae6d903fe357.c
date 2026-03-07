__int64 IopAddKernelSpacePagesToPartialDump()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v4[5]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+58h] [rbp-8h]

  v5 = 0LL;
  v0 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v1 = *(_QWORD *)(v0 + 48);
  LODWORD(v5) = 7;
  v3[0] = v1;
  v3[1] = v0 + 56;
  v4[2] = v3;
  v4[4] = &AvailablePagesForPartialDump;
  v4[0] = IoSetDumpRange;
  v4[3] = v0;
  v4[1] = IoFreeDumpRange;
  return MmGetDumpRange(v4, 0LL, 3LL);
}
