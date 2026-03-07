void __fastcall _AddMListToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagMLIST *a2)
{
  _QWORD *i; // rdi
  unsigned int v5; // eax
  _QWORD *j; // rdi
  unsigned int v7; // eax

  for ( i = *(_QWORD **)a2; i; i = (_QWORD *)*i )
  {
    v5 = *((_DWORD *)a1 + 3);
    if ( v5 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 3) = v5 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, i, 0xA0u);
  }
  for ( j = (_QWORD *)*((_QWORD *)a2 + 1); j; j = (_QWORD *)*j )
  {
    v7 = *((_DWORD *)a1 + 3);
    if ( v7 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 3) = v7 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j, 0xA0u);
  }
}
