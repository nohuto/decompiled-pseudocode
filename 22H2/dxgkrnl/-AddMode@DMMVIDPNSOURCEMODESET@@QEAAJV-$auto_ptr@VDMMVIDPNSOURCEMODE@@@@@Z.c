/*
 * XREFs of ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C011AA60
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C011A810 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C000C954 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004D440 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AddMode(_QWORD *a1, unsigned int **a2)
{
  unsigned int *v2; // rdi
  _QWORD *v4; // rbp
  _QWORD *v5; // r9
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  v2 = *a2;
  v4 = a1;
  if ( !*a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
    v2 = *a2;
  }
  v5 = (_QWORD *)v4[6];
  v6 = v4 + 6;
  v7 = v2[6];
  v8 = 0LL;
  if ( v5 != v4 + 6 )
    v8 = (__int64)(v5 - 1);
  if ( !v8 )
  {
LABEL_10:
    v9 = 0LL;
    if ( v5 != v4 + 6 )
      v9 = v5 - 1;
    if ( !v9 )
    {
LABEL_19:
      v12 = (_QWORD *)*v6;
      v13 = 0LL;
      v14 = *v6 - 8LL;
      if ( (_QWORD *)*v6 != v6 )
        v13 = *v6 - 8LL;
      if ( !v13 )
        goto LABEL_27;
      do
      {
        if ( (unsigned int *)v13 == v2 )
          break;
        v14 = *(_QWORD *)(v13 + 8);
        v13 = v14 - 8;
        if ( (_QWORD *)v14 == v6 )
          v13 = 0LL;
      }
      while ( v13 );
      if ( v13 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v14, v12);
        *(_QWORD *)(v26 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v26);
      }
      else
      {
LABEL_27:
        v15 = (_QWORD *)v4[7];
        v16 = v2 + 2;
        if ( (_QWORD *)*v15 != v6 )
          __fastfail(3u);
        *v16 = v6;
        v16[1] = v15;
        *v15 = v16;
        v4[7] = v16;
        ++v4[8];
      }
      v17 = (__int64)(*a2 + 8);
      if ( v4 )
      {
        if ( *((_QWORD *)*a2 + 5) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v14, v12);
          WdLogEvent5_WdAssertion(v28);
        }
        *(_QWORD *)(v17 + 8) = v4;
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v14, v12);
        *(_QWORD *)(v27 + 24) = v17;
        *(_QWORD *)(v27 + 32) = *(_QWORD *)(v17 + 8);
        WdLogEvent5_WdError(v27);
      }
      *a2 = 0LL;
      return 0LL;
    }
    while ( 1 )
    {
      v10 = *((_DWORD *)v9 + 18);
      if ( v10 != v2[18] )
        goto LABEL_16;
      if ( v10 != 1 )
      {
        if ( v10 == 2 )
        {
          a1 = (_QWORD *)*((unsigned int *)v9 + 19);
          if ( (_DWORD)a1 == v2[19] )
            goto LABEL_50;
          goto LABEL_16;
        }
        if ( v10 <= 2 || v10 > 4 )
        {
          if ( (unsigned int)(v10 - 3) <= 1 )
          {
            v21 = WdLogNewEntry5_WdAssertion(a1, v7);
            WdLogEvent5_WdAssertion(v21);
          }
          goto LABEL_16;
        }
      }
      if ( *((_DWORD *)v9 + 19) == v2[19]
        && *((_DWORD *)v9 + 20) == v2[20]
        && *((_DWORD *)v9 + 21) == v2[21]
        && *((_DWORD *)v9 + 22) == v2[22]
        && *((_DWORD *)v9 + 23) == v2[23]
        && *((_DWORD *)v9 + 24) == v2[24]
        && *((_DWORD *)v9 + 25) == v2[25]
        && *((_DWORD *)v9 + 26) == v2[26] )
      {
LABEL_50:
        v20 = 1;
        goto LABEL_51;
      }
LABEL_16:
      v11 = (_QWORD *)v9[1];
      v9 = v11 - 1;
      if ( v11 == v4 + 6 )
        v9 = 0LL;
      if ( !v9 )
        goto LABEL_19;
    }
  }
  while ( *(_DWORD *)(v8 + 24) != (_DWORD)v7 )
  {
    a1 = *(_QWORD **)(v8 + 8);
    v8 = (__int64)(a1 - 1);
    if ( a1 == v4 + 6 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_10;
  }
  v20 = 2 - DMMVIDPNSOURCEMODE::operator==(v8, (__int64)v2);
LABEL_51:
  v22 = (unsigned int)(v20 - 1);
  if ( (_DWORD)v22 )
  {
    if ( (_DWORD)v22 == 1 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v7);
      v24[3] = (*a2)[6];
      v24[4] = *a2;
      v24[5] = v4;
      WdLogEvent5_WdError(v24);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
      return 3223192356LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v22, v7);
      WdLogEvent5_WdError(v23);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
      return 3221225473LL;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdTrace(v22, v7);
    *(_QWORD *)(v25 + 24) = *a2;
    *(_QWORD *)(v25 + 32) = v4;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192340LL;
  }
}
