/*
 * XREFs of NtUserGetObjectInformation @ 0x1C00A7AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserGetObjectInformation(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx

  v5 = 0;
  if ( qword_1C02953A8 && (int)qword_1C02953A8() >= 0 && qword_1C02953B0 )
    return (int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64))qword_1C02953B0)(a1, a2, a3, a4, a5);
  return v5;
}
