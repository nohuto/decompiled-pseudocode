/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14036E304
 * Callers:
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14036CC58 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x14036DE98 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x14036E040 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404F0E90 (McTemplateK0jq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x1404F0F08 (McTemplateK0xxxqq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqqqq_EtwWriteTransfer @ 0x1404F0FB0 (McTemplateK0xxxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x14050C114 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x14050CB28 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x14050CBB0 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050D7A0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14050D804 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14050D8B4 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x14050D920 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050D9F4 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050DB48 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14050DBDC (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x14050DE90 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 *     McTemplateK0zd_EtwWriteTransfer @ 0x14050E5D0 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x14050E670 (McTemplateK0zdq_EtwWriteTransfer.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x14050E9B8 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14050FD60 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050FDC8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x14050FE78 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x14050FF38 (McTemplateK0zzt_EtwWriteTransfer.c)
 * Callees:
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *ActivityId,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v7; // r11d
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteEx(*a1, a2, 0LL, 0, ActivityId, 0LL, a4, UserData);
}
