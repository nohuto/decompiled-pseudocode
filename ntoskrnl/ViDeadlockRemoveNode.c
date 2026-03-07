_QWORD *__fastcall ViDeadlockRemoveNode(_QWORD *a1, int a2)
{
  _QWORD *v2; // r9
  __int64 *v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r11
  __int64 *v7; // rdx
  __int64 **v8; // r10
  __int64 v9; // rax
  __int64 **v10; // r10
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r11
  __int64 *v15; // rdx
  __int64 *v16; // r10
  _QWORD *v17; // r9
  __int64 v18; // rcx
  _QWORD *result; // rax

  v2 = a1;
  if ( !a2 )
  {
    v3 = a1 + 1;
    v4 = (__int64 *)a1[1];
    if ( *v2 )
    {
      while ( v4 != v3 )
      {
        v5 = *v4;
        v6 = v4 - 3;
        v7 = v4;
        v4 = (__int64 *)v5;
        if ( *(__int64 **)(v5 + 8) != v7 )
          goto LABEL_20;
        v8 = (__int64 **)v7[1];
        if ( *v8 != v7 )
          goto LABEL_20;
        *v8 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v8;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v6 + 19);
        *v6 = *v2;
        v9 = *v2 + 8LL;
        v10 = *(__int64 ***)(*v2 + 16LL);
        if ( *v10 != (__int64 *)v9 )
          goto LABEL_20;
        *v7 = v9;
        v7[1] = (__int64)v10;
        *v10 = v7;
        *(_QWORD *)(v9 + 8) = v7;
      }
      v11 = v2[3];
      if ( *(_QWORD **)(v11 + 8) != v2 + 3 || (v12 = (_QWORD *)v2[4], (_QWORD *)*v12 != v2 + 3) )
LABEL_20:
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      ViDeadlockUpdateChildrenCount(*v2, 0xFFFFFFFFLL, v11, v2);
    }
    else
    {
      while ( v4 != v3 )
      {
        v13 = *v4;
        v14 = v4 - 3;
        v15 = v4;
        v4 = (__int64 *)v13;
        if ( *(__int64 **)(v13 + 8) != v15 )
          goto LABEL_20;
        v16 = (__int64 *)v15[1];
        if ( (__int64 *)*v16 != v15 )
          goto LABEL_20;
        *v16 = v13;
        *(_QWORD *)(v13 + 8) = v16;
        *((_DWORD *)v2 + 19) += -1 - *((_DWORD *)v14 + 19);
        *v14 = 0LL;
        *v15 = 0LL;
        v14[4] = 0LL;
      }
    }
    --*(_WORD *)(v2[7] + 4LL);
  }
  v17 = v2 + 5;
  v18 = *v17;
  if ( *(_QWORD **)(*v17 + 8LL) != v17 )
    goto LABEL_20;
  result = (_QWORD *)v17[1];
  if ( (_QWORD *)*result != v17 )
    goto LABEL_20;
  *result = v18;
  *(_QWORD *)(v18 + 8) = result;
  return result;
}
