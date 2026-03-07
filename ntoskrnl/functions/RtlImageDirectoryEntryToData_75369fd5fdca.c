__int64 __fastcall RtlImageDirectoryEntryToData(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, a4, (__int64)v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
