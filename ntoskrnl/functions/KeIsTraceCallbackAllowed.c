__int64 __fastcall KeIsTraceCallbackAllowed(char a1)
{
  unsigned int v1; // r8d
  unsigned __int64 SecureHandle; // rax

  v1 = 0;
  if ( (KiDynamicTraceEnabled & 2) != 0 )
    return 1LL;
  if ( (KiDynamicTraceEnabled & 1) == 0 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  SecureHandle = KeGetCurrentThread()->Process->SecureState.SecureHandle;
  if ( (SecureHandle & 1) != 0 )
    return 0LL;
  LOBYTE(v1) = SecureHandle == 0;
  return v1;
}
