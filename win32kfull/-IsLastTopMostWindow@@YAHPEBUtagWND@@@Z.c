__int64 __fastcall IsLastTopMostWindow(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    v2 = *((_QWORD *)a1 + 11);
    if ( v2 )
      return (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0;
  }
  return v1;
}
