/*
 * XREFs of PopDirectedDripsDestroyBroadcast @ 0x1409804A8
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x140980BC4 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x140980E14 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     PoClearBroadcast @ 0x140988B8C (PoClearBroadcast.c)
 */

__int64 PopDirectedDripsDestroyBroadcast()
{
  volatile signed __int32 *v0; // rdx
  volatile signed __int32 *i; // rax
  int v2; // eax
  volatile signed __int32 *v3; // rax

  v0 = (volatile signed __int32 *)IopRootDeviceNode;
  for ( i = (volatile signed __int32 *)*((_QWORD *)IopRootDeviceNode + 1);
        i;
        i = (volatile signed __int32 *)*((_QWORD *)i + 1) )
  {
    v0 = i;
  }
  while ( v0 != IopRootDeviceNode )
  {
    _InterlockedAnd(v0 + 74, 0xFFFFFEFF);
    *((_QWORD *)v0 + 92) = v0 + 182;
    *((_QWORD *)v0 + 94) = v0 + 186;
    *((_QWORD *)v0 + 93) = v0 + 186;
    v2 = *((_DWORD *)v0 + 190);
    *((_DWORD *)v0 + 191) = 0;
    *((_QWORD *)v0 + 91) = v0 + 182;
    *((_DWORD *)v0 + 190) = v2 & 0xFFF8FFFF;
    v3 = *(volatile signed __int32 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v3;
        v3 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
      }
      while ( v3 );
    }
    else
    {
      v0 = (volatile signed __int32 *)*((_QWORD *)v0 + 2);
    }
  }
  return PoClearBroadcast();
}
