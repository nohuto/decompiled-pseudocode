__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  volatile signed __int32 *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(_QWORD **)(a1 + 760), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = (volatile signed __int32 *)result;
  if ( !result )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x20u) )
    {
      *a3 = 4;
      return result;
    }
    return 3221226021LL;
  }
  v7 = AMLIEvalNameSpaceObject((__int64 *)result, (__int64)&v10, 0, 0LL);
  AMLIDereferenceHandleEx(v6, v8);
  if ( v7 >= 0 )
  {
    if ( WORD1(v10) == 1 )
    {
      if ( (unsigned int)v11 < 5 )
      {
        v9 = v11 + 1;
        *a3 = v11 + 1;
        if ( v9 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 1008) & 0x800LL) == 0 )
            v9 = 4;
          *a3 = v9;
        }
      }
      else
      {
        *a3 = 0;
      }
    }
    else
    {
      v7 = -1073741436;
    }
    AMLIFreeDataBuffs((__int64)&v10);
  }
  return (unsigned int)v7;
}
