/*
 * XREFs of _PnpCtxGetObjectContext @ 0x140864F5C
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140864AC0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDeviceId @ 0x140864D40 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x140864E40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverFile @ 0x140A6B1D0 (DrvDbDispatchDriverFile.c)
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
