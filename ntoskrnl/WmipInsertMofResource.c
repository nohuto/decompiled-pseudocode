__int64 __fastcall WmipInsertMofResource(__int64 a1, ULONG_PTR a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v10; // r12d
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned __int64 v13; // rax
  size_t v14; // r15
  char *Pool2; // rax
  char *v16; // rbp
  __int64 v17; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v4 = *(unsigned int *)(a1 + 64);
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8LL * v6);
      if ( v8 == a2 )
        break;
      if ( !v8 )
      {
        *(_QWORD *)(v7 + 8LL * v6) = a2;
        goto LABEL_6;
      }
      if ( ++v6 >= (unsigned int)v4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( v6 == (_DWORD)v4 )
    {
      v10 = v4 + 4;
      v17 = *(_QWORD *)(a1 + 72);
      v11 = 8 * v4;
      v12 = -1;
      if ( (unsigned __int64)(8 * v4) <= 0xFFFFFFFF )
        v12 = 8 * v4;
      v13 = 8LL * v10;
      if ( v13 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v14 = (unsigned int)v13;
      Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v13, 1885957463LL);
      v16 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memset(Pool2, 0, v14);
      memmove(v16, *(const void **)(a1 + 72), v12);
      if ( v17 != a1 + 80 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
      *(_QWORD *)(a1 + 72) = v16;
      *(_QWORD *)&v16[v11] = a2;
      *(_DWORD *)(a1 + 64) = v10;
    }
    WmipReferenceEntry(a2);
  }
  return v2;
}
