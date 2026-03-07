PVOID *PipDmgFlushQueueAndRestartDevices()
{
  PVOID *v0; // rbx
  int v1; // eax
  PVOID *result; // rax
  _QWORD *v3; // rax
  PVOID P[2]; // [rsp+30h] [rbp-10h] BYREF

  if ( !PipDmaGuardPolicy || PipDmaGuardPolicy == 3 )
    KeBugCheckEx(0xCAu, 0x11uLL, 0LL, 0LL, 0LL);
  P[1] = P;
  P[0] = P;
  PiDmaGuardQueueFlush(P);
  v0 = (PVOID *)P[0];
  if ( P[0] == P )
    goto LABEL_10;
  do
  {
    v1 = *((_DWORD *)v0 + 6);
    if ( (v1 & 2) != 0 )
    {
      PipDmgRequestRestartOnBlockedDevice(v0[2]);
    }
    else if ( (v1 & 4) != 0 )
    {
      PipDmgRequestUpdateConsoleLockState((ULONG_PTR)v0[2]);
    }
    v0 = (PVOID *)*v0;
  }
  while ( v0 != P );
  while ( 1 )
  {
    v0 = (PVOID *)P[0];
LABEL_10:
    result = P;
    if ( v0 == P )
      break;
    if ( v0[1] != P || (v3 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v3[1] = P;
    PipDgqFreeEntry(v0);
  }
  return result;
}
