void __fastcall _SetTargetForCursorApiBrokering(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    *((_DWORD *)a1 + 318) |= 0x8000000u;
    *((_QWORD *)a1 + 190) = a2;
    *((_DWORD *)a2 + 318) &= ~0x8000000u;
    *((_QWORD *)a2 + 190) = a1;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 190);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 1520) = 0LL;
      *((_QWORD *)a1 + 190) = 0LL;
    }
    *((_DWORD *)a1 + 318) &= ~0x8000000u;
  }
}
