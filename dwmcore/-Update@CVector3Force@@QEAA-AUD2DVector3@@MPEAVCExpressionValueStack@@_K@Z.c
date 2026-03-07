__int64 __fastcall CVector3Force::Update(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // xmm0_8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 352) & 1) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 328);
    v6 = *(_QWORD *)(a1 + 288);
    v11 = *(_DWORD *)(a1 + 336);
    v13 = *(_DWORD *)(a1 + 324);
    v9 = *(_QWORD *)(a1 + 304);
    v7 = *(_QWORD *)(a1 + 296);
    v10 = v5;
    v12 = *(_QWORD *)(a1 + 316);
    ((void (__fastcall *)(__int64, __int64 *, __int64 *, __int64, __int64, __int64))CVector3ForceEvaluator::Reset)(
      a1 + 16,
      &v12,
      &v10,
      v6,
      v7,
      v9);
    *(_BYTE *)(a1 + 352) |= 1u;
  }
  CVector3ForceEvaluator::AdvanceToTime(
    a1 + 16,
    a2,
    a3,
    *(_QWORD *)(a1 + 288),
    *(_QWORD *)(a1 + 296),
    *(_QWORD *)(a1 + 304));
  return a2;
}
