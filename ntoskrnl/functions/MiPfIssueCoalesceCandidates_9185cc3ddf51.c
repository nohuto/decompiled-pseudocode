__int64 __fastcall MiPfIssueCoalesceCandidates(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax

  v3 = 0;
  if ( *a1 != a1[1] )
  {
    v6 = (_QWORD *)MiPfIssueCoalescedSupport();
    if ( !v6 )
    {
      v3 = -1073741670;
      goto LABEL_6;
    }
    v7 = *(_QWORD **)(a3 + 8);
    if ( *v7 == a3 )
    {
      *v6 = a3;
      v6[1] = v7;
      *v7 = v6;
      *(_QWORD *)(a3 + 8) = v6;
      goto LABEL_6;
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_6:
  while ( 1 )
  {
    v8 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      return v3;
    if ( (_QWORD *)v8[1] != a1 )
      goto LABEL_11;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_11;
    *a1 = v9;
    *(_QWORD *)(v9 + 8) = a1;
    MiIssueHardFaultIo((__int64)v8, 0, 0LL);
    v10 = *(_QWORD **)(a3 + 8);
    if ( *v10 != a3 )
      goto LABEL_11;
    *v8 = a3;
    v8[1] = v10;
    *v10 = v8;
    *(_QWORD *)(a3 + 8) = v8;
  }
}
