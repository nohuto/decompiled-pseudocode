/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800348D4
 * Callers:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800341C8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18006C64C (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     McTemplateU0qd_EventWriteTransfer @ 0x18015FC34 (McTemplateU0qd_EventWriteTransfer.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801C20F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801D1740 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x1801D17B8 (McTemplateU0dddd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1801D1854 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0pqztp_EventWriteTransfer @ 0x1801F3740 (McTemplateU0pqztp_EventWriteTransfer.c)
 *     McTemplateU0zqtq_EventWriteTransfer @ 0x1801F3824 (McTemplateU0zqtq_EventWriteTransfer.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x1801F6678 (McTemplateU0dz_EventWriteTransfer.c)
 *     McTemplateU0zzz_EventWriteTransfer @ 0x18043BB58 (McTemplateU0zzz_EventWriteTransfer.c)
 *     McTemplateU0zzzq_EventWriteTransfer @ 0x18043BC60 (McTemplateU0zzzq_EventWriteTransfer.c)
 *     ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x180492D00 (-SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?Show@CDropFeedback@@UEAAJXZ @ 0x180492EC0 (-Show@CDropFeedback@@UEAAJXZ.c)
 *     ??1CDragVisual@@MEAA@XZ @ 0x1804945EC (--1CDragVisual@@MEAA@XZ.c)
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x180494F70 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180495FC0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180496260 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x180497C34 (-_SetText@CDragVisual@@AEAAXPEBG@Z.c)
 *     ?_Show@CDragVisual@@AEAAXXZ @ 0x180497DEC (-_Show@CDragVisual@@AEAAXXZ.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x18049BAC4 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x18049BB50 (McTemplateU0qdddd_EventWriteTransfer.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1804D7610 (McTemplateU0sqq_EventWriteTransfer.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x1804D7EEC (McTemplateU0z_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  v6 = 0;
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
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
  return EventWriteTransfer(*a1, a2, 0LL, 0LL, a4, UserData);
}
