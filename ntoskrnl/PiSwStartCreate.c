/*
 * XREFs of PiSwStartCreate @ 0x140806E88
 * Callers:
 *     PiCreateDriverSwDeviceCallback @ 0x140807FD0 (PiCreateDriverSwDeviceCallback.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140561860 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140561988 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PnpGetMultiSzLength @ 0x140807138 (PnpGetMultiSzLength.c)
 */

__int64 __fastcall PiSwStartCreate(
        const wchar_t *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rcx
  int MultiSzLength; // ebx
  __int64 v22; // r8
  _QWORD v24[16]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+27h] BYREF

  memset(v24, 0, 0x78uLL);
  v25 = 0LL;
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      v17,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Start,
      v18,
      a1,
      a3,
      a2);
  v19 = a5;
  v24[7] = a6;
  LODWORD(v24[8]) = a7;
  v24[9] = a8;
  v24[10] = a9;
  LODWORD(v24[11]) = a11;
  v24[12] = a10;
  LODWORD(v24[13]) = a13;
  v24[14] = a12;
  v24[0] = a1;
  v24[1] = a2;
  v24[2] = a3;
  v24[4] = a4;
  v24[6] = a5;
  if ( a4 )
  {
    MultiSzLength = PnpGetMultiSzLength(a4, 1024LL, &v25);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    LODWORD(v24[3]) = v25;
  }
  if ( v19 )
  {
    MultiSzLength = PnpGetMultiSzLength(v19, 1024LL, &v25);
    if ( MultiSzLength < 0 )
      goto LABEL_10;
    LODWORD(v24[5]) = v25;
  }
  MultiSzLength = PiSwIrpStartCreateWorker((__int64)v24, 0LL);
LABEL_10:
  if ( (byte_140C0E10C & 8) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v20,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelCreate_Stop,
      v22,
      a1,
      a3,
      a2,
      MultiSzLength);
  return (unsigned int)MultiSzLength;
}
