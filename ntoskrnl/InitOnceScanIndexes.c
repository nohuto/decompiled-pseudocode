/*
 * XREFs of InitOnceScanIndexes @ 0x1407A16B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1407A0218 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407A029C (SdbReadWORDTag.c)
 *     SdbGetFirstChild @ 0x1407A2738 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE RunOnce, _DWORD *Parameter, PVOID *Context)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  __int64 v8; // r8
  unsigned int v9; // ebp
  unsigned int i; // eax
  unsigned int v11; // r14d
  unsigned int FirstTag; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax

  v3 = 0;
  if ( Parameter && Context )
  {
    v6 = (char *)(Parameter + 12);
    memset(Parameter + 12, 0, 0xA00uLL);
    FirstChild = SdbGetFirstChild(Parameter, 0LL);
    v9 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(Parameter, FirstChild, v8) == 30722 )
    {
      Parameter[659] = 0;
      for ( i = SdbFindFirstTag(Parameter, v9, 30723LL); ; i = SdbFindNextTag((__int64)Parameter, v9, v11) )
      {
        v11 = i;
        if ( !i )
        {
          *Context = v6;
          return 1;
        }
        if ( Parameter[659] == 64 )
          goto LABEL_20;
        FirstTag = SdbFindFirstTag(Parameter, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_20;
        LOWORD(Parameter[10 * Parameter[659] + 13]) = SdbReadWORDTag((__int64)Parameter, FirstTag, 0LL);
        v13 = SdbFindFirstTag(Parameter, v11, 14339LL);
        if ( !v13 )
          goto LABEL_20;
        HIWORD(Parameter[10 * Parameter[659] + 13]) = SdbReadWORDTag((__int64)Parameter, v13, 0LL);
        v14 = SdbFindFirstTag(Parameter, v11, 16406LL);
        Parameter[10 * Parameter[659] + 20] = v14 ? SdbReadDWORDTag((__int64)Parameter, v14, 0LL) : 0;
        v15 = SdbFindFirstTag(Parameter, v11, 38913LL);
        if ( !v15 )
          break;
        Parameter[10 * Parameter[659]++ + 12] = v15;
      }
      LOWORD(Parameter[10 * Parameter[659] + 13]) = 0;
    }
LABEL_20:
    AslLogCallPrintf(1LL);
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
