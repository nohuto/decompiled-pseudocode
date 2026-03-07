void __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // ebp
  __int64 v5; // r12
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r14
  int v11; // ebp
  __int64 *v12; // r15
  int v13; // ecx
  int v14; // r8d
  __int64 *v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  __int64 PageChains; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // r9
  char v24; // [rsp+20h] [rbp-A8h]
  char v25; // [rsp+40h] [rbp-88h]
  __int64 *v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+58h] [rbp-70h] BYREF
  __int64 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+78h] [rbp-50h]
  _QWORD *v34; // [rsp+D8h] [rbp+10h]
  __int64 v35; // [rsp+E0h] [rbp+18h]
  unsigned int v36; // [rsp+E8h] [rbp+20h]

  v35 = a3;
  v34 = a2;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 80);
  v7 = a2;
  v25 = v4;
  v36 = v6;
  v32 = v3;
  v27 = 0LL;
  v26 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  if ( !a3 )
    return;
  v8 = 0xAAAAAAAAAAAAAAABuLL;
  do
  {
    v9 = 48LL * *v7 - 0x220000000000LL;
    if ( !v3 )
      goto LABEL_11;
    v10 = v3;
    v11 = v4 & 1;
    v12 = v26;
    do
    {
      if ( v11
        || (*(_DWORD *)(v9 + 16) & 0x3E0LL) == 0
        && ((v13 = *(unsigned __int8 *)(v9 + 34) >> 6, v13 == v6)
         || ((unsigned __int8)((1 << v13) | (1 << v6)) & (unsigned __int8)byte_140C65818) == 0) )
      {
        v14 = 0;
        if ( *(unsigned __int8 *)(v9 + 34) >> 6 == v6 )
          goto LABEL_9;
      }
      else
      {
        if ( !v12 )
        {
          v16 = 1;
          if ( (v25 & 8) != 0 )
            v16 = 5;
          v17 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v9 + 0x220000000000LL) >> 4));
          PageChains = MiCreatePageChains(*(_QWORD *)a1, *(unsigned int *)(v17 + 8), v36);
          v12 = (__int64 *)PageChains;
          if ( !PageChains )
          {
            v21 = *(unsigned __int8 *)(v9 + 34);
            LOBYTE(v21) = v21 & 0xC0;
            if ( (_BYTE)v21 == 0xC0 )
            {
              v22 = MiPfnBestZeroAttribute(v9, v36, v19);
              MiChangePageAttribute(v9, v22, 0LL, v23);
            }
            v24 = v16;
            v6 = v36;
            MiZeroAndConvertPage(v21, v9, 3, v36, v24);
            goto LABEL_21;
          }
          *(_DWORD *)(PageChains + 16) = v16;
          v6 = v36;
        }
        MiInsertMdlPageNeedsZero(v12, v9, 1LL, v8);
        ++v27;
        v14 = 1;
      }
      MiUpdateCacheAttributeListsForPage(v9, v6, v14, (unsigned int)&v29, (__int64)&v30, (__int64)&v28, (__int64)&v31);
LABEL_21:
      v8 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_9:
      v9 += 48LL;
      --v10;
    }
    while ( v10 );
    v5 = v35;
    v3 = v32;
    LOBYTE(v4) = v25;
    v26 = v12;
    v7 = v34;
LABEL_11:
    ++v7;
    --v5;
    v34 = v7;
    v35 = v5;
  }
  while ( v5 );
  if ( v28 )
    MiChangePageAttributeBatch(v28, v6, 0LL);
  if ( v27 )
  {
    v20 = v29;
    if ( v29 )
      MiChangePageAttributeBatch(v29, 1u, -1LL);
    v15 = v26;
    MiZeroInParallel(v26);
    if ( v20 )
      MiChangePageAttributeBatch(v20, 3u, 0LL);
    if ( v30 )
      MiChangePageAttributeBatch(v30, 3u, 0LL);
    if ( v31 )
      MiChangePageAttributeBatch(v31, v6, 0LL);
  }
  else
  {
    v15 = v26;
  }
  if ( v15 )
    MiDereferencePageChains(v15);
}
