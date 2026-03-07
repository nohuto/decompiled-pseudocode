void __fastcall PiDqQueryCompletePendedIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  int v5; // edx
  __int128 *v6; // r9
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v7 = 0LL;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 184);
    if ( _InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
    {
      v4 = 0;
      if ( (*(_DWORD *)(a1 + 216) & 1) != 0 )
      {
        v6 = 0LL;
        v5 = -1073741670;
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(a1, *(_DWORD *)(v3 + 8), 0, &v7);
        v5 = 0;
        v6 = &v7;
        v4 = 16;
      }
      PiDqIrpComplete(*(IRP **)(a1 + 176), v5, v4, v6);
      *(_DWORD *)(a1 + 216) &= ~0x10u;
      *(_QWORD *)(a1 + 176) = 0LL;
    }
  }
}
