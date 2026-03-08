/*
 * XREFs of SshpSetBlockerActive @ 0x1402F11C8
 * Callers:
 *     SleepstudyHelper_ComponentInactive @ 0x1402F0EC0 (SleepstudyHelper_ComponentInactive.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1402F0FC0 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SshpBlockerActiveDereference @ 0x1402F102C (SshpBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x1402F1100 (SleepstudyHelperBlockerActiveReference.c)
 * Callees:
 *     SshpStopBlockerAccounting @ 0x1402F1228 (SshpStopBlockerAccounting.c)
 */

__int64 __fastcall SshpSetBlockerActive(__int64 a1, char a2)
{
  int v3; // ecx
  BOOL v4; // edi
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 != 0;
  if ( v4 != (v3 & 1) && (v3 & 2) != 0 )
    SshpStopBlockerAccounting(a1, MEMORY[0xFFFFF78000000008], 0LL);
  result = v4 | *(_DWORD *)(a1 + 8) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
