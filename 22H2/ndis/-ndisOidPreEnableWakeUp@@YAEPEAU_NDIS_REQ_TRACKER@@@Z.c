/*
 * XREFs of ?ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00921D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueryEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0094334 (-ndisQueryEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0095148 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreEnableWakeUp(struct _NDIS_REQ_TRACKER *a1)
{
  int v1; // edx
  unsigned __int8 result; // al

  v1 = *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL);
  if ( (v1 & 0xFFFFFFFD) == 0 )
    return ndisQueryEnableWakeUp(a1);
  result = 1;
  if ( v1 == 1 )
    return ndisSetEnableWakeUp(a1);
  *((_DWORD *)a1 + 10) = -1073676267;
  return result;
}
