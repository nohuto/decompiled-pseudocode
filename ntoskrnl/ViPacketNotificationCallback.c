void __fastcall ViPacketNotificationCallback(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // r8d

  v3 = a3 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      VfPacketFree(a1);
  }
  else if ( a2 )
  {
    *(_DWORD *)(a2 + 16) &= 0x3FFFFFFFu;
  }
}
