LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C5D6F0;
    _InterlockedExchange(&dword_140C5D6E8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5D708 )
  {
    v1 = (struct _KEVENT *)&word_140C5D718;
    _InterlockedExchange(&dword_140C5D710, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C5D730 )
  {
    v1 = &stru_140C5D740;
    _InterlockedExchange(&dword_140C5D738, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
