/*
 * XREFs of ?RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000B820
 * Callers:
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000B6F0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000B820 (-RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 * Callees:
 *     ?RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x1C000B820 (-RecurseToTerminalForDataFlowInPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOG.c)
 */

__int64 __fastcall CSidebandDevice::RecurseToTerminalForDataFlowInPin(
        CSidebandDevice *this,
        struct _KSFILTER_DESCRIPTOR *a2,
        const struct KSTOPOLOGY_CONNECTION *a3,
        unsigned int *a4)
{
  int v8; // r10d
  ULONG ConnectionsCount; // r14d
  ULONG v10; // edi
  const KSTOPOLOGY_CONNECTION *Connections; // r12
  const KSTOPOLOGY_CONNECTION *v12; // rbp

  v8 = -1073741275;
  if ( a3->ToNode == -1 )
  {
    v8 = 0;
    *a4 = a3->ToNodePin;
  }
  else if ( a2 )
  {
    ConnectionsCount = a2->ConnectionsCount;
    v10 = 0;
    Connections = a2->Connections;
    if ( ConnectionsCount )
    {
      v12 = a2->Connections;
      do
      {
        if ( v12->FromNode == a3->ToNode )
          v8 = CSidebandDevice::RecurseToTerminalForDataFlowInPin(this, a2, &Connections[v10], a4);
        if ( v8 >= 0 )
          break;
        ++v10;
        ++v12;
      }
      while ( v10 < ConnectionsCount );
    }
  }
  return (unsigned int)v8;
}
