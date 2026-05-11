/*
 * XREFs of USBHwSetTransportResources @ 0x1C002D5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall USBHwSetTransportResources(int a1, _QWORD *a2, int *a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // ebp
  __int64 v9; // rsi
  PKSDEVICE Device; // rax
  __int64 v11; // rdx
  _DWORD *Context; // r14
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // r9
  int v15; // eax

  v7 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(a2[2] + 144LL);
  Device = KsGetDevice(a2);
  if ( Device )
  {
    Context = Device->Context;
    if ( a1 == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_12;
      v13 = 20;
    }
    else
    {
      if ( a1 != 8 )
        goto LABEL_16;
      v8 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_12:
        if ( Context[213] == 2 )
        {
          if ( a4 == 4 )
          {
            v15 = *a3;
            if ( v8 )
              *(_DWORD *)(v9 + 228) = v15;
            else
              *(_DWORD *)(v9 + 224) = v15;
            goto LABEL_23;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = 23;
            goto LABEL_15;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 22;
LABEL_15:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v11,
            9u,
            v14,
            (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
        }
LABEL_16:
        v7 = -1073741811;
        goto LABEL_23;
      }
      v13 = 21;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      v13,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x13u,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
  v7 = -1073741437;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x18u,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
      v7);
  return v7;
}
