/*
 * XREFs of CmpStartSiloRegistryNamespace @ 0x1406A630C
 * Callers:
 *     CmInitSiloNamespace @ 0x1405D2580 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x1407A5B58 (CmInitServerSiloState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackExclusive @ 0x1406E4F28 (CmpLockKcbStackExclusive.c)
 */

__int64 __fastcall CmpStartSiloRegistryNamespace(__int64 a1)
{
  struct _DMA_ADAPTER *v2; // rbx
  _QWORD *v3; // rbx
  int KeyBody; // edi
  signed __int64 v5; // rax
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v8[40]; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v9[19]; // [rsp+78h] [rbp-90h] BYREF

  LOBYTE(v7) = 0;
  memset(&v8[8], 0, 32);
  *(_WORD *)&v8[10] = -1;
  memset(v9, 0, 0x128uLL);
  LODWORD(v9[6]) = -1;
  *((_QWORD *)&v9[9] + 1) = &v9[9];
  *(_QWORD *)&v9[9] = &v9[9];
  memset((char *)&v9[13] + 8, 0, 0x50uLL);
  v2 = 0LL;
  *(_QWORD *)v8 = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_4;
  CmpLockRegistry();
  v3 = CmpRegistryRootObject;
  CmpStartKcbStackForTopLayerKcb(&v8[8], *((_QWORD *)CmpRegistryRootObject + 1));
  CmpLockKcbStackExclusive(&v8[8]);
  KeyBody = CmpCreateKeyBody(v3[1], 0, (__int64)v9, 0LL, 1, (__int64)&v8[8], (ULONG_PTR **)v8, (bool *)&v7);
  if ( KeyBody >= 0 )
  {
    CmpUnlockKcbStack((__int64)&v8[8]);
    CmpUnlockRegistry();
    v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), *(signed __int64 *)v8, 0LL);
    v2 = (struct _DMA_ADAPTER *)(*(_QWORD *)v8 & -(__int64)(v5 != 0));
LABEL_4:
    KeyBody = 0;
    goto LABEL_5;
  }
  CmpUnlockKcbStack((__int64)&v8[8]);
  CmpUnlockRegistry();
  v2 = *(struct _DMA_ADAPTER **)v8;
LABEL_5:
  CmpCleanupKcbStack((__int64)&v8[8]);
  CmpCleanupParseContext(v9, 0LL);
  if ( v2 )
    HalPutDmaAdapter(v2);
  return (unsigned int)KeyBody;
}
