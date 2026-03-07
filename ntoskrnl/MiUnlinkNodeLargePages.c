__int64 __fastcall MiUnlinkNodeLargePages(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  _QWORD v14[24]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v14, 0, 0xB8uLL);
  if ( !(unsigned int)MiInitializeLargePageAllocationPacket((unsigned int)v14, a1, a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0LL;
  do
  {
    if ( !(unsigned int)MiLockFreeLargePageLists(v14) )
      break;
    MiGetFreeLargePagesSearchTypes(v14);
    MiReleaseLargePageAllocationLocks(v14);
  }
  while ( !LOBYTE(v14[7]) );
  return v14[14];
}
