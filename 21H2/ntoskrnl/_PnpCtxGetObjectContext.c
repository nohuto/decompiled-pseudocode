/*
 * XREFs of _PnpCtxGetObjectContext @ 0x14063C148
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x14063B730 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x14063BE70 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x14063BFD0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDeviceId @ 0x1406C4020 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x14097ED80 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectContext(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 392);
  return v3;
}
