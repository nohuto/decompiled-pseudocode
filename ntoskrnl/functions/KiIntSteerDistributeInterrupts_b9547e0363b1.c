__int64 __fastcall KiIntSteerDistributeInterrupts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rbx
  _QWORD *v7; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v3 = KiIntTrackRootList;
  v12 = 0LL;
  while ( (__int64 *)v3 != &KiIntTrackRootList )
  {
    if ( *(_BYTE *)(v3 + 132) )
    {
      v4 = *(_QWORD *)(v3 + 176);
      v5 = *(_QWORD *)(v3 + 160);
      if ( v4 != v5 )
      {
        WORD4(v12) = *(_WORD *)(v3 + 184);
        if ( WORD4(v12) == *(_WORD *)(v3 + 168) )
          v9 = v4 & ~v5;
        else
          v9 = v4;
        *(_QWORD *)&v12 = v9;
        KiIntSteerUpdateDeviceInterruptMask((__int64)&v12, 0, a3);
      }
    }
    v3 = *(_QWORD *)v3;
  }
  for ( i = KiIntTrackRootList; (__int64 *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 132) )
    {
      v7 = (_QWORD *)(i + 176);
      if ( *(_QWORD *)(i + 176) != *(_QWORD *)(i + 160) )
      {
        KiIntSteerSetDestination(i, i + 176, a3);
        WORD4(v12) = *(_WORD *)(i + 184);
        if ( *(_WORD *)(i + 168) == WORD4(v12) )
          v11 = *(_QWORD *)(i + 160) & ~*v7;
        else
          v11 = *(_QWORD *)(i + 160);
        *(_QWORD *)&v12 = v11;
        KiIntSteerUpdateDeviceInterruptMask((__int64)&v12, 1, v10);
        *(_WORD *)(i + 168) = *(_WORD *)(i + 184);
        *(_QWORD *)(i + 160) = *v7;
      }
    }
  }
  return 0LL;
}
