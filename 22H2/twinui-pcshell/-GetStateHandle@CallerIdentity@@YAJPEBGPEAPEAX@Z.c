/*
 * XREFs of ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1804DA248
 * Callers:
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x180204E04 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetStateHandle(CallerIdentity *this, unsigned __int16 *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  v4 = OpenStateExplicit(-6LL, this);
  v5 = 0;
  *(_QWORD *)a2 = v4;
  if ( !v4 )
    return (unsigned int)ResultFromKnownLastError();
  return v5;
}
