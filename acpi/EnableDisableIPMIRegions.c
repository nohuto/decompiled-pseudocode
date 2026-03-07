__int64 __fastcall EnableDisableIPMIRegions(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  volatile signed __int32 *i; // rbx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // r14d
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v14[10]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a2;
  v4 = 0;
  for ( i = AMLIGetFirstChild(a1); i; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(i) )
  {
    v7 = *(_WORD *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v2;
      v12 = EnableDisableIPMIRegions(i, v6);
      if ( v12 < 0 )
        v4 = v12;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(i) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v14, 0, sizeof(v14));
            WORD1(v14[0]) = 1;
            v14[2] = 7LL;
            WORD1(v14[5]) = 1;
            v14[7] = v2;
            v10 = AMLIAsyncEvalObject(v9, 0LL, 2, v14, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v11);
            if ( v10 < 0 )
              v4 = v10;
          }
        }
      }
    }
  }
  return v4;
}
