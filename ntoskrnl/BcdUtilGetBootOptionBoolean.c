/*
 * XREFs of BcdUtilGetBootOptionBoolean @ 0x140840138
 * Callers:
 *     SeAuditBootConfiguration @ 0x14083FCC8 (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140840180 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionBoolean(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BootOption; // rax
  _BYTE *v4; // r9
  __int64 result; // rax
  char v6; // cl

  if ( (a2 & 0xF000000) != 0x6000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2, a3, a3);
  if ( !BootOption )
    return 3221226021LL;
  v6 = *(_BYTE *)(*(unsigned int *)(BootOption + 4) + BootOption);
  result = 0LL;
  *v4 = v6;
  return result;
}
