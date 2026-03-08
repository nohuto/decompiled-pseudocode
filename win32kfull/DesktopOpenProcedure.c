/*
 * XREFs of DesktopOpenProcedure @ 0x1C00D9AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopOpenProcedure(__int64 a1)
{
  _DWORD *v1; // rdi
  int v3; // eax

  v1 = *(_DWORD **)(a1 + 16);
  v3 = v1[12];
  if ( (v3 & 8) == 0
    && (*(_DWORD *)(a1 + 28) == 1 || (v3 & 0x10) != 0)
    && (!*(_WORD *)(a1 + 24)
     || (unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8))
     || (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *v1) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
