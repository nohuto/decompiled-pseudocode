__int64 __fastcall MiSkipEntirePagefileRegions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r10
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(unsigned __int8 *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 80);
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 72);
  v15 = a2 + ((v8 - *(_QWORD *)(v10 + 8)) >> 3) - (v9 | (v6 << 32));
  MiLocatePagefileSubsection(v10, &v15);
  v11 = a5;
  if ( !*(_QWORD *)(a5 + 8) )
  {
    v12 = v15;
    while ( 1 )
    {
      v13 = (unsigned int)(*(_DWORD *)(v11 + 44) - v12);
      if ( v13 >= (a4 - a3) >> 3 )
        break;
      v11 = *(_QWORD *)(v11 + 16);
      a3 += 8 * v13;
      v12 = 0;
      if ( !v11 )
        break;
      if ( *(_QWORD *)(v11 + 8) )
        return a3;
    }
    return a4;
  }
  return a3;
}
