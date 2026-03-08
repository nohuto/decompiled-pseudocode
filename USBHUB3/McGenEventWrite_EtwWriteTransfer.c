/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C0001680
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C000174C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001790 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C000180C (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x1C0001C10 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001CA0 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C0001D10 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C0001D8C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001F80 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1C0002398 (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C000242C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C00024BC (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C000A448 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000CF08 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C0014284 (McTemplateK0pjq_EtwWriteTransfer.c)
 *     McTemplateK0ppn_EtwWriteTransfer @ 0x1C0014308 (McTemplateK0ppn_EtwWriteTransfer.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0014388 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C0014418 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x1C00144B8 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x1C00147F4 (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 *     McTemplateK0pthhhtq_EtwWriteTransfer @ 0x1C00148B8 (McTemplateK0pthhhtq_EtwWriteTransfer.c)
 *     McTemplateK0phuzu_EtwWriteTransfer @ 0x1C00295D8 (McTemplateK0phuzu_EtwWriteTransfer.c)
 *     McTemplateK0puuhz_EtwWriteTransfer @ 0x1C00296B0 (McTemplateK0puuhz_EtwWriteTransfer.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1C002DB3C (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     McTemplateK0psqzq_EtwWriteTransfer @ 0x1C002DC3C (McTemplateK0psqzq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0040CF8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C0040D80 (McTemplateK0ppq_EtwWriteTransfer.c)
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

  v5 = (unsigned __int16 *)qword_1C006A238;
  v6 = 0;
  if ( qword_1C006A238 )
  {
    UserData->Ptr = qword_1C006A238;
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
  return EtwWriteTransfer(MS_USBHUB3_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
