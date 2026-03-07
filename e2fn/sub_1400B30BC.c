void __fastcall sub_1400B30BC(char *a1, char *a2)
{
  __int64 *v3; // r8
  void *v4; // rcx
  __int64 *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64 *)(a2 + 16);
  v4 = (void *)*((_QWORD *)a1 + 1);
  v5 = (__int64 *)(a2 + 24);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  if ( a1 != a2 )
  {
    *((_QWORD *)a1 + 1) = *((_QWORD *)a2 + 1);
    v8 = *v3;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a1 + 2) = v8;
    v9 = *v5;
    *v3 = 0LL;
    *((_QWORD *)a1 + 3) = v9;
    *v5 = 0LL;
  }
  if ( a2 == &v10 )
  {
    if ( v4 )
      ExFreePool(v4);
  }
  else
  {
    *((_QWORD *)a2 + 1) = v4;
    *v3 = v6;
    *v5 = v7;
  }
}
