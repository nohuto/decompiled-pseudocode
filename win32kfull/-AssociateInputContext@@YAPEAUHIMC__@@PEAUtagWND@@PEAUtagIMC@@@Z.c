struct HIMC__ *__fastcall AssociateInputContext(struct tagWND *a1, struct tagIMC *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = *(_QWORD *)(v2 + 208);
  if ( a2 )
    v3 = *(_QWORD *)a2;
  *(_QWORD *)(v2 + 208) = v3;
  return (struct HIMC__ *)v4;
}
