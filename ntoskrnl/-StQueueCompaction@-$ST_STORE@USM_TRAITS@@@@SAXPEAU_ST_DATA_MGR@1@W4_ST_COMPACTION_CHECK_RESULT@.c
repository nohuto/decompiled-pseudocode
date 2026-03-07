__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  bool v3; // zf
  char v4; // dl
  char v5; // dl
  unsigned int v6; // r9d
  unsigned int v7; // r8d

  v2 = (*(_DWORD *)(a1 + 832) >> 1) & 1;
  v3 = a2 == 1;
  v4 = *(_BYTE *)(a1 + 1904);
  if ( v3 )
  {
    v5 = v4 & 0xFC | 1;
    v6 = -2;
    v7 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 400 : 30;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v5 = v4 & 0xFC | 2;
  }
  *(_BYTE *)(a1 + 1904) = v5;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), v2, v7, v6);
}
