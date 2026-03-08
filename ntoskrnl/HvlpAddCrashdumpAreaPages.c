/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x140545848
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x140545098 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  if ( a2 && (HvlpFlags & 2) == 0 || !KiHypervisorInitiatedCrashDump )
    return 0;
  v2 = 1;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C5F020 >> 12;
    v3 = (unsigned int)dword_140C5F01C;
    *(_DWORD *)(a1 + 8) |= 0x80000022;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C5F010 >> 12;
    v3 = (unsigned int)dword_140C5F018;
    *(_DWORD *)(a1 + 8) |= 0x80000002;
  }
  *(_QWORD *)(a1 + 24) = v3;
  return v2;
}
