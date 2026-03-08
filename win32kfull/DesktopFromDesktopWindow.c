/*
 * XREFs of DesktopFromDesktopWindow @ 0x1C00BF0C8
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00BF460 (_GetProcessWindowStation.c)
 */

__int64 __fastcall DesktopFromDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ProcessWindowStation; // rax
  __int64 i; // rax
  __int64 v5; // rcx

  v1 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    ProcessWindowStation = GetProcessWindowStation(0LL);
    if ( ProcessWindowStation )
    {
      for ( i = *(_QWORD *)(ProcessWindowStation + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v5 = *(_QWORD *)(i + 8);
        if ( v5 && *(_QWORD *)(v5 + 24) == a1 )
          return i;
      }
    }
  }
  return v1;
}
