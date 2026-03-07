char *__fastcall RtlpHpVsContextAllocate(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bl
  char *v6; // rsi
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v4 = a4;
  v9 = 0LL;
  v10 = 0LL;
  v6 = RtlpHpVsContextAllocateInternal(a1, a2, a3, a4, (__int64)&v9, &v8);
  if ( v8 && (v4 & 1) == 0 )
    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)&v9);
  return v6;
}
