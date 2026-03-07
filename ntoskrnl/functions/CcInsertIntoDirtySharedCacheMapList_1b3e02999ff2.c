__int64 *__fastcall CcInsertIntoDirtySharedCacheMapList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  bool v8; // zf
  __int64 *v9; // rax
  __int64 *v10; // r10
  __int64 v11; // rdx
  __int64 **v12; // r9
  __int64 **v13; // r9
  __int64 *result; // rax
  __int64 *v15; // rdx
  __int64 **v16; // r9
  __int64 **v17; // rdx
  __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 **v20; // rcx
  __int64 **v21; // rcx

  v1 = *(_QWORD *)(a1 + 536);
  v2 = v1 + 680;
  v3 = v1 + 704;
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v4 = (_QWORD *)(a1 + 120);
    v5 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(v5 + 8) != a1 + 120 )
      goto LABEL_19;
    v6 = *(_QWORD **)(a1 + 128);
    if ( (_QWORD *)*v6 != v4 )
      goto LABEL_19;
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v7 = *(_QWORD **)(v3 + 8);
    if ( *v7 != v3 )
      goto LABEL_19;
    v8 = CcEnablePerVolumeLazyWriter == 0;
    *v4 = v3;
    *(_QWORD *)(a1 + 128) = v7;
    *v7 = v4;
    *(_QWORD *)(v3 + 8) = v4;
    if ( !v8 )
    {
      v9 = (__int64 *)(a1 + 584);
      v10 = *(__int64 **)(a1 + 584);
      v11 = *(_QWORD *)(a1 + 600) + 688LL;
      if ( v10[1] != a1 + 584 )
        goto LABEL_19;
      v12 = *(__int64 ***)(a1 + 592);
      if ( *v12 != v9 )
        goto LABEL_19;
      *v12 = v10;
      v10[1] = (__int64)v12;
      v13 = *(__int64 ***)(v11 + 8);
      if ( *v13 != (__int64 *)v11 )
        goto LABEL_19;
      *v9 = v11;
      *(_QWORD *)(a1 + 592) = v13;
      *v13 = v9;
      *(_QWORD *)(v11 + 8) = v9;
    }
  }
  result = (__int64 *)(a1 + 136);
  v15 = *(__int64 **)(a1 + 136);
  if ( v15[1] != a1 + 136 )
    goto LABEL_19;
  v16 = *(__int64 ***)(a1 + 144);
  if ( *v16 != result )
    goto LABEL_19;
  *v16 = v15;
  v15[1] = (__int64)v16;
  v17 = *(__int64 ***)(v2 + 8);
  if ( *v17 != (__int64 *)v2 )
    goto LABEL_19;
  v8 = CcEnablePerVolumeLazyWriter == 0;
  *result = v2;
  *(_QWORD *)(a1 + 144) = v17;
  *v17 = result;
  *(_QWORD *)(v2 + 8) = result;
  if ( v8 )
    return result;
  result = (__int64 *)(a1 + 568);
  v18 = *(__int64 **)(a1 + 568);
  v19 = *(_QWORD *)(a1 + 600) + 664LL;
  if ( v18[1] != a1 + 568
    || (v20 = *(__int64 ***)(a1 + 576), *v20 != result)
    || (*v20 = v18, v18[1] = (__int64)v20, v21 = *(__int64 ***)(v19 + 8), *v21 != (__int64 *)v19) )
  {
LABEL_19:
    __fastfail(3u);
  }
  *result = v19;
  result[1] = (__int64)v21;
  *v21 = result;
  *(_QWORD *)(v19 + 8) = result;
  return result;
}
