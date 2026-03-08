/*
 * XREFs of UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958
 * Callers:
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00086D0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000AE18 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0048BA0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0049038 (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0049228 (UsbDevice_HandleDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0049284 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0049B90 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0049CF0 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C00085AC (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x1C0008824 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0008958 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000AE18 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     Controller_ReportFatalError @ 0x1C0034770 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0049038 (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C004908C (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0049228 (UsbDevice_HandleDropEndpointsState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0049284 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0049384 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C00494D0 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x1C0049558 (UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList.c)
 */

__int64 __fastcall UsbDevice_QueueConfigureEndpointEvent(__int64 a1, int a2)
{
  int v2; // r9d
  unsigned int v4; // ebp
  int v5; // r8d
  int v6; // ebx
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // ecx
  bool v21; // cf
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  char v26; // [rsp+30h] [rbp-18h]

  v2 = 14;
  v4 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 600);
      v6 = 14;
      v7 = *(_QWORD *)(a1 + 592);
      if ( v5 > 7 )
      {
        if ( v5 == 8 )
        {
          v8 = a2 - 1;
          if ( a2 == 1 )
          {
LABEL_64:
            v6 = 10;
            goto LABEL_10;
          }
        }
        else
        {
          if ( v5 == 9 )
          {
            v18 = a2 - 3;
            if ( a2 == 3 )
              goto LABEL_64;
            goto LABEL_28;
          }
          if ( (unsigned int)(v5 - 10) > 1 )
            goto LABEL_10;
          v8 = a2 - 1;
          if ( a2 == 1 )
          {
LABEL_34:
            v6 = 12;
            goto LABEL_10;
          }
        }
LABEL_39:
        if ( v8 != 1 )
          goto LABEL_10;
        goto LABEL_34;
      }
      if ( v5 == 7 )
      {
        if ( a2 == 3 )
        {
          v6 = 8;
        }
        else if ( a2 == 4 )
        {
          v6 = 9;
        }
        goto LABEL_10;
      }
      if ( !v5 )
      {
        v6 = 1;
        if ( a2 != 5 )
          v6 = 14;
        goto LABEL_10;
      }
      if ( v5 != 1 )
      {
        if ( v5 != 2 )
        {
          if ( v5 == 3 )
          {
            if ( a2 == 3 )
            {
              v6 = 4;
              goto LABEL_10;
            }
            if ( a2 == 4 )
            {
LABEL_54:
              v6 = 7;
              goto LABEL_10;
            }
          }
          else
          {
            switch ( v5 )
            {
              case 4:
                v20 = a2 - 1;
                if ( a2 == 1 )
                {
                  v6 = v20 + 5;
                  goto LABEL_10;
                }
                break;
              case 5:
                v20 = a2 - 1;
                if ( a2 == 1 )
                {
                  v6 = v20 + 6;
                  goto LABEL_10;
                }
                break;
              case 6:
                v20 = a2 - 1;
                if ( a2 == 1 )
                  goto LABEL_54;
                break;
              default:
                goto LABEL_10;
            }
            if ( v20 == 1 )
              v6 = 13;
          }
          goto LABEL_10;
        }
        v18 = a2 - 3;
        if ( a2 == 3 )
        {
          v6 = 3;
          goto LABEL_10;
        }
LABEL_28:
        if ( v18 == 1 )
          v6 = 11;
        goto LABEL_10;
      }
      v8 = a2 - 1;
      if ( a2 != 1 )
        goto LABEL_39;
      v6 = v8 + 2;
LABEL_10:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v26 = a2;
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          a2,
          12,
          46,
          (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
          v5,
          v26,
          v6);
        v2 = 14;
      }
      *(_DWORD *)(a1 + 600) = v6;
      if ( v6 <= 7 )
        break;
      v13 = v6 - 8;
      if ( !v13 )
        return UsbDevice_HandleAssignPinsForEndpointsToOffloadState(a1, v7);
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
          return UsbDevice_HandleAddEndpointsState(a1, v7);
        v16 = v15 - 1;
        if ( !v16 )
          return UsbDevice_HandleAddAndDropEndpointsState(a1, v7);
        v17 = v16 - 1;
        if ( !v17 )
          return UsbDevice_CompleteConfigureEndpointRequest(a1, a2, v5, v2);
        v25 = v17 - 1;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_83;
          return UsbDevice_HandleUnhandledEventReceivedState(a1);
        }
        else
        {
          UsbDevice_CompleteConfigureEndpointRequest(a1, a2, v5, 14);
          return Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4119, 0, 0LL, 0LL, 0LL);
        }
      }
      v21 = *(_BYTE *)(a1 + 452) != 0;
LABEL_67:
      a2 = 4 - v21;
    }
    if ( v6 == 7 )
    {
      v21 = *(_DWORD *)(v7 + 84) != 0;
      goto LABEL_67;
    }
    if ( !v6 )
      return UsbDevice_SendConfigureEndpointCommand(a1, 5);
    v9 = v6 - 1;
    if ( !v9 )
    {
      v10 = UsbDevice_ValidateEndpointConfigureRequest(a1, v7);
      if ( v10 < 0 )
      {
        if ( *(_DWORD *)(a1 + 448) == 259 )
          *(_DWORD *)(a1 + 448) = v10;
        v4 = 2;
      }
      v11 = v4;
      return UsbDevice_QueueConfigureEndpointEvent(a1, v11);
    }
    v19 = v9 - 1;
    if ( v19 )
      break;
    a2 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 636LL) != 2) + 3;
  }
  v22 = v19 - 1;
  if ( !v22 )
  {
    v11 = 4 - (unsigned int)((unsigned int)UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(v7) != 0);
    return UsbDevice_QueueConfigureEndpointEvent(a1, v11);
  }
  v23 = v22 - 1;
  if ( !v23 )
    return UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState(a1, v7);
  v24 = v23 - 1;
  if ( v24 )
  {
    if ( v24 == 1 )
      return UsbDevice_HandleUnassignPinsForOffloadedEndpointsState(a1, v7);
LABEL_83:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, v5, 14);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( *(_DWORD *)(a1 + 448) == 259 )
      *(_DWORD *)(a1 + 448) = -1073741595;
    return UsbDevice_CompleteConfigureEndpointRequest(a1, a2, v5, v2);
  }
  return UsbDevice_HandleDropEndpointsState(a1, v7);
}
