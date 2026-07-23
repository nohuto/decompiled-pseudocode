/*
 * XREFs of InitOnceScanIndexes @ 0x1407597B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140759584 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140759638 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407596BC (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140759C60 (SdbGetFirstChild.c)
 */

__int64 __fastcall InitOnceScanIndexes(PRTL_RUN_ONCE a1, _DWORD *a2, PVOID *a3)
{
  unsigned int v3; // esi
  char *v6; // r12
  unsigned int FirstChild; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned int i; // eax
  unsigned int v12; // ebp
  unsigned int FirstTag; // eax
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // r9
  __int64 v21; // rax

  v3 = 0;
  if ( a2 && a3 )
  {
    v6 = (char *)(a2 + 12);
    memset(a2 + 12, 0, 0xA00uLL);
    FirstChild = SdbGetFirstChild(a2, 0LL);
    v10 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild, v8, v9) == 30722 )
    {
      a2[659] = 0;
      for ( i = SdbFindFirstTag(a2, v10, 30723LL); ; i = SdbFindNextTag((__int64)a2, v10, v12, v20) )
      {
        v12 = i;
        if ( !i )
        {
          *a3 = v6;
          return 1;
        }
        if ( a2[659] == 64 )
          goto LABEL_20;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_20;
        LOWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag((__int64)a2, FirstTag, 0LL, v14);
        v15 = SdbFindFirstTag(a2, v12, 14339LL);
        if ( !v15 )
          goto LABEL_20;
        HIWORD(a2[10 * a2[659] + 13]) = SdbReadWORDTag((__int64)a2, v15, 0LL, v16);
        v17 = SdbFindFirstTag(a2, v12, 16406LL);
        a2[10 * a2[659] + 20] = v17 ? SdbReadDWORDTag((__int64)a2, v17, 0LL, v18) : 0;
        v19 = SdbFindFirstTag(a2, v12, 38913LL);
        v21 = (unsigned int)a2[659];
        if ( !v19 )
          break;
        a2[10 * v21 + 12] = v19;
        ++a2[659];
      }
      LOWORD(a2[10 * v21 + 13]) = 0;
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
