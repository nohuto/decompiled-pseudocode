void __fastcall LinkDpiCursor(struct tagCURSOR *a1, struct tagCURSOR *a2, int a3)
{
  int v4; // eax
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx

  *((_QWORD *)a2 + 6) = a1;
  *((_QWORD *)a2 + 5) = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = a2;
  v4 = *((_DWORD *)a2 + 20);
  *((_DWORD *)a2 + 19) = a3;
  if ( (v4 & 8) != 0 )
  {
    v5 = 0;
    if ( *((int *)a2 + 22) > 0 )
    {
      v6 = 0LL;
      do
      {
        ++v5;
        v7 = *(_QWORD *)(*((_QWORD *)a2 + 12) + v6);
        v6 += 8LL;
        *(_DWORD *)(v7 + 76) = a3;
      }
      while ( v5 < *((_DWORD *)a2 + 22) );
    }
  }
}
