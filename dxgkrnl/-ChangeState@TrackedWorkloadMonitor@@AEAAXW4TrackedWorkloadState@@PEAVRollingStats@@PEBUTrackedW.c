char __fastcall TrackedWorkloadMonitor::ChangeState(__int64 a1, int a2, RollingStats *a3, __int64 a4, int a5)
{
  unsigned int v8; // r10d
  __int64 v9; // rsi
  char result; // al

  v8 = (*(_DWORD *)(a1 + 224) + 1) % 5u;
  *(_DWORD *)(a1 + 224) = v8;
  v9 = 5LL * v8;
  *(_DWORD *)(a1 + 8 * v9 + 56) = *(_DWORD *)(a1 + 228);
  *(_BYTE *)(a1 + 8 * v9 + 60) = 1;
  *(_DWORD *)(a1 + 8 * v9 + 24) = a2;
  RollingStats::Update(a3);
  *(_QWORD *)(a1 + 8 * v9 + 32) = *((_QWORD *)a3 + 4);
  RollingStats::Update(a3);
  *(_QWORD *)(a1 + 8 * v9 + 40) = *((_QWORD *)a3 + 5);
  *(_DWORD *)(a1 + 8 * v9 + 48) = a5;
  if ( *(_DWORD *)(a4 + 24) == a5 )
  {
    *(_DWORD *)(a1 + 8 * v9 + 52) = *(_DWORD *)(a4 + 28);
    result = *(_BYTE *)(a4 + 37);
  }
  else
  {
    *(_DWORD *)(a1 + 8 * v9 + 52) = a5;
    result = 0;
  }
  *(_BYTE *)(a1 + 8 * v9 + 61) = result;
  return result;
}
