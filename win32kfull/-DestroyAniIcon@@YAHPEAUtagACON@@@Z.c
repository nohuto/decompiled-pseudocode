__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  int i; // edi
  struct tagCURSOR *v3; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v3 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v3 )
        _DestroyCursor(v3, 0);
    }
    Win32FreePool(*((void **)a1 + 12));
  }
  return 1LL;
}
