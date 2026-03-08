/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0245E40
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0246060 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C024635C (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GetHidDesc@RimBackedDeviceBase@Rim@@QEBAPEBUtagHIDDESC@@XZ @ 0x1C022A9B0 (-GetHidDesc@RimBackedDeviceBase@Rim@@QEBAPEBUtagHIDDESC@@XZ.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C022AB60 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1C0241A90 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@@Z @ 0x1C0245BF4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$__ea_1C0245BF4.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C0246A10 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 */

__int64 __fastcall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  const struct tagHIDDESC *HidDesc; // r14
  struct _HIDP_PREPARSED_DATA *v9; // r15
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  char v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  void *v19; // [rsp+60h] [rbp-A0h] BYREF
  const char *v20; // [rsp+68h] [rbp-98h] BYREF
  CHAR *v21; // [rsp+70h] [rbp-90h] BYREF
  __int16 v22; // [rsp+78h] [rbp-88h]
  CHAR v23[80]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+D0h] [rbp-30h] BYREF
  int *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]

  HidDesc = Rim::RimBackedDeviceBase::GetHidDesc((Rim::RimBackedDeviceBase *)a1);
  v9 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)HidDesc + 2);
  memset_0(v23, 0, 0x48uLL);
  v10 = Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v10 = InkDeviceParser::PopulatePayloadReport(
            v9,
            *(const struct UsageValueInfo **)(a1 + 152),
            v23,
            v11,
            *(CHAR **)(a1 + 160),
            *((unsigned __int16 *)HidDesc + 23));
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v12;
      goto LABEL_3;
    }
    v10 = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
            (Rim::RimBackedDeviceBase *)a1,
            0xB0195u,
            *(_QWORD *)(a1 + 160),
            *((unsigned __int16 *)HidDesc + 23),
            0LL,
            0,
            0LL);
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v12;
      goto LABEL_3;
    }
    if ( (unsigned int)dword_1C03570E0 > 4 )
    {
      v22 = 72;
      v21 = v23;
      v16[0] = a2;
      v17 = 0;
      v19 = *(void **)(a1 + 80);
      v20 = "Sent super-wet ink payload";
      v18 = (a1 + 32) & -(__int64)(a1 != 0);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary>(
        v18,
        byte_1C031F960,
        v13,
        v14,
        (__int64)&v17,
        (void **)&v20,
        &v19,
        (__int64)&v18,
        (__int64)v16,
        (__int64 *)&v21);
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
LABEL_3:
    v17 = v10;
    v26 = 4LL;
    v25 = &v17;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v24);
  }
  return v12;
}
