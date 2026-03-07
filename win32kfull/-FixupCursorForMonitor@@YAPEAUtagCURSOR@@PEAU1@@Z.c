struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  struct tagCURSOR *v1; // rbx
  __int64 v2; // rdi
  int v3; // esi
  int CurrentCursorSize; // eax
  __int64 v5; // r9
  int v6; // r10d
  signed int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax

  v1 = a1;
  if ( a1 )
  {
    v2 = 0LL;
    v3 = 0x7FFFFFFF;
    CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(a1);
    v5 = *((_QWORD *)v1 + 6);
    v6 = CurrentCursorSize;
    if ( v5 )
    {
      do
      {
        v7 = v3;
        v8 = *(_DWORD *)(v5 + 76) - v6;
        v9 = v5;
        v5 = *(_QWORD *)(v5 + 40);
        v10 = abs32(v8);
        if ( v10 < v3 )
          v3 = v10;
        if ( v10 >= v7 )
          v9 = v2;
        v2 = v9;
      }
      while ( v5 );
      if ( v9 )
        return (struct tagCURSOR *)v9;
    }
  }
  return v1;
}
