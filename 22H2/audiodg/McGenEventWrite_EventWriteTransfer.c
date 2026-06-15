/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x140051084
 * Callers:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1400510E8 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0jjt_EventWriteTransfer @ 0x1400534D0 (McTemplateU0jjt_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14006154C (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x1400615B0 (McTemplateU0pqp_EventWriteTransfer.c)
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x140061638 (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400616F0 (McTemplateU0pqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x14006177C (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061838 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x1400628B4 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062920 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x140063B04 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140063BAC (McTemplateU0pxxq_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x1400649AC (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x140064A48 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x140064AF4 (McTemplateU0pqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x140064B90 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140064C48 (McTemplateU0pxqxq_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_14008F058;
  v6 = 0;
  if ( qword_14008F058 )
  {
    UserData->Ptr = qword_14008F058;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
