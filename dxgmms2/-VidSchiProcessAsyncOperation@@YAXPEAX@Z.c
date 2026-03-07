void __fastcall VidSchiProcessAsyncOperation(struct _VIDSCH_NODE **P)
{
  if ( *((_DWORD *)P + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(P[6]);
  _InterlockedDecrement((volatile signed __int32 *)P[4] + 2810);
  KeSetEvent((PRKEVENT)((char *)P[4] + 11248), 0, 0);
  ExFreePoolWithTag(P, 0);
}
