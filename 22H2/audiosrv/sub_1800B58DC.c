/*
 * XREFs of sub_1800B58DC @ 0x1800B58DC
 * Callers:
 *     sub_1800B5D50 @ 0x1800B5D50 (sub_1800B5D50.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B4610 @ 0x1800B4610 (sub_1800B4610.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     sub_1800B56D8 @ 0x1800B56D8 (sub_1800B56D8.c)
 *     sub_1800B5704 @ 0x1800B5704 (sub_1800B5704.c)
 *     sub_1800B5F60 @ 0x1800B5F60 (sub_1800B5F60.c)
 *     sub_1800B6060 @ 0x1800B6060 (sub_1800B6060.c)
 */

void *__fastcall sub_1800B58DC(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rcx
  void *result; // rax
  __int64 v18; // r10
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  v4 = sub_1800B5704(*(_QWORD *)(a2 + 112));
  v5 = sub_1800B5704(*(_QWORD *)(a2 + 88)) + v4;
  v6 = sub_1800B5704(*(_QWORD *)(a2 + 16)) + v5;
  v7 = sub_1800B56D8(*(_QWORD *)(a2 + 104)) + v6;
  v8 = sub_1800B56D8(*(_QWORD *)(a2 + 80)) + v7;
  v9 = sub_1800B56D8(*(_QWORD *)(a2 + 64)) + v8;
  v10 = sub_1800B56D8(*(_QWORD *)(a2 + 48)) + v9;
  v11 = sub_1800B56D8(*(_QWORD *)(a2 + 40)) + v10;
  v12 = sub_1800B56D8(*(_QWORD *)(a2 + 32)) + v11;
  v13 = sub_1800B56D8(*(_QWORD *)(a2 + 120)) + v12;
  v14 = (_QWORD *)(a1 + 144);
  v15 = *(_DWORD **)(a1 + 144);
  if ( !v15 || *v15 != 1 || *(_QWORD *)(a1 + 152) < v13 )
  {
    sub_1800B6060(a1 + 144);
    sub_1800B5F60(a1 + 144, 0LL, v13);
  }
  v16 = *v14 + 4LL;
  result = (void *)-*v14;
  v18 = v16 & -(__int64)(*v14 != 0LL);
  if ( v18 )
    v19 = *(_QWORD *)(a1 + 152) + v18;
  else
    v19 = 0LL;
  if ( v18 )
  {
    v20 = sub_1800B4684(v16 & -(__int64)(*v14 != 0LL), v19, *(_WORD **)(a2 + 16), (_QWORD *)(a1 + 16));
    v21 = sub_1800B4610(v20, v19, *(_BYTE **)(a2 + 32), (_QWORD *)(a1 + 32));
    v22 = sub_1800B4610(v21, v19, *(_BYTE **)(a2 + 40), (_QWORD *)(a1 + 40));
    v23 = sub_1800B4610(v22, v19, *(_BYTE **)(a2 + 48), (_QWORD *)(a1 + 48));
    v24 = sub_1800B4610(v23, v19, *(_BYTE **)(a2 + 64), (_QWORD *)(a1 + 64));
    v25 = sub_1800B4610(v24, v19, *(_BYTE **)(a2 + 120), (_QWORD *)(a1 + 120));
    v26 = sub_1800B4610(v25, v19, *(_BYTE **)(a2 + 104), (_QWORD *)(a1 + 104));
    v27 = sub_1800B4684(v26, v19, *(_WORD **)(a2 + 112), (_QWORD *)(a1 + 112));
    v28 = sub_1800B4610(v27, v19, *(_BYTE **)(a2 + 80), (_QWORD *)(a1 + 80));
    v29 = (void *)sub_1800B4684(v28, v19, *(_WORD **)(a2 + 88), (_QWORD *)(a1 + 88));
    return memset(v29, 0, v19 - (_QWORD)v29);
  }
  return result;
}
