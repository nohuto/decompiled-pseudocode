__int64 __fastcall EnableDisableCMOSRegions(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rbx
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // r14d
  int v9; // eax
  _QWORD v11[10]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  for ( i = AMLIGetFirstChild(a1); i; i = AMLIIterateSiblingsNext(i) )
  {
    v5 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v5 == 6 )
    {
      LOBYTE(v3) = 1;
      v9 = EnableDisableCMOSRegions(i, v3);
      if ( v9 < 0 )
        v2 = v9;
    }
    else if ( v5 == 10 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)i + 96LL);
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 12) == 5 )
        {
          if ( (unsigned __int8)AMLIIsNamedChildPresent(a1, 1145653343LL) )
          {
            v7 = AMLIGetNamedChild(a1, 1195725407LL);
            if ( v7 )
            {
              memset(v11, 0, sizeof(v11));
              WORD1(v11[0]) = 1;
              v11[2] = 5LL;
              WORD1(v11[5]) = 1;
              v11[7] = 1LL;
              v8 = AMLIAsyncEvalObject(v7, 0, 2, (unsigned int)v11, 0LL, 0LL);
              AMLIDereferenceHandleEx(v7);
              if ( v8 < 0 )
                v2 = v8;
            }
          }
        }
      }
    }
  }
  return v2;
}
