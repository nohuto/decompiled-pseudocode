/*
 * XREFs of VfPnpTestStartedPdoStack @ 0x1409E39B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     VfIrpSendSynchronousIrp @ 0x1409D2510 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPnpTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  PVOID v2; // rbx
  __int128 v4; // [rsp+40h] [rbp-49h] BYREF
  __int128 v5; // [rsp+50h] [rbp-39h]
  _QWORD v6[16]; // [rsp+60h] [rbp-29h] BYREF
  NTSTATUS v7; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+100h] [rbp+77h] BYREF

  v7 = 0;
  memset(v6, 0, 0x48uLL);
  LOWORD(v6[0]) = -229;
  VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0LL, 0LL, 0LL);
  LODWORD(v6[1]) = -1;
  BYTE1(v6[0]) = 7;
  VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0LL, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    BYTE1(v6[0]) = 7;
    LODWORD(v6[1]) = -1;
    VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0xFFFFFFFFFFFFFFFFuLL, 0LL, 0LL);
  }
  BYTE1(v6[0]) = 12;
  LODWORD(v6[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0LL, 0LL, 0LL);
  BYTE1(v6[0]) = 19;
  LODWORD(v6[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0LL, 0LL, 0LL);
  BYTE1(v6[0]) = 7;
  LODWORD(v6[1]) = 4;
  P = 0LL;
  if ( (unsigned int)VfIrpSendSynchronousIrp(a1, (__int64)v6, 0, -1073741637, 0LL, (ULONG_PTR *)&P, &v7) && v7 >= 0 )
  {
    v2 = P;
    HalPutDmaAdapter(*((PADAPTER_OBJECT *)P + 1));
    ExFreePoolWithTag(v2, 0);
  }
  v6[3] = &v4;
  v6[1] = &GUID_BOGUS_INTERFACE;
  BYTE1(v6[0]) = 8;
  LODWORD(v6[2]) = 0x1FFFF;
  v4 = 0LL;
  v6[4] = -1LL;
  v5 = 0LL;
  VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, -1073741637, 0LL, 0LL, 0LL);
  v6[3] = &v4;
  BYTE1(v6[0]) = 8;
  LODWORD(v6[2]) = 0x1FFFF;
  v6[1] = &GUID_BOGUS_INTERFACE;
  v4 = 0LL;
  v6[4] = -1LL;
  v5 = 0LL;
  return VfIrpSendSynchronousIrp(a1, (__int64)v6, 1, 0, 0LL, 0LL, 0LL);
}
