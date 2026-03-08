/*
 * XREFs of PiPnpRtlGatherPanelRemoveInfo @ 0x1409578EC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1409573B4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherPanelRemoveInfo(__int64 a1, __int64 a2, unsigned int ***a3)
{
  unsigned int **Pool2; // rax
  unsigned int Object; // ebx
  int v8; // eax

  Pool2 = (unsigned int **)ExAllocatePool2(256LL, 16LL, 1198550608LL);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return Object;
  }
  Object = PiDmGetObject(1LL, a1, Pool2);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  v8 = PiDmGetObject(6LL, a2, *a3 + 1);
  Object = v8;
  if ( v8 == -1073741772 )
  {
    return 0;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_8;
  }
  return Object;
}
