__int64 __fastcall DripsBlockerTrackingHelper::AddWakeUpToProcessEntry(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int ProcessEntry; // ebx
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE v10[4]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+44h] [rbp-14h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF

  v11 = 0;
  LODWORD(v12) = 0;
  v10[0] = 0;
  ProcessEntry = DripsBlockerTrackingHelper::DoGetProcessEntry(a1, a2, 0LL, a3, a4, &v11, &v12, v10);
  if ( ProcessEntry >= 0 && !v10[0] )
  {
    v7 = a1 + 4720LL * v11;
    v8 = *(_DWORD *)(v7 + 72LL * (unsigned int)v12 + 168) + 1;
    *(_DWORD *)(v7 + 72LL * (unsigned int)v12 + 168) = v8;
    if ( a4 == 2018 && v8 > 0x64 && !_InterlockedCompareExchange(&dword_1C013D214, 1, 0) )
    {
      v12 = 5LL;
      DxgCreateLiveDumpWithWdLogs2(0x193u, 2075LL, 0LL, 0LL, 0LL, 5LL);
    }
  }
  return (unsigned int)ProcessEntry;
}
