__int64 __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  _QWORD **v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rax
  _QWORD *v15; // rcx
  int PfnPageSizeIndex; // eax

  MiZeroInParallel((__int64 *)a1);
  v9 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v10 = (_QWORD **)(a1 + 128);
    do
    {
      v11 = *v10;
      if ( *v10 != v10 )
      {
        do
        {
          v12 = (_QWORD *)*v11;
          if ( (v11[5] & 0x10000000000LL) != 0 )
          {
            PfnPageSizeIndex = MiGetPfnPageSizeIndex(v11, v6, v7, v8);
            v13 = PfnPageSizeIndex;
            if ( a3 )
              MiConvertEntireLargePageToSmall((__int64)v11, PfnPageSizeIndex, 0, 0, 0LL, 0LL, 0LL);
          }
          else
          {
            v13 = 3;
          }
          v14 = a2 + 24LL * v13;
          v15 = *(_QWORD **)(v14 + 8);
          if ( *v15 != v14 )
            __fastfail(3u);
          v11[1] = v15;
          *v11 = v14;
          *v15 = v11;
          *(_QWORD *)(v14 + 8) = v11;
          v11 = v12;
          ++*(_QWORD *)(v14 + 16);
        }
        while ( v12 != v10 );
      }
      v10 += 5;
      ++v9;
    }
    while ( v9 < *(_DWORD *)(a1 + 24) );
  }
  return MiDereferencePageChains(a1);
}
