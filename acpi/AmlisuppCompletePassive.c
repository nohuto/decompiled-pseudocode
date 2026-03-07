LONG __fastcall AmlisuppCompletePassive(__int64 a1, int a2, __int64 a3, struct _KEVENT *a4)
{
  a4[1].Header.LockNV = a2;
  return KeSetEvent(a4, 0, 0);
}
