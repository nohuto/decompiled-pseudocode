/*
 * XREFs of DebugHelp @ 0x1C004D940
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  int v3; // r8d
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    strncpy_s((char *)&v6, 8uLL, a2, 8uLL);
    v3 = HIDWORD(v6);
    v4 = v6;
LABEL_5:
    PrintDebugMessage(0, v4, v3, 0, 0LL);
    return 0LL;
  }
  if ( !a3 )
  {
    v3 = 0;
    v4 = -1;
    goto LABEL_5;
  }
  return 0LL;
}
