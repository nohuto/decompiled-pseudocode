__int64 __fastcall PromotePointerInternal(
        __int64 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v6; // r13d
  unsigned __int16 v7; // bx
  __int64 v8; // rdi
  struct tagMOUSE_PROMOTION_ENTRY **CacheById; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  BOOL v14; // r12d
  int v15; // r15d
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // ecx
  int v26; // [rsp+30h] [rbp-58h]
  BOOL v27; // [rsp+34h] [rbp-54h]
  int v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+3Ch] [rbp-4Ch]
  int v30; // [rsp+40h] [rbp-48h]
  __int16 v31; // [rsp+90h] [rbp+8h]
  unsigned int v33; // [rsp+A0h] [rbp+18h] BYREF

  v31 = a1;
  v33 = 0;
  v6 = a2;
  v7 = a1;
  v8 = SGDGetUserSessionState(a1) + 16056;
  CacheById = (struct tagMOUSE_PROMOTION_ENTRY **)FindCacheById(v7, &v33);
  v11 = *(unsigned int *)(SGDGetUserSessionState(v10) + 16320);
  if ( (v11 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_ENTRY **)(SGDGetUserSessionState(v11) + 16064)
    && (!a4 || a4 == CacheById[2]) )
  {
    v13 = SGDGetUserSessionState(v12);
    *(_DWORD *)(v13 + 16320) &= ~8u;
  }
  v28 = v6 & 2;
  v14 = v28 != 0;
  v26 = v6 & 0x80000;
  v29 = v6 & 0x20000;
  v27 = (v6 & 0x20000) != 0;
  v15 = (v6 >> 25) & 1;
  v16 = (v6 & 0x40000) != 0;
  if ( (v6 & 0x40000) != 0 )
    v16 = ValidateDoubleClick((const struct tagTAP_INFO *)(v8 + 192), v33, *((_DWORD *)a3 + 4), (v6 & 2) != 0);
  if ( v16 )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 204);
  v17 = *((_QWORD *)a3 + 1);
  v30 = *((_DWORD *)a3 + 4);
  v18 = v33 + 1;
  if ( (unsigned int)v18 < 5 )
  {
    v19 = v33 + 1;
    do
    {
      EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v8 + 8 * (v18 + 2 * (v18 + 1))));
      v18 = v19 + 1;
      v19 = v18;
    }
    while ( (unsigned int)v18 < 5 );
    v6 = a2;
  }
  if ( v26 )
  {
    ProcessDownOnly(CacheById, a3, v14, v15);
  }
  else
  {
    ProcessRangeInCache(CacheById, a3, a4, v27, v14, v15);
    if ( !a4 )
    {
      v21 = SGDGetUserSessionState(v20);
      v22 = *(_DWORD *)(v21 + 16320);
      v23 = v22 | 4;
      v24 = v22 & 0xFFFFFFFB;
      if ( !v28 )
        v23 = v24;
      *(_DWORD *)(v21 + 16320) = (16 * v15) | v23 & 0xFFFFFFEF | 2;
    }
  }
  if ( v29 )
  {
    *(_WORD *)(v8 + 200) = v31;
    *(_DWORD *)(v8 + 212) = v30;
    *(_QWORD *)(v8 + 192) = gptiCurrent;
    *(_QWORD *)(v8 + 204) = v17;
    *(_DWORD *)(v8 + 216) = v14;
  }
  else if ( v6 )
  {
    *(_OWORD *)(v8 + 192) = 0LL;
    *(_OWORD *)(v8 + 208) = 0LL;
  }
  return 1LL;
}
