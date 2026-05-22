/*
 * XREFs of ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180018300
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800180E0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B84B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x1800B9550 (-ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z.c)
 * Callees:
 *     <none>
 */

struct IInputTarget *__fastcall DWMInputRouter::GetInputHostTargetForProcessId(DWMInputRouter *this, int a2)
{
  __int64 **v2; // r8
  __int64 *i; // rax

  v2 = (__int64 **)*((_QWORD *)this + 11);
  for ( i = *v2; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v2 )
      return 0LL;
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  return (struct IInputTarget *)i[7];
}
