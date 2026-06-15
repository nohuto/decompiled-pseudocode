/*
 * XREFs of sub_1800B6E6C @ 0x1800B6E6C
 * Callers:
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 * Callees:
 *     sub_1800B6804 @ 0x1800B6804 (sub_1800B6804.c)
 */

__int64 __fastcall sub_1800B6E6C(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+B8h] [rbp-80h] BYREF
  int v7; // [rsp+BCh] [rbp-7Ch] BYREF
  int v8; // [rsp+C0h] [rbp-78h] BYREF
  int v9; // [rsp+C4h] [rbp-74h] BYREF
  int v10; // [rsp+C8h] [rbp-70h] BYREF
  const CHAR *v11; // [rsp+D0h] [rbp-68h] BYREF
  void *v12; // [rsp+D8h] [rbp-60h] BYREF
  const CHAR *v13; // [rsp+E0h] [rbp-58h] BYREF
  void *v14; // [rsp+E8h] [rbp-50h] BYREF
  const CHAR *v15; // [rsp+F0h] [rbp-48h] BYREF
  const CHAR *v16; // [rsp+F8h] [rbp-40h] BYREF
  void *v17; // [rsp+100h] [rbp-38h] BYREF
  const CHAR *v18; // [rsp+108h] [rbp-30h] BYREF
  const CHAR *v19; // [rsp+110h] [rbp-28h] BYREF
  __int64 v20; // [rsp+118h] [rbp-20h] BYREF
  int v21; // [rsp+138h] [rbp+0h] BYREF
  int v22; // [rsp+148h] [rbp+10h] BYREF
  int v23; // [rsp+150h] [rbp+18h] BYREF

  v4 = *(_DWORD **)(a1 + 8);
  if ( *v4 > 2u )
  {
    v11 = (const CHAR *)*((_QWORD *)a2 + 5);
    v21 = a2[15];
    v22 = a2[2];
    v12 = (void *)*((_QWORD *)a2 + 14);
    v13 = (const CHAR *)*((_QWORD *)a2 + 13);
    v23 = a2[24];
    v14 = (void *)*((_QWORD *)a2 + 11);
    v15 = (const CHAR *)*((_QWORD *)a2 + 10);
    v6 = a2[18];
    v16 = (const CHAR *)*((_QWORD *)a2 + 8);
    v7 = a2[6];
    v17 = (void *)*((_QWORD *)a2 + 2);
    v8 = *a2;
    v18 = (const CHAR *)*((_QWORD *)a2 + 15);
    v9 = a2[14];
    v19 = (const CHAR *)*((_QWORD *)a2 + 6);
    v10 = a2[1];
    v20 = 0x1000000LL;
    return sub_1800B6804(
             (__int64)v4,
             byte_180165F1A,
             a3,
             a4,
             (__int64)&v20,
             (__int64)&v10,
             &v19,
             (__int64)&v9,
             &v18,
             (__int64)&v8,
             &v17,
             (__int64)&v7,
             &v16,
             (__int64)&v6,
             &v15,
             &v14,
             (__int64)&v23,
             &v13,
             &v12,
             (__int64)&v22,
             (__int64)&v21,
             &v11);
  }
  return result;
}
