/*
 * XREFs of ACPIQueryGedDeviceInterface @ 0x1C002E2DC
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C00814F0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C00867A0 (ACPIFilterIrpStartDevice.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0015444 (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIQueryGedDeviceInterface(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *v4; // rax
  const char *v5; // r8
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  struct _DEVICE_OBJECT *v11; // rcx
  _OWORD v12[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+70h] [rbp+7h]
  _QWORD v14[9]; // [rsp+78h] [rbp+Fh] BYREF

  memset(v14, 0, sizeof(v14));
  v13 = 0LL;
  v2 = a1[121];
  memset(v12, 0, sizeof(v12));
  if ( *(_WORD *)(*(_QWORD *)v2 + 66LL) == 6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 104LL);
    if ( *(_DWORD *)(v7 + 16) == 1599293264 )
    {
      v11 = *(struct _DEVICE_OBJECT **)(v7 + 768);
      v14[4] = 0LL;
      v14[1] = &GUID_GED_INTERFACE_STANDARD;
      LOWORD(v14[0]) = 2075;
      v14[3] = v12;
      LODWORD(v14[2]) = 65576;
      result = ACPIInternalSendSynchronousIrp(v11);
      if ( (int)result >= 0 )
      {
        a1[123] = v13;
        a1[124] = *((_QWORD *)&v12[0] + 1);
      }
    }
    else
    {
      v8 = a1[1];
      v9 = (const char *)&unk_1C00622D0;
      v10 = (const char *)&unk_1C00622D0;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)a1[76];
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xAu,
          0x29u,
          (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
          v7,
          (char)a1,
          v9,
          v10);
      return 3221225473LL;
    }
  }
  else
  {
    v3 = a1[1];
    v4 = (const char *)&unk_1C00622D0;
    v5 = (const char *)&unk_1C00622D0;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)a1[76];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)a1[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x28u,
        (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
        (char)a1,
        v4,
        v5);
    return 3221225480LL;
  }
  return result;
}
