/*
 * XREFs of VfPnpTestStartedPdoStack @ 0x140AE3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 */

__int64 __fastcall VfPnpTestStartedPdoStack(struct _DEVICE_OBJECT *a1)
{
  __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  PVOID v8; // rbx
  _OWORD v10[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v11[14]; // [rsp+60h] [rbp-19h] BYREF
  NTSTATUS v12; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+F0h] [rbp+77h] BYREF

  v12 = 0;
  memset(v11, 0, 0x48uLL);
  LOWORD(v11[0]) = -229;
  VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v2, 0LL, 0LL, 0LL);
  LODWORD(v11[1]) = -1;
  BYTE1(v11[0]) = 7;
  VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v3, 0LL, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 )
  {
    BYTE1(v11[0]) = 7;
    LODWORD(v11[1]) = -1;
    VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v4, 0xFFFFFFFFFFFFFFFFuLL, 0LL, 0LL);
  }
  BYTE1(v11[0]) = 12;
  LODWORD(v11[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v4, 0LL, 0LL, 0LL);
  BYTE1(v11[0]) = 19;
  LODWORD(v11[1]) = -1;
  VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v5, 0LL, 0LL, 0LL);
  BYTE1(v11[0]) = 7;
  LODWORD(v11[1]) = 4;
  P = 0LL;
  if ( (unsigned int)VfIrpSendSynchronousIrp(a1, (__int64)v11, 0, v6, 0LL, (ULONG_PTR *)&P, &v12) && v12 >= 0 )
  {
    v8 = P;
    ObfDereferenceObject(*((PVOID *)P + 1));
    ExFreePoolWithTag(v8, 0);
  }
  v11[1] = &GUID_BOGUS_INTERFACE;
  BYTE1(v11[0]) = 8;
  v11[3] = v10;
  LODWORD(v11[2]) = 0x1FFFF;
  memset(v10, 0, sizeof(v10));
  v11[4] = -1LL;
  return VfIrpSendSynchronousIrp(a1, (__int64)v11, 1, v7, 0LL, 0LL, 0LL);
}
