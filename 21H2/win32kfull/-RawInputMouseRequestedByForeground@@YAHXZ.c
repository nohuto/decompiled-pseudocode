/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C01D4008
 * Callers:
 *     EditionGetMouseWheelRoutingMode @ 0x1C01D4150 (EditionGetMouseWheelRoutingMode.c)
 * Callees:
 *     <none>
 */

__int64 RawInputMouseRequestedByForeground(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  v0 = 0;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(gpqForeground + 96LL);
    if ( v1 )
    {
      if ( LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
        return (unsigned int)IsDesktopApp(*(_QWORD *)(v1 + 424)) != 0;
    }
  }
  return v0;
}
