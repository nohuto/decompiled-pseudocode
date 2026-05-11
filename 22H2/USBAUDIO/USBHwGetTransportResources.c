/*
 * XREFs of USBHwGetTransportResources @ 0x1C002D2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0013540 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v8; // ebx
  int v9; // ebp
  __int64 v10; // r13
  __int64 v11; // r14
  PKSDEVICE Device; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r9
  size_t v23; // rsi

  v4 = a2[2];
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(v4 + 152);
  v11 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  v13 = 9LL;
  if ( !Device )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        9LL,
        9u,
        0xAu,
        (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
    goto LABEL_4;
  }
  v14 = *((_QWORD *)Device->Context + 9);
  if ( a1 )
  {
    v15 = a1 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v21 = 14;
        goto LABEL_30;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v20 = 16;
        goto LABEL_21;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 1 )
          {
            v8 = -1073741811;
            *a4 = 0;
            goto LABEL_52;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_22:
            if ( *a4 )
            {
              if ( *a4 < 4u )
              {
                v8 = -1073741811;
                goto LABEL_52;
              }
              *(_WORD *)a3 = *(_WORD *)(v14 + 8);
              a3[2] = *(_BYTE *)(v11 + 186);
              a3[3] = *(_BYTE *)(v11 + 187);
            }
            else
            {
              v8 = -1073741789;
            }
            *a4 = 4;
            goto LABEL_52;
          }
          v20 = 17;
LABEL_21:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            9LL,
            9u,
            v20,
            (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
          goto LABEL_22;
        }
        v9 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_31:
          v13 = *(_QWORD *)(v10 + 80);
          if ( v9 )
            v13 = *(_QWORD *)(v10 + 88);
          if ( v13 )
          {
            v23 = *(unsigned int *)v13;
            goto LABEL_35;
          }
          goto LABEL_47;
        }
        v21 = 15;
LABEL_30:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          9LL,
          9u,
          v21,
          (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
        goto LABEL_31;
      }
      v9 = 1;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v22 = 13;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v22 = 12;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      9LL,
      9u,
      v22,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
LABEL_40:
    v13 = *(_QWORD *)(v11 + 168);
    if ( v9 )
      v13 = *(_QWORD *)(v11 + 176);
    goto LABEL_46;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      9LL,
      9u,
      0xBu,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids);
  v13 = *(_QWORD *)(v11 + 136);
LABEL_46:
  if ( v13 )
  {
    v23 = *(unsigned __int8 *)v13;
LABEL_35:
    if ( *a4 )
    {
      if ( *a4 < (unsigned int)v23 )
      {
        v8 = -1073741811;
        goto LABEL_52;
      }
      memmove(a3, (const void *)v13, v23);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v23;
    goto LABEL_52;
  }
LABEL_47:
  *a4 = 0;
LABEL_4:
  v8 = -1073741437;
LABEL_52:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x12u,
      (__int64)&WPP_59cc21402c76383212e5dfc6e551f37f_Traceguids,
      v8);
  return v8;
}
