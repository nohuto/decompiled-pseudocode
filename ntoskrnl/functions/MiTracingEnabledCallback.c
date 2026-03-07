__int64 __fastcall MiTracingEnabledCallback(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = (unsigned int)(a2 - 1);
  if ( (unsigned int)result <= 1 && (a4 & 0x20) != 0 )
    return MiLogHotPatchRundown();
  return result;
}
