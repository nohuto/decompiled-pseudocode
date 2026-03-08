/*
 * XREFs of InitOnceGetStringTableOffset @ 0x140798120
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE RunOnce, char *Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi
  const char *v9; // r9
  int v10; // r8d

  v3 = 0;
  if ( !Parameter )
  {
    v9 = "PDB was not supplied for InitOnceGetStringTableOffset";
    v10 = 690;
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", v10, (_DWORD)v9);
    return 0LL;
  }
  if ( !Context )
  {
    v9 = "No return context was supplied for InitOnceGetStringTableOffset";
    v10 = 696;
    goto LABEL_8;
  }
  FirstTag = SdbFindFirstTag(Parameter, 0LL, 30721LL);
  v7 = Parameter + 2632;
  *v7 = FirstTag;
  if ( FirstTag )
  {
    *Context = v7;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", 706, (unsigned int)"No stringtable in DB");
  }
  return v3;
}
