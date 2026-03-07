char __fastcall EvictAllocationCallback(_BYTE *a1, _QWORD *a2)
{
  char v2; // bl
  struct _KTHREAD **v5; // rbp
  _QWORD **v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *i; // r8
  _QWORD *v9; // r10
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r10
  char result; // al

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( *(_DWORD *)(a2[67] + 12LL) || (*(_DWORD *)a2[67] & 0x20000) != 0 || (*((_DWORD *)a2 + 17) & 0x100) != 0 )
  {
    if ( a2[15] )
    {
      WdLogSingleEntry1(3LL, a2);
      result = 0;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !a2[15] )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  v5 = (struct _KTHREAD **)(a2 + 37);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 37));
  v6 = (_QWORD **)(a2 + 34);
  v7 = *v6;
LABEL_18:
  if ( v7 == v6 )
  {
    v2 = 1;
  }
  else
  {
    for ( i = (_QWORD *)*(v7 - 2); ; i = (_QWORD *)*i )
    {
      if ( i == v7 - 2 )
      {
        v7 = (_QWORD *)*v7;
        goto LABEL_18;
      }
      v9 = (_QWORD *)*(i - 4);
      if ( !v9[3] || (*(_DWORD *)(v9[1] + 96LL) & 2) != 0 )
        break;
      v10 = v9 + 24;
      if ( !v9[24] )
      {
        v11 = *(_QWORD *)a1;
        v12 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v12 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v10 = v11;
        v10[1] = v12;
        *v12 = v10;
        *(_QWORD *)(v11 + 8) = v10;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(v5);
  return v2;
}
