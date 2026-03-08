/*
 * XREFs of NtGdiAddInitialFonts @ 0x1C00B7D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B842C (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall NtGdiAddInitialFonts(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    return 3221225506LL;
  *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(gpepCSRSS) + 32) + 23512LL) = KeGetCurrentThread();
  v3 = !UmfdHostLifeTimeManager::AddInitialFonts() ? 0xC0000017 : 0;
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 32);
  result = v3;
  *(_QWORD *)(v5 + 23512) = KeGetCurrentThread();
  return result;
}
