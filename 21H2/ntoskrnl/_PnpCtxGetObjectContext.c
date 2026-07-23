/*
 * XREFs of _PnpCtxGetObjectContext @ 0x140630F58
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140630540 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverDatabase @ 0x140630C80 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbDispatchDriverPackage @ 0x140630DE0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDeviceId @ 0x140672910 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x14097EF60 (DrvDbDispatchDriverFile.c)
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
