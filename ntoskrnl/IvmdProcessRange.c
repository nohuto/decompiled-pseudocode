/*
 * XREFs of IvmdProcessRange @ 0x14052F278
 * Callers:
 *     HsaProcessIvmd @ 0x14052E53C (HsaProcessIvmd.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall IvmdProcessRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r9
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = (_QWORD *)(a1 + 24);
  v16 = 0LL;
  v6 = *(_QWORD **)(a1 + 24);
  v8 = a1;
  while ( v6 != v5 )
  {
    v9 = v6[2];
    v10 = v6;
    if ( v9 > a3 )
      break;
    a1 = v6[3];
    if ( a1 >= a2 )
    {
      if ( v9 == a2 && a1 == a3 )
        return 0LL;
      v6 = (_QWORD *)*v6;
      if ( !v4 )
      {
        v4 = v10;
        v16 = v10;
        if ( v9 < a2 )
          a2 = v9;
      }
      if ( a1 >= a3 )
      {
        a3 = a1;
        break;
      }
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
  }
  if ( v4 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 == v6 )
        break;
      v13 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        goto LABEL_26;
      v14 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v14 != v15 )
        goto LABEL_26;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      --*(_DWORD *)(v8 + 20);
    }
  }
  else
  {
    if ( (int)ExtEnvAllocateMemory(a1, 0x20u, &v16) < 0 )
      return 3221225626LL;
    v12 = (_QWORD *)v6[1];
    if ( (_QWORD *)*v12 != v6 )
LABEL_26:
      __fastfail(3u);
    v4 = v16;
    *v16 = v6;
    v4[1] = v12;
    *v12 = v4;
    v6[1] = v4;
    ++*(_DWORD *)(v8 + 20);
  }
  v4[2] = a2;
  v4[3] = a3;
  return 0LL;
}
