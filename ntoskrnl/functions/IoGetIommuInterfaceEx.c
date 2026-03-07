__int64 IoGetIommuInterfaceEx()
{
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  return off_140C01E60[0]();
}
