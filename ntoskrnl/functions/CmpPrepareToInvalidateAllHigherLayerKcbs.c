__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbs(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int128 v5; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v6[1] = a3;
  v7 = a2;
  v6[0] = 0LL;
  v8 = 0;
  v5 = 0LL;
  CmpInitializeDelayDerefContext(&v5);
  CmpEnumerateAllHigherLayerKcbs(
    v3,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
    (__int64)&v5,
    (__int64)v6,
    1,
    1);
  CmpDrainDelayDerefContext((_QWORD **)&v5);
  return LODWORD(v6[0]);
}
