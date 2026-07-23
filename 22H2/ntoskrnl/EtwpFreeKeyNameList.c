/*
 * XREFs of EtwpFreeKeyNameList @ 0x140797070
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140795E44 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140796F8C (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x140323010 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
