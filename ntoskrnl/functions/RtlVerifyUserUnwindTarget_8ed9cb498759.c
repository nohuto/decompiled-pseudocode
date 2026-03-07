__int64 __fastcall RtlVerifyUserUnwindTarget(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned __int64 v11; // rax
  char *v12; // r10
  rsize_t v13; // r8
  rsize_t v14; // rax
  unsigned int v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  char *v18; // [rsp+48h] [rbp-20h]
  rsize_t v19; // [rsp+50h] [rbp-18h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  Key = 0;
  result = RtlGetImageBaseAndLoadConfig(a1, &v16, (__int64 *)&v17);
  if ( (int)result >= 0 )
  {
    v7 = v17;
    if ( a3 )
    {
      *(_BYTE *)(a3 + 16) = 1;
      *(_QWORD *)a3 = v16;
      *(_QWORD *)(a3 + 8) = v7;
    }
    if ( v16 )
    {
      v8 = 0x10000;
      if ( a2 != 2 )
        v8 = 0x400000;
      v9 = 192LL;
      if ( a2 != 2 )
        v9 = 280LL;
      v10 = v9;
      v11 = v7 + v9;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( !v7 || *(_DWORD *)v7 < v10 || (v8 & *(_DWORD *)(v7 + 144)) == 0 )
        return 0LL;
      if ( a2 == 2 )
      {
        v12 = *(char **)(v7 + 176);
        v18 = v12;
        v13 = *(_QWORD *)(v7 + 184);
        v19 = v13;
        if ( v13 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      else
      {
        v12 = *(char **)(v7 + 264);
        v18 = v12;
        if ( (unsigned __int64)v12 <= v16 )
          return 0LL;
        v13 = *(_QWORD *)(v7 + 272);
        v19 = v13;
        if ( v13 >= 0xFFFFFFFF )
          return 3221225621LL;
      }
      if ( v13 )
      {
        Key = a1 - v16;
        v15 = (*(_DWORD *)(v7 + 144) >> 28) + 4;
        if ( v13 > 0xFFFFFFFFFFFFFFFFuLL / v15 )
          return 3221225621LL;
        v14 = v13 * v15;
        if ( v14 && ((unsigned __int64)&v12[v14] > 0x7FFFFFFF0000LL || &v12[v14] < v12) )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( bsearch_s(&Key, v12, v13, v15, (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare, 0LL) )
          return 0LL;
      }
    }
    if ( a2 )
      return 3221227018LL;
    else
      return (unsigned __int8)RtlpFindDynamicEHContinuationTarget(a1) == 0 ? 0xC000060A : 0;
  }
  return result;
}
