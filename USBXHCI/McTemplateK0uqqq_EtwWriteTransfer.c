/*
 * XREFs of McTemplateK0uqqq_EtwWriteTransfer @ 0x1C0022696
 * Callers:
 *     Isoch_TransferData_Initialize @ 0x1C0004940 (Isoch_TransferData_Initialize.c)
 *     Control_TransferData_Initialize @ 0x1C00070AC (Control_TransferData_Initialize.c)
 *     Bulk_TransferData_Initialize @ 0x1C00128DC (Bulk_TransferData_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0022498 (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0uqqq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  char v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 1LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &a5;
  v14 = 4LL;
  v13 = &a6;
  v15 = &a7;
  v16 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &USBXHCI_ETW_EVENT_TRANSFER_INITIALIZED_V1, a3, 5u, &v8);
}
