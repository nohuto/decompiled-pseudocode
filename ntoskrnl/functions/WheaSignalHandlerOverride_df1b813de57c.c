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
