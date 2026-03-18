/*
 * XREFs of ApiSetEditionCloseWindowStationEntryPoint @ 0x1C00B7C74
 * Callers:
 *     NtUserCloseWindowStation @ 0x1C00B7C10 (NtUserCloseWindowStation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCloseWindowStationEntryPoint(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0295398 && (int)qword_1C0295398() >= 0 )
  {
    if ( qword_1C02953A0 )
      return (unsigned int)qword_1C02953A0(a1);
    else
      return (unsigned int)-1073741637;
  }
  return v1;
}
