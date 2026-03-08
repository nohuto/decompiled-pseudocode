/*
 * XREFs of UsbhResetNotifyCompletion @ 0x1C003D4F0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003D708 (UsbhSetPdo_AllowIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyCompletion(__int64 a1)
{
  unsigned int i; // esi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx

  FdoExt(a1)[1316] = 0;
  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v5 = *(_QWORD *)(PortData + 392);
    if ( v5 )
    {
      v6 = PdoExt(*(_QWORD *)(PortData + 392));
      v8 = v6;
      if ( *((_BYTE *)v6 + 2740) )
      {
        if ( *((_QWORD *)v6 + 348) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v7,
                3u,
                0x14u,
                (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
                a1);
          }
          Log(a1, 4, 1380860721, 0LL, a1);
          UsbhSetPdo_AllowIo(v9, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 348) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 348), 0);
          *((_QWORD *)v8 + 348) = 0LL;
        }
        else if ( (v6[355] & 4) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v7,
              3u,
              0x15u,
              (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
              a1);
          }
          Log(a1, 4, 1380860722, 0LL, a1);
          UsbhSetPdo_AllowIo(v10, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 349) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 349), 0);
        }
        else if ( v6[196] == 2 )
        {
          *((_BYTE *)v6 + 2741) = 1;
        }
      }
    }
  }
  return result;
}
