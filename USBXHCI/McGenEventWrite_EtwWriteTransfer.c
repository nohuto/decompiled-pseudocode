/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C0022498
 * Callers:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002256A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x1C0022696 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C002272E (McTemplateK0uqq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0036BDC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x1C0036C3C (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C0036CD8 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C0036DBC (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0036E80 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0036EF4 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0036F88 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003701C (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1C0037098 (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C004AE00 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x1C004AE44 (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x1C004AECC (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x1C004AF70 (McTemplateK0ppb16u_EtwWriteTransfer.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C004B00C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004B0B8 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C004B2FC (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x1C004B3B8 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x1C004B5C8 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x1C004B7EC (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 *     McTemplateK0pqzr1q_EtwWriteTransfer @ 0x1C004BC00 (McTemplateK0pqzr1q_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0052358 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C00523F0 (McTemplateK0qqx_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_1C0063708;
  v6 = 0;
  if ( qword_1C0063708 )
  {
    UserData->Ptr = qword_1C0063708;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EtwWriteTransfer(MS_USBXHCI_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
