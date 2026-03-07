unsigned __int64 __fastcall DpiFdoDetermineAffectedSession(__int64 a1)
{
  __int64 v1; // r10

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1953656900 && *(_DWORD *)(v1 + 20) == 2 )
    return DxgkDetermineAffectedSession(
             *(_BYTE *)(v1 + 2743),
             (*(_BYTE *)(v1 + 3920) & 2) != 0,
             *(_BYTE *)(v1 + 3920) & 1,
             1,
             *(_QWORD *)(v1 + 5744));
  else
    return 0x300000000LL;
}
