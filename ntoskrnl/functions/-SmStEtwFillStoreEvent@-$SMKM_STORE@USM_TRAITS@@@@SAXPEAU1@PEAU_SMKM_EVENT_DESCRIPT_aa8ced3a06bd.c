_QWORD *__fastcall SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _DWORD *v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  _DWORD *v20; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // rcx
  _QWORD *v23; // rax
  _DWORD *v24; // rcx
  _QWORD *v25; // rax
  _WORD *v26; // rcx
  _QWORD *v27; // rax
  _WORD *v28; // rcx
  _QWORD *v29; // rax
  _DWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // r11
  __int64 v33; // r10
  _DWORD *v34; // r10
  int v35; // r9d
  int v36; // esi
  int v37; // r8d
  _QWORD *v38; // rax
  _DWORD *v39; // rcx
  _QWORD *v40; // rax
  _DWORD *v41; // rcx
  _QWORD *v42; // rax
  _DWORD *v43; // rcx
  _QWORD *v44; // rax
  _DWORD *v45; // rcx
  _QWORD *v46; // rax
  _DWORD *v47; // rcx
  _QWORD *v48; // rax
  _DWORD *v49; // rcx
  _DWORD *v50; // rbx
  _QWORD *result; // rax
  int v52; // [rsp+60h] [rbp+40h] BYREF
  int v53; // [rsp+68h] [rbp+48h] BYREF
  int v54; // [rsp+70h] [rbp+50h] BYREF
  int v55; // [rsp+78h] [rbp+58h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v52 = 0;
  v54 = 0;
  v5 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v3);
  v53 = 0;
  v55 = 0;
  *v5 = a1;
  v6 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v6 = v5;
  v6[1] = 8LL;
  v7 = *(_DWORD *)(a2 + 24);
  ++*(_DWORD *)(a2 + 16);
  v8 = v7 + 8;
  *(_DWORD *)(a2 + 24) = v8;
  if ( *(_BYTE *)(a1 + 6020) == 1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 6224) + 24LL);
  else
    v9 = 0LL;
  v10 = (_QWORD *)(*(_QWORD *)(a2 + 8) + v8);
  *v10 = v9;
  v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v11 = v10;
  v11[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v12 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v12 = a1 + 80;
  v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v13 = v12;
  v13[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  ++*(_DWORD *)(a2 + 16);
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v14 = a1 + 2016;
  v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v15 = v14;
  v15[1] = 8LL;
  *(_DWORD *)(a2 + 24) += 8;
  v16 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -6208 )
    *v16 = *(_DWORD *)(a1 + 6208);
  v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v17 = v16;
  v17[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v18 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v18 = *(_DWORD *)(a1 + 2872) + *(_DWORD *)(a1 + 936);
  v19 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v19 = v18;
  v19[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v20 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v20 = 4096;
  v21 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v21 = v20;
  v21[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  v22 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -16 )
    *v22 = *(_DWORD *)(a1 + 16);
  v23 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v23 = v22;
  v23[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v24 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v24 = 8 * *(_DWORD *)(a1 + 4088);
  v25 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v25 = v24;
  v25[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  v26 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  *v26 = *(unsigned __int8 *)(a1 + 6020);
  v27 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v27 = v26;
  v27[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v28 = (_WORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -6016 )
    *v28 = *(_WORD *)(a1 + 6016);
  v29 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v29 = v28;
  v29[1] = 2LL;
  *(_DWORD *)(a2 + 24) += 2;
  v30 = (_DWORD *)(*(_QWORD *)(a2 + 8) + *(unsigned int *)(a2 + 24));
  ++*(_DWORD *)(a2 + 16);
  if ( a1 != -88 )
    *v30 = *(_DWORD *)(a1 + 88);
  v31 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  *v31 = v30;
  v31[1] = 4LL;
  *(_DWORD *)(a2 + 24) += 4;
  ++*(_DWORD *)(a2 + 16);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 80, &v52, &v54);
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2016, &v53, &v55);
  v34 = (_DWORD *)(*(_QWORD *)(v32 + 8) + v33);
  v35 = v53;
  v36 = v55;
  v37 = v55 + v54;
  *v34 = v53 + v52;
  v38 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v38 = v34;
  v38[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  ++*(_DWORD *)(v32 + 16);
  v39 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  *v39 = v37;
  v40 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v40 = v39;
  v40[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  ++*(_DWORD *)(v32 + 16);
  v41 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  *v41 = *(_DWORD *)(a1 + 856);
  v42 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v42 = v41;
  v42[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  v43 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  ++*(_DWORD *)(v32 + 16);
  if ( a1 != -2872 )
    *v43 = *(_DWORD *)(a1 + 2872);
  v44 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v44 = v43;
  v44[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  ++*(_DWORD *)(v32 + 16);
  v45 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  *v45 = v35;
  v46 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v46 = v45;
  v46[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  ++*(_DWORD *)(v32 + 16);
  v47 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  *v47 = v36;
  v48 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *v48 = v47;
  v48[1] = 4LL;
  *(_DWORD *)(v32 + 24) += 4;
  v49 = (_DWORD *)(*(_QWORD *)(v32 + 8) + *(unsigned int *)(v32 + 24));
  ++*(_DWORD *)(v32 + 16);
  v50 = (_DWORD *)(a1 + 1180);
  if ( v50 )
    *v49 = *v50;
  result = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
  *result = v49;
  result[1] = 4LL;
  ++*(_DWORD *)(v32 + 16);
  *(_DWORD *)(v32 + 24) += 4;
  return result;
}
