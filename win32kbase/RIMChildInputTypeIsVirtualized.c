char __fastcall RIMChildInputTypeIsVirtualized(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v7; // rax
  _DWORD *v8; // rdx

  if ( (unsigned __int8)isChildPartition() )
  {
    v7 = (_DWORD *)(SGDGetUserSessionState(v3, v2, v4, v5) + 468);
    v8 = v7 + 10;
    while ( v7 != v8 )
    {
      if ( (a1 & v7[1]) != 0 && *v7 )
        return 1;
      v7 += 2;
    }
  }
  return 0;
}
