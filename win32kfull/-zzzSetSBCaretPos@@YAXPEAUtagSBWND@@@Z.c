void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v1; // r8d
  int *v2; // rax
  int *v3; // rcx
  int v4; // edx
  int v5; // edx

  if ( *(_QWORD *)a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
  {
    v1 = *((_DWORD *)a1 + 2);
    v2 = (int *)((char *)a1 + 40);
    v3 = (int *)((char *)a1 + 68);
    if ( v1 )
      v4 = *v3;
    else
      v4 = *v2;
    v5 = v4 + 2;
    if ( !v1 )
      v2 = v3;
    zzzSetCaretPos(*v2 + 2, v5);
  }
}
