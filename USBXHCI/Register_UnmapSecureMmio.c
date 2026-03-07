__int64 __fastcall Register_UnmapSecureMmio(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  v4 = 0LL;
  v5 = 0LL;
  v7 = 9LL;
  v6 = v1;
  return SecureChannel_SendRequestSynchronously(v2, &v4, 40LL, 0LL, 0);
}
