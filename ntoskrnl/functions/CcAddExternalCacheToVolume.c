__int64 __fastcall CcAddExternalCacheToVolume(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = CcCreatePrivateVolumeCacheMap(*((_QWORD *)PspSystemPartition + 1), 0LL, &v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    *(_QWORD *)(a1 + 56) = v5;
    CcAddExternalCacheInternal(a1, v3 + 1248);
  }
  return (unsigned int)v2;
}
