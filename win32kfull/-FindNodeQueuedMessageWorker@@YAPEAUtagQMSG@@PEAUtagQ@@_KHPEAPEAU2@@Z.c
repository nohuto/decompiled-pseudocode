struct tagQMSG *__fastcall FindNodeQueuedMessageWorker(struct tagQ *a1, __int64 a2, __int64 a3, struct tagQ **a4)
{
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  _QWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11

  if ( !a1 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( v5 )
  {
    do
    {
      if ( IsPointerInputMessage(*(_DWORD *)(v5 + 24))
        && *(_QWORD *)(v5 + 40) == v10
        && (!v7 || (unsigned int)(v6 - 585) > 1) )
      {
        break;
      }
      v5 = *(_QWORD *)(v5 + 8);
    }
    while ( v5 );
    if ( v5 )
    {
      if ( v8 )
        *v8 = v9;
    }
  }
  return (struct tagQMSG *)v5;
}
