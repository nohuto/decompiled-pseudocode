/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C0220748
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x1C0200580 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024F96C (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessorProcessInkFeedbackCommand(unsigned int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  if ( a1 < 5 )
  {
    if ( InkProcessor::s_pInstance )
    {
      v4 = InkProcessor::ProcessInkFeedbackCommand(InkProcessor::s_pInstance, a1, a2, a3);
      v3 = v4;
      if ( v4 < 0 && (unsigned int)dword_1C032B288 > 2 )
      {
        v6 = v4;
        goto LABEL_10;
      }
    }
    else
    {
      v3 = -1073741823;
      if ( (unsigned int)dword_1C032B288 > 2 )
      {
        v6 = -1073741823;
        goto LABEL_10;
      }
    }
  }
  else
  {
    v3 = -1073741811;
    if ( (unsigned int)dword_1C032B288 > 2 )
    {
      v6 = -1073741811;
LABEL_10:
      v10 = 0;
      v8 = &v6;
      v9 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032B288,
        (unsigned __int8 *)dword_1C02F2FAC,
        0LL,
        0LL,
        3u,
        &v7);
    }
  }
  return v3;
}
