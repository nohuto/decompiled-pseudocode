/*
 * XREFs of AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0
 * Callers:
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 * Callees:
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F840 (GetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectNoLock(_BYTE *a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( a1 && *a1 )
  {
    if ( a2 )
    {
      v8 = *a2;
      if ( (*(_BYTE *)(*a2 + 64) & 4) != 0 )
        return (unsigned int)-1073741738;
    }
    else
    {
      v8 = 0LL;
    }
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(a1, v8, &v13, a4);
    if ( NameSpaceObjectNoLock >= 0 )
    {
      v10 = v13;
      if ( v13 )
      {
        dword_1C006F938 = 0;
        v11 = v13 + 120;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 128));
          v10 = v13;
        }
        *a3 = v11;
        DereferenceObjectEx(v10, v11);
      }
    }
    if ( NameSpaceObjectNoLock == 32772 )
      return 259;
    return (unsigned int)NameSpaceObjectNoLock;
  }
  return 3221225486LL;
}
