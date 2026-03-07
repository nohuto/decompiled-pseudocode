__int64 __fastcall WmipAddProviderIdToPIList(const void **a1, _DWORD *a2, _DWORD *a3, void *a4, __int64 a5)
{
  __int64 v5; // r15
  int v6; // ebx
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v10; // r14
  void *Pool2; // rax
  void *v12; // rsi
  void *v13; // r12
  _QWORD *v14; // rbx
  _DWORD *v16; // [rsp+88h] [rbp+10h]

  v16 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = (unsigned int)*a3;
  v8 = (void *)*a1;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v10 = (unsigned int)*a3;
  if ( (unsigned __int64)(2 * v7) > 0xFFFFFFFF )
  {
    v13 = (void *)*a1;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 8LL * (unsigned int)(2 * v7), 1885957463LL);
    v12 = Pool2;
    v13 = v8;
    if ( Pool2 )
    {
      memmove(Pool2, v8, 8 * v7);
      v8 = v12;
      *a3 = 2 * v7;
      goto LABEL_7;
    }
  }
  if ( (_DWORD)v7 )
  {
    v14 = v8;
    do
    {
      WmipUnreferenceEntry(&WmipISChunkInfo, *v14++);
      --v10;
    }
    while ( v10 );
  }
  WmipUnreferenceEntry(&WmipISChunkInfo, a5);
  v12 = 0LL;
  v6 = -1073741670;
LABEL_7:
  *a1 = v12;
  if ( v13 != a4 )
    ExFreePoolWithTag(v13, 0);
  if ( v6 >= 0 )
  {
    a2 = v16;
LABEL_2:
    *((_QWORD *)v8 + v5) = a5;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}
