__int64 __fastcall MiDisablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  int v4; // ebp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS(v2);
  if ( !(_DWORD)result )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      result = MiSnapDriverRange(a1, v4, 4, 0, (__int64)&v8, (__int64)&v9);
      v6 = v8;
      v4 = result;
      if ( v8 )
      {
        if ( v5 )
        {
          if ( v8 < v5 )
            v6 = v5;
          v8 = v6;
        }
        v7 = v9;
        if ( v6 <= v9 )
        {
          result = MiLockCode(a1, v6, v9, 2);
          v5 = v7 + 8;
        }
      }
    }
    while ( v4 );
  }
  return result;
}
