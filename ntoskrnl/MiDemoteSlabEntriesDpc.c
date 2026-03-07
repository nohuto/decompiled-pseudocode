__int64 __fastcall MiDemoteSlabEntriesDpc(__int64 a1, __int64 *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // rsi
  __int64 result; // rax
  unsigned int v10; // ebx
  _DWORD *v11; // r15
  __int64 v12; // rbx
  ULONG_PTR v13; // rcx
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 i; // [rsp+20h] [rbp-60h]
  unsigned __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h]
  char *v25; // [rsp+38h] [rbp-48h]
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+C8h] [rbp+48h] BYREF
  volatile signed __int32 *v31; // [rsp+D0h] [rbp+50h]
  int j; // [rsp+D8h] [rbp+58h] BYREF

  v31 = a3;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v30 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v30);
    v8 = (_DWORD *)(a4 + 4);
  }
  else
  {
    v11 = (_DWORD *)(a4 + 4);
    v23 = 0LL;
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v7;
    v12 = *a2;
    for ( i = *a2; ; v12 = i )
    {
LABEL_11:
      v13 = a2[10];
      v29 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      if ( v13 == -1LL )
      {
        v14 = a2[9];
        if ( v14 )
        {
          LODWORD(v29) = *(_DWORD *)(v14 + 80) <= 3u;
          MiGatherSlabDemoteCandidates(v12, v14, &v26);
        }
        else
        {
          MiEnumerateSlabAllocators(
            v12,
            (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiGatherSlabDemoteCandidates,
            (__int64)&v26,
            0xFFFFFFFF);
          if ( *((_QWORD *)&v28 + 1) < 0x420uLL )
          {
            LODWORD(v29) = 1;
            MiEnumerateSlabAllocators(
              v12,
              (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiGatherSlabDemoteCandidates,
              (__int64)&v26,
              0xFFFFFFFF);
          }
        }
      }
      else
      {
        *((_QWORD *)&v28 + 1) = v13;
        v21 = MiSearchNumaNodeTable(v13);
        MiEnumerateSlabAllocators(
          v12,
          (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFindSlabEntryForDemoteByPage,
          (__int64)&v26,
          *((_DWORD *)v21 + 2));
        v8 = v11;
        if ( !(_QWORD)v26 || (*(_DWORD *)(v26 + 140) & 3) != 0 )
          goto LABEL_6;
      }
      v8 = v11;
      if ( !(_QWORD)v28 )
        goto LABEL_6;
      v25 = (char *)&v26 + 8 * v28;
      v15 = (char *)&v26;
      if ( &v26 < (__int128 *)v25 )
        break;
    }
    while ( 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
      v24 = v16;
      v17 = MiDemoteSlabEntry(i, v16);
      ++a2[8];
      v18 = v17 + v23;
      v19 = *(int *)(v16 + 80);
      v23 = v18;
      v8 = v11;
      ++a2[v19 + 1];
      if ( a2[10] != -1 )
        break;
      v20 = a2[9];
      if ( v20 && *(_DWORD *)(v20 + 80) == 6 )
      {
        if ( !(unsigned int)MiCheckMdlSlabFragmentation(v24, 1) )
          break;
      }
      else if ( v18 >= 0x420 )
      {
        break;
      }
      if ( (unsigned __int64)a2[8] >= 0x40 )
      {
        v8 = v11;
        if ( KeShouldYieldProcessor() )
          break;
      }
      v15 += 8;
      if ( v15 >= v25 )
      {
        v12 = i;
        goto LABEL_11;
      }
    }
  }
LABEL_6:
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v10 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v10 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *v8 | v10;
  }
  _InterlockedDecrement(v31);
  return result;
}
