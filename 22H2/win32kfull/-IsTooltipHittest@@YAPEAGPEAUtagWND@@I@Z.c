/*
 * XREFs of ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0030620
 * Callers:
 *     xxxTrackMouseMove @ 0x1C002D520 (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall IsTooltipHittest(struct tagWND *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned __int16 *result; // rax
  __int64 v10; // rdx
  bool v11; // zf
  void *v12; // rcx
  __int64 v13; // rdx

  v2 = a2 - 2;
  if ( !v2 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 8) == 0 )
      return 0LL;
    return (unsigned __int16 *)&gszCAPTIONTOOLTIP;
  }
  v3 = v2 - 6;
  if ( !v3 )
  {
    v13 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v13 + 30) & 2) == 0 )
      return 0LL;
    v11 = (*(_BYTE *)(v13 + 31) & 0x20) == 0;
    v12 = &gszMIN;
    result = (unsigned __int16 *)&gszRESUP;
LABEL_18:
    if ( v11 )
      return (unsigned __int16 *)v12;
    return result;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 30) & 1) == 0 )
      return 0LL;
    v11 = (*(_BYTE *)(v10 + 31) & 1) == 0;
    v12 = &gszMAX;
    result = (unsigned __int16 *)&gszRESDOWN;
    goto LABEL_18;
  }
  v5 = v4 - 11;
  if ( !v5 )
    return (unsigned __int16 *)&gszSCLOSE;
  v6 = v5 - 1;
  if ( !v6 )
    return (unsigned __int16 *)&gszHELP;
  v7 = v6 - 45;
  if ( !v7 )
    return (unsigned __int16 *)&gszRESDOWN;
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return 0LL;
    return (unsigned __int16 *)&gszSCLOSE;
  }
  return (unsigned __int16 *)&gszMIN;
}
