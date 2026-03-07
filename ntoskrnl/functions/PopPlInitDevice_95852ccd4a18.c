__int64 __fastcall PopPlInitDevice(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, UNICODE_STRING **a5)
{
  UNICODE_STRING *v5; // rbx
  int inited; // edi
  UNICODE_STRING *Pool2; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8

  v5 = 0LL;
  if ( a2 + 44 <= a4 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(64LL, 88LL, 1817210704LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      inited = PopPlInitWString(Pool2);
      if ( inited < 0 )
        goto LABEL_9;
      *(_QWORD *)&v5[1].Length = a1;
      v12 = &v5[2].MaximumLength + 1;
      v13 = 4LL;
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + a2 - (_QWORD)v5 - 32);
        ++v12;
        --v13;
      }
      while ( v13 );
      inited = PopPlInitComponents(
                 (__int64)v5,
                 (__int128 *)(a3 + *(unsigned int *)(a2 + 40)),
                 *(unsigned int *)(a2 + 36),
                 a3,
                 a4,
                 (unsigned __int64 *)&v5[4].Buffer,
                 &v5[5].Length);
      if ( inited < 0 )
      {
LABEL_9:
        ExFreePoolWithTag(v5, 0x6C506F50u);
        v5 = 0LL;
      }
    }
    else
    {
      inited = -1073741670;
    }
  }
  else
  {
    inited = -1073741306;
  }
  *a5 = v5;
  return (unsigned int)inited;
}
