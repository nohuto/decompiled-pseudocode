__int64 __fastcall VslAllocatePool(unsigned __int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v7; // ebx
  struct _MDL *Pool2; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // ebx

  v7 = a1;
  if ( a1 > 0x1FA000 )
    return 3221225659LL;
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, a1, a2);
  if ( !Pool2 )
    return 3221225626LL;
  v10 = ExAllocatePool2(64LL, 72LL, 1416850774LL);
  v11 = (_QWORD *)v10;
  if ( !v10 )
  {
    v12 = -1073741670;
LABEL_9:
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v12;
  }
  v12 = VslpLockPagesForTransfer(v10, Pool2, v7, 1, 0);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_9;
  }
  *a3 = v11[7];
  *a4 = *v11;
  *a5 = v11;
  return 0LL;
}
