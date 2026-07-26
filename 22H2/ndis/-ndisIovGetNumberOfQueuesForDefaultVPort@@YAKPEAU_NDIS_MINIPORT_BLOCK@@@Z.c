/*
 * XREFs of ?ndisIovGetNumberOfQueuesForDefaultVPort@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118F24
 * Callers:
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033084 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118F54 (-ndisIovHWvRSSSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovGetNumberOfQueuesForDefaultVPort(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v1; // rcx

  if ( ndisIovHWvRSSSupported(a1) )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3568) + 128LL);
  else
    return 1LL;
}
