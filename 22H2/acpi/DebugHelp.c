/*
 * XREFs of DebugHelp @ 0x1C0065F70
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  const void *v3; // r8
  __int64 v4; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    strncpy_s((char *)&v6, 8uLL, a2, 8uLL);
    v3 = (const void *)HIDWORD(v6);
    v4 = (unsigned int)v6;
LABEL_5:
    PrintDebugMessage(0, (const void *)v4, v3, 0LL, 0LL);
    return 0LL;
  }
  if ( !a3 )
  {
    v3 = 0LL;
    v4 = -1LL;
    goto LABEL_5;
  }
  return 0LL;
}
