__int64 __fastcall PfTAcquireLogEntry(__int64 a1, int *a2, int a3)
{
  __int64 v3; // r10
  int v7; // eax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) > *(_DWORD *)(v3 + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(a1) != -1073741823 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
        goto LABEL_2;
    }
    v3 = 0LL;
    v7 = 0xFFFF;
  }
  else
  {
LABEL_2:
    v7 = *(_DWORD *)(v3 + 16);
    *(_DWORD *)(v3 + 16) = v7 + a3;
  }
  *a2 = v7;
  return v3;
}
