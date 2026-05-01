/*
 * XREFs of McTemplateU0ddz_EventWriteTransfer @ 0x18049BAC4
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18049B1F4 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800348D4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ddz_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-50h] BYREF
  int *v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  int *v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  const wchar_t *v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+A0h] [rbp+20h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = 14LL;
  v7 = 4LL;
  v6 = &v12;
  v9 = 4LL;
  v8 = &v13;
  v10 = L"Gutter";
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_UI_Drag_Info,
           a3,
           4u,
           &v5);
}
