char __fastcall KiCheckRangeOverlap(unsigned __int64 *a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  char v6; // di
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  const void *v9; // rdx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r9

  v3 = *a1;
  v5 = a1[1];
  v6 = 0;
  v7 = *a2;
  v8 = v3 + v5;
  v9 = (const void *)(*a2 + a2[1]);
  if ( v3 >= (unsigned __int64)v9 || v8 <= v7 )
    return 0;
  if ( v3 < v7 )
  {
    a1[1] = v7 - v3;
    if ( v8 > (unsigned __int64)v9 )
    {
      v11 = v8 - (_QWORD)v9;
      *a3 = v9;
      a3[1] = v11;
      v6 = 1;
      DbgPrintEx(5u, 3u, "NTDUMP: New split block: Address %p Size %d\n", v9, v11);
    }
  }
  else
  {
    if ( v8 > (unsigned __int64)v9 )
    {
      *a1 = (unsigned __int64)v9;
      v10 = v8 - (_QWORD)v9;
    }
    else
    {
      v10 = 0LL;
    }
    a1[1] = v10;
  }
  DbgPrintEx(5u, 3u, "NTDUMP: After overlap check: Address %p Size %d\n", (const void *)*a1, a1[1]);
  return v6;
}
