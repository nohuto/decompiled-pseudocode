/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C00B0090
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D5D0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DC10 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00A2EE0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AE050 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     AMLIGetFirstChild @ 0x1C001665C (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017560 (AMLIIterateSiblingsNext.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     AMLIGetNSObjectData @ 0x1C0063524 (AMLIGetNSObjectData.c)
 *     EnableDisableIPMIRegions @ 0x1C00B0090 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  volatile signed __int32 *i; // rbx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // r14d
  int v11; // eax
  _QWORD v13[10]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a2;
  v4 = 0;
  for ( i = AMLIGetFirstChild(a1); i; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(i) )
  {
    v7 = *(_WORD *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v2;
      v11 = EnableDisableIPMIRegions(i, v6);
      if ( v11 < 0 )
        v4 = v11;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(i) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, sizeof(v13));
            WORD1(v13[0]) = 1;
            v13[2] = 7LL;
            WORD1(v13[5]) = 1;
            v13[7] = v2;
            v10 = AMLIAsyncEvalObject(v9, 0LL, 2u, v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((__int64)v9);
            if ( v10 < 0 )
              v4 = v10;
          }
        }
      }
    }
  }
  return v4;
}
