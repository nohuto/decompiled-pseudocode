/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x1404F8CAC
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F8550 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( (!a2 || (HvlpFlags & 2) != 0) && KiHypervisorInitiatedCrashDump )
  {
    v2 = 1;
    if ( a2 )
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C47620 >> 12;
      v3 = (unsigned int)dword_140C4761C;
      *(_DWORD *)(a1 + 8) |= 0x80000022;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C47610 >> 12;
      v3 = (unsigned int)dword_140C47618;
      *(_DWORD *)(a1 + 8) |= 0x80000002;
    }
    *(_QWORD *)(a1 + 24) = v3;
  }
  return v2;
}
