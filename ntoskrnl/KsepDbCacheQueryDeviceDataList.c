__int64 __fastcall KsepDbCacheQueryDeviceDataList(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 *v4; // r14
  unsigned int v5; // ebp
  __int64 *v6; // rdi
  unsigned int v9; // ebx
  __int64 *i; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 56);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 56);
  v9 = 0;
  for ( i = v6; i != v4; v9 += v11 )
  {
    v11 = *((unsigned __int16 *)i + 9);
    i = (__int64 *)*i;
  }
  if ( (unsigned __int64)v9 + 2 <= a3 )
  {
    while ( v6 != v4 )
    {
      memmove(a2, (const void *)v6[3], *((unsigned __int16 *)v6 + 9));
      v12 = *((unsigned __int16 *)v6 + 9);
      v6 = (__int64 *)*v6;
      a2 += v12;
    }
  }
  else
  {
    v5 = -1073741789;
  }
  result = v5;
  *a4 = v9 + 2;
  return result;
}
