/*
 * XREFs of DesktopFromDesktopWindow @ 0x1C000E98C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00BEDE8 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C000EED0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall DesktopFromDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 ProcessWindowStation; // rax
  __int64 i; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  v3 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v3 == 669 )
  {
    ProcessWindowStation = GetProcessWindowStation(0LL, v3);
    if ( ProcessWindowStation )
    {
      for ( i = *(_QWORD *)(ProcessWindowStation + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v6 = *(_QWORD *)(i + 8);
        if ( v6 && *(_QWORD *)(v6 + 24) == a1 )
          return i;
      }
    }
  }
  return v1;
}
