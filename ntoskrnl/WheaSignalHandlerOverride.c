/*
 * XREFs of WheaSignalHandlerOverride @ 0x1403B1140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall WheaSignalHandlerOverride(unsigned int a1, __int64 a2)
{
  char v2; // r8
  __int64 (__fastcall *v3)(__int64); // rax

  v2 = 0;
  if ( a1 <= 0x12 )
  {
    v3 = (__int64 (__fastcall *)(__int64))WheapOverrideHandler[a1];
    if ( v3 )
      return v3(a2);
  }
  return v2;
}
