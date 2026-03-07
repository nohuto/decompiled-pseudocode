__int64 __fastcall ACPIModuleGetSpareProperties(__int64 a1, _DWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v12 = 0;
  v4 = *(_QWORD **)(a1 + 760);
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v5 = AMLIGetNamedChild(v4, 1297302623);
  if ( v5 )
  {
    if ( (int)ACPIQuerySpareDsm(a1, &v12) >= 0 && (v12 & 4) != 0 )
    {
      v6 = ACPIEvaluateSpareDsm(v5, 2u, 0LL, (__int64)&v9);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v5, v7);
      if ( v6 >= 0 )
      {
        if ( WORD1(v9) == 1 )
        {
          if ( (v10 & 1) != 0 )
            *a2 |= 1u;
          if ( (v10 & 2) != 0 )
            *a2 |= 4u;
          v6 = 0;
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
    else
    {
      v6 = -1073741637;
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)&v9);
  return (unsigned int)v6;
}
