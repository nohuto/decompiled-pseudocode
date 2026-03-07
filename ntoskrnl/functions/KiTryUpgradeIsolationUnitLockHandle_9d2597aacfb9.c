char __fastcall KiTryUpgradeIsolationUnitLockHandle(int *a1, int a2)
{
  char v2; // bl
  int v3; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 *v7; // rbp
  unsigned int v8; // edi
  unsigned __int8 *v9; // rax
  unsigned int v10; // esi
  __int64 *v11; // r10
  unsigned __int8 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *a1;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = v4;
  v7 = 0LL;
  v8 = 0;
  if ( (v3 & 1) != 0 )
  {
    v9 = *(unsigned __int8 **)(v4 + 34904);
    v10 = *v9;
    v11 = (__int64 *)(v9 + 8);
  }
  else
  {
    v11 = (__int64 *)&v18;
    v10 = 1;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = *(unsigned __int8 **)(v4 + 34904);
      v8 = *v12;
      v7 = (unsigned __int64 *)(v12 + 8);
    }
  }
  else
  {
    v7 = &v18;
    v8 = 1;
  }
  v13 = *v11;
  LODWORD(v14) = 0;
  v15 = 0LL;
  if ( v8 )
  {
    v16 = v7;
    do
    {
      if ( *v16 == v13 )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (_DWORD)v14 == v10 )
          v13 = -1LL;
        else
          v13 = v11[v14];
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)(*v16 + 48), 0LL) )
      {
        KzReleaseAdditionalPrcbLocks(v7, v15, v11, v10);
        return v2;
      }
      v15 = (unsigned int)(v15 + 1);
      ++v16;
    }
    while ( (unsigned int)v15 < v8 );
  }
  v2 = 1;
  *(_QWORD *)a1 ^= (*a1 ^ a2) & 1;
  return v2;
}
