/*
 * XREFs of XilEndpoint_AllocateStreamContextArray @ 0x1C0038BDC
 * Callers:
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003CE40 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003D100 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000880C (Debug_FreAssertMsg.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C001BAFC (XilCommonBuffer_AcquireBufferEx.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C00321B8 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C003229C (CommonBuffer_AcquireShadowBuffer.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0039250 (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_AllocateStreamContextArray(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  int v4; // ecx
  unsigned int v5; // ebp
  struct _KEVENT *v6; // r15
  int v7; // r10d
  int v8; // ebx
  __int64 *v9; // rsi
  char v10; // cl
  bool v11; // al
  int v12; // edx
  int v13; // r9d
  int v14; // edx
  __int64 v15; // rax
  char v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  v2 = 0LL;
  v20 = 0LL;
  v4 = *(_DWORD *)(a1 + 12);
  v19 = 0LL;
  v5 = 1 << (v4 + 1);
  v6 = *(struct _KEVENT **)(*v1 + 120);
  v7 = 16 * v5;
  if ( !*(_BYTE *)(*v1 + 601) )
  {
    v12 = 1;
    v9 = v1 + 2;
    goto LABEL_27;
  }
  switch ( *(_DWORD *)(*(_QWORD *)(*v1 + 88) + 80LL) )
  {
    case 1:
      v9 = v1 + 2;
      if ( *(_BYTE *)(v1[2] + 656) )
        goto LABEL_15;
      v11 = 1;
      v12 = 3;
LABEL_9:
      if ( !v11 )
      {
        if ( v12 != 2 )
        {
          if ( v12 == 3 )
          {
            v2 = CommonBuffer_AcquireSecureBuffer(*(_QWORD *)(*v1 + 120), v7, (__int64)v1, 829714501);
            if ( !v2 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v13 = 16;
                v14 = *(unsigned __int8 *)(v1[2] + 135);
                v18 = *((_DWORD *)v1 + 36);
                v17 = *(_BYTE *)(v1[2] + 135);
LABEL_19:
                LOBYTE(v14) = 2;
                WPP_RECORDER_SF_dd(
                  v1[10],
                  v14,
                  13,
                  v13,
                  (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
                  v17,
                  v18);
                return (unsigned int)-1073741670;
              }
              return (unsigned int)-1073741670;
            }
          }
LABEL_23:
          *(_QWORD *)(a1 + 32) = v2;
          return 0;
        }
LABEL_15:
        v2 = CommonBuffer_AcquireShadowBuffer(v7, (__int64)v1, 829714501);
        if ( !v2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = v1[2];
            v13 = 15;
LABEL_18:
            v18 = *((_DWORD *)v1 + 36);
            v17 = *(_BYTE *)(v15 + 135);
            goto LABEL_19;
          }
          return (unsigned int)-1073741670;
        }
        v8 = XilEndpoint_SendRequestToAllocateSecureStreamContextArray(v1 + 165, v5, &v20, &v19);
        if ( v8 < 0 )
        {
          CommonBuffer_ReleaseBuffer((__int64)v6, v2);
          return (unsigned int)v8;
        }
        *(_QWORD *)(v2 + 24) = v19;
        *(_QWORD *)(a1 + 40) = v20;
        goto LABEL_23;
      }
LABEL_27:
      v2 = XilCommonBuffer_AcquireBufferEx(v6, v7, (__int64)v1, 0x31747045u, v12);
      if ( !v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741670;
        v15 = *v9;
        v13 = 17;
        goto LABEL_18;
      }
      goto LABEL_23;
    case 2:
      v9 = v1 + 2;
      v10 = *(_BYTE *)(v1[2] + 656);
      v11 = v10 == 0;
      v12 = (v10 != 0) + 1;
      goto LABEL_9;
    case 4:
      goto LABEL_15;
  }
  Debug_FreAssertMsg(
    (__int64)"Unexpected VTIO method while allocating SCA",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
    556);
  return (unsigned int)-1073741808;
}
