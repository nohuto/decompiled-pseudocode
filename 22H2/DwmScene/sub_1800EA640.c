/*
 * XREFs of sub_1800EA640 @ 0x1800EA640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_180090154 @ 0x180090154 (sub_180090154.c)
 */

__int64 __fastcall sub_1800EA640(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v13 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = *(_QWORD *)(a1 + 64);
  }
  v5 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v13 + 1) = v3;
  *(_QWORD *)&v13 = v5;
  sub_18008DDD8(a2, &v13);
  v6 = *(_QWORD *)(a1 + 64);
  v14 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 64);
  }
  v7 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v14 + 1) = v6;
  *(_QWORD *)&v14 = v7;
  sub_18008F218(a2, &v14);
  v8 = *(_QWORD *)(a1 + 64);
  v15 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 64);
  }
  v9 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v15 + 1) = v8;
  *(_QWORD *)&v15 = v9;
  sub_18008FA00(a2, &v15);
  v10 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 64);
  }
  v11 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v16 + 1) = v10;
  *(_QWORD *)&v16 = v11;
  return sub_180090154(a2, &v16);
}
