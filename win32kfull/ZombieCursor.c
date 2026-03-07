__int64 __fastcall ZombieCursor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
    UnlinkCursor((struct tagCURSOR *)a1);
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v3 = 0LL;
      do
      {
        HMChangeOwnerProcessWorker(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v3), gptiRit);
        ++v2;
        v3 += 8LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerProcessWorker(a1, gptiRit);
}
