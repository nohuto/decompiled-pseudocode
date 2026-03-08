/*
 * XREFs of BcdUtilGetBootOptionInteger @ 0x14083FC8C
 * Callers:
 *     SeAuditBootConfiguration @ 0x14083FCC8 (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140840180 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionInteger(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 BootOption; // rax
  _QWORD *v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  if ( (a2 & 0xF000000) != 0x5000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2, a3, a4);
  if ( !BootOption )
    return 3221226021LL;
  v7 = *(_QWORD *)(*(unsigned int *)(BootOption + 4) + BootOption);
  result = 0LL;
  *v5 = v7;
  return result;
}
