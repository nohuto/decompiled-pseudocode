/*
 * XREFs of ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0016D40
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 */

unsigned __int16 *__fastcall IsTooltipHittest(struct tagWND *a1, int a2, unsigned int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned __int16 *result; // rax
  __int64 v11; // r9
  bool v12; // zf
  void *v13; // rcx
  __int64 v14; // rdx

  v3 = a2 - 2;
  if ( !v3 )
    return (unsigned __int16 *)((unsigned __int64)&gszCAPTIONTOOLTIP & -(__int64)((*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 8) != 0));
  v4 = v3 - 6;
  if ( !v4 )
  {
    v14 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v14 + 30) & 2) == 0 )
      return 0LL;
    v12 = (*(_BYTE *)(v14 + 31) & 0x20) == 0;
    v13 = &gszMIN;
    result = (unsigned __int16 *)&gszRESUP;
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 1) == 0
      || ShellWindowManagement::BehaviorEnabled(
           *((ShellWindowManagement **)a1 + 3),
           (const struct tagDESKTOP *)0x100,
           a3) )
    {
      return 0LL;
    }
    v12 = (*(_BYTE *)(v11 + 31) & 1) == 0;
    v13 = &gszMAX;
    result = (unsigned __int16 *)&gszRESDOWN;
LABEL_19:
    if ( v12 )
      return (unsigned __int16 *)v13;
    return result;
  }
  v6 = v5 - 11;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return (unsigned __int16 *)&gszHELP;
    v8 = v7 - 45;
    if ( !v8 )
      return (unsigned __int16 *)&gszRESDOWN;
    v9 = v8 - 1;
    if ( !v9 )
      return (unsigned __int16 *)&gszMIN;
    if ( v9 != 1 )
      return 0LL;
  }
  return (unsigned __int16 *)&gszSCLOSE;
}
