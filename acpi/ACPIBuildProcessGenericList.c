__int64 __fastcall ACPIBuildProcessGenericList(volatile signed __int32 **a1, __int64 a2, unsigned __int16 a3)
{
  volatile signed __int32 *v3; // rdi
  char v6; // si
  unsigned __int32 v7; // r12d
  volatile signed __int32 *v8; // rbp
  unsigned __int32 v9; // eax
  void (__fastcall *v10)(volatile signed __int32 *); // rdx
  signed __int32 v11; // ebx

  v3 = *a1;
  v6 = 1;
  if ( *a1 != (volatile signed __int32 *)a1 )
  {
    v7 = a3;
    do
    {
      v8 = *(volatile signed __int32 **)v3;
      v9 = _InterlockedCompareExchange(v3 + 6, 1, 1);
      if ( v9 >= v7 )
        KeBugCheckEx(0xA3u, 1uLL, 0x102124uLL, 0LL, 0LL);
      v10 = *(void (__fastcall **)(volatile signed __int32 *))(a2 + 8LL * v9);
      if ( v10 )
      {
        if ( v9 != 2 )
          *((_DWORD *)v3 + 7) = v9;
        v11 = _InterlockedCompareExchange(v3 + 6, 1, v9);
        v10(v3);
        if ( (v11 & 0xFFFFFFFD) != 0 )
          continue;
      }
      else
      {
        v6 = 0;
      }
      v3 = v8;
    }
    while ( v3 != (volatile signed __int32 *)a1 );
  }
  return v6 == 0 ? 0x103 : 0;
}
