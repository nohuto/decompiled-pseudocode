NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, unsigned int a3)
{
  __int128 v4; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+40h] [rbp-40h] BYREF

  plsnFlush.ullOffset = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
    return 0;
  v8[0] = 0LL;
  v8[2] = 0LL;
  DWORD1(v8[0]) = 48;
  v4 = *(_OWORD *)(a2 + 88);
  *((_QWORD *)&v8[0] + 1) = a3;
  v8[1] = v4;
  LODWORD(v8[0]) = HvBufferCheckSum(v8, 48LL);
  result = CmpTransWriteLog(a1, (unsigned int)v8, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
