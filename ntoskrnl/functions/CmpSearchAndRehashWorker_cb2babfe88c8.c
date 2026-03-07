__int64 __fastcall CmpSearchAndRehashWorker(__int64 a1, __int64 a2)
{
  char v3; // al
  unsigned int v4; // ecx

  v3 = CmpRehashKcbSubtree(*(_QWORD *)a2, a1);
  v4 = 0;
  if ( v3 )
  {
    ++*(_DWORD *)(a2 + 8);
    return 2;
  }
  return v4;
}
