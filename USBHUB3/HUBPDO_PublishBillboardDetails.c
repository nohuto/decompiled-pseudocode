void __fastcall HUBPDO_PublishBillboardDetails(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // r14d
  _BYTE *Pool2; // rax
  _WORD *v8; // rdi
  __int64 i; // r10
  int DeviceInterfaceForBillboard; // edx
  unsigned __int16 v11; // r9
  int updated; // r8d
  __int64 v13; // [rsp+28h] [rbp-48h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch]
  void *v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  LODWORD(v18) = 0;
  v16 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  v5 = **(_QWORD **)(v3 + 2648);
  v6 = 8 * *(unsigned __int8 *)(v5 + 4) + 4;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, v6, 1681082453LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_BYTE *)(v5 + 4);
    Pool2[1] = *(_BYTE *)(v5 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v5 + 8), 0x20u);
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v5 + 4); i = (unsigned int)(i + 1) )
    {
      v8[4 * i + 2] = *(_WORD *)(v5 + 4 * i + 44);
      LOBYTE(v8[4 * i + 3]) = *(_BYTE *)(v5 + 4 * i + 46);
      *(_DWORD *)&v8[4 * i + 4] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
    }
    v16 = 0;
    v18 = 0LL;
    v17 = &DEVPKEY_Device_UsbBillboardInfo;
    v15 = 24;
    DeviceInterfaceForBillboard = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *, __int64, unsigned int, _WORD *))(WdfFunctions_01015 + 3480))(
                                    WdfDriverGlobals,
                                    v4,
                                    &v15,
                                    4099LL,
                                    v6,
                                    v8);
    if ( DeviceInterfaceForBillboard >= 0 )
    {
      DeviceInterfaceForBillboard = HUBFDO_CreateDeviceInterfaceForBillboard(
                                      *(_QWORD *)v3,
                                      *(_WORD *)(a1 + 48),
                                      (_QWORD *)(v3 + 2656),
                                      (_BYTE *)(v3 + 2664),
                                      v6,
                                      (__int64)v8);
      if ( DeviceInterfaceForBillboard >= 0 )
      {
        updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
        if ( updated >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_17;
        v11 = 100;
        LODWORD(v13) = updated;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 99;
        goto LABEL_9;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 98;
LABEL_9:
      LODWORD(v13) = DeviceInterfaceForBillboard;
LABEL_16:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        v11,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v13);
    }
LABEL_17:
    ExFreePoolWithTag(v8, 0x64334855u);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      2u,
      0x61u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v6);
}
