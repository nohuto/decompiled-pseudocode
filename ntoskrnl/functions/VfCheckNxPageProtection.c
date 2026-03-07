__int64 __fastcall VfCheckNxPageProtection(int a1, int a2)
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPageProtection(a1, a2);
  return result;
}
