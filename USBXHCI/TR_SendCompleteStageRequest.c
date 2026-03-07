__int64 __fastcall TR_SendCompleteStageRequest(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int128 v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 288);
  v3 = *(_QWORD *)(a1 + 40);
  v8 = 0LL;
  DWORD2(v8) = a2;
  v6 = 0LL;
  v7 = v2;
  v5 = 0LL;
  LODWORD(v8) = 43;
  return SecureChannel_SendRequestSynchronously(*(_QWORD *)(v3 + 112), &v5, 48LL, 0LL, 0);
}
