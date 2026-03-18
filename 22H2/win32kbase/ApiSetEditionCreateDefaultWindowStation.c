/*
 * XREFs of ApiSetEditionCreateDefaultWindowStation @ 0x1C00AEB44
 * Callers:
 *     InitCreateObjectDirectory @ 0x1C02DD408 (InitCreateObjectDirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionCreateDefaultWindowStation()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02958E0 && (int)qword_1C02958E0() >= 0 )
  {
    if ( qword_1C02958E8 )
      return (unsigned int)qword_1C02958E8();
    else
      return (unsigned int)-1073741637;
  }
  return v0;
}
