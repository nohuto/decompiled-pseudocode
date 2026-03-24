/*
 * XREFs of SrbAssignCommandId @ 0x1C001CAA4
 * Callers:
 *     ProcessMultipleCommandsInSpecificQueue @ 0x1C001C584 (ProcessMultipleCommandsInSpecificQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall SrbAssignCommandId(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v5; // r8
  unsigned __int16 *v6; // r10
  unsigned __int16 *v7; // r11
  unsigned __int16 *v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  int v14; // edx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // dx
  char result; // al

  if ( a3 )
  {
    v10 = a3;
    v5 = *(_WORD *)(a1 + 286);
    v11 = 136 * v10;
    v12 = *(_QWORD *)(a1 + 776);
    v6 = (unsigned __int16 *)(v11 + v12 - 92);
    v7 = (unsigned __int16 *)(v11 + v12 - 88);
    v9 = (_QWORD *)(v11 + v12 - 104);
    v8 = (unsigned __int16 *)(v11 + v12 - 90);
  }
  else
  {
    v5 = *(_WORD *)(a1 + 284);
    v6 = (unsigned __int16 *)(a1 + 340);
    v7 = (unsigned __int16 *)(a1 + 344);
    v8 = (unsigned __int16 *)(a1 + 342);
    v9 = (_QWORD *)(a1 + 328);
  }
  v13 = *v6;
  v14 = *v8;
  if ( v14 == v13 + 1 || !(_WORD)v14 && v13 == v5 - 1 )
    return 0;
  *v6 = v13 + 1;
  if ( (_WORD)v13 + 1 == v5 )
    *v6 = 0;
  v15 = *v7;
  if ( *v7 < v5 )
  {
    do
    {
      v16 = v15 + 1;
      if ( !*(_QWORD *)(*v9 + 16LL * v15) )
        goto LABEL_19;
      ++v15;
    }
    while ( v16 < v5 );
  }
  v15 = 0;
  if ( !*v7 )
  {
LABEL_15:
    if ( *v6 )
      v5 = *v6;
    *v6 = v5 - 1;
    return 0;
  }
  while ( 1 )
  {
    v16 = v15 + 1;
    if ( !*(_QWORD *)(*v9 + 16LL * v15) )
      break;
    ++v15;
    if ( v16 >= *v7 )
      goto LABEL_15;
  }
LABEL_19:
  *v7 = v16;
  if ( v16 == v5 )
    *v7 = 0;
  *(_WORD *)(a2 + 4248) = v13;
  result = 1;
  *(_WORD *)(a2 + 4246) = v15;
  return result;
}
