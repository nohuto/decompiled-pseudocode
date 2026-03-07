__int64 __fastcall PnpProcessAssignResourcesWorker(__int64 *a1, _DWORD *a2)
{
  __int64 *i; // rbx
  __int64 *v5; // rax
  int v6; // eax

  for ( i = a1; ; i = v5 )
  {
    if ( *a2 )
    {
      if ( (*((_DWORD *)i + 99) & 0x2000) != 0 )
      {
        v6 = *((_DWORD *)i + 101);
        if ( v6 == 12 || v6 == 33 || v6 == 36 )
          PipClearDevNodeProblem(i);
      }
    }
    if ( (*((_DWORD *)i + 99) & 0x6000) == 0 && *((_DWORD *)i + 75) == 773 )
      *(_QWORD *)&a2[2 * a2[1]++ + 2] = i[4];
    v5 = (__int64 *)i[1];
    if ( !v5 )
      break;
LABEL_9:
    ;
  }
  while ( i != a1 )
  {
    v5 = (__int64 *)*i;
    if ( *i )
      goto LABEL_9;
    if ( i[2] )
      i = (__int64 *)i[2];
  }
  return 0LL;
}
