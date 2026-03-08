/*
 * XREFs of EtwpFreeKeyNameList @ 0x14083D658
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14083D574 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402EF150 (RtlEnumerateGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  RTL_AVL_TABLE *i; // rbx
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
