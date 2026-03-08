/*
 * XREFs of BcdUtilGetBootOptionString @ 0x14083FC4C
 * Callers:
 *     SeAuditBootConfiguration @ 0x14083FCC8 (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140840180 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BootOption; // rax
  __int64 v4; // r9
  __int16 v6; // ax

  if ( (a2 & 0xF000000) != 0x2000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2, a3, a3);
  if ( !BootOption )
    return 3221226021LL;
  *(_QWORD *)(v4 + 8) = BootOption + *(unsigned int *)(BootOption + 4);
  v6 = *(_WORD *)(BootOption + 8);
  *(_WORD *)v4 = v6;
  *(_WORD *)(v4 + 2) = v6;
  return 0LL;
}
