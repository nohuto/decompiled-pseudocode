/*
 * XREFs of ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180034A14 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$array@G$0BE@@std@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180090664 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18009A418 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CEFC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnInputReport(
        SystemControlDeviceCollection *this,
        int a2,
        PCHAR Report,
        unsigned int a4)
{
  int v8; // edx
  int DeviceInfo; // ebx
  __int64 v10; // rdx
  struct RIMDevice *v12; // rcx
  struct RIMDevice *PreparsedData; // rdi
  struct _HIDP_CAPS *v14; // r15
  __int64 InputReportByteLength; // rax
  NTSTATUS Usages; // eax
  USHORT *v17; // rcx
  __int64 v18; // r8
  _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  USHORT *v21; // rbx
  unsigned __int16 *v22; // rdi
  DWORD v23; // ebx
  unsigned __int16 *v24; // rdi
  DWORD TickCount; // ebx
  __int64 v26; // rdx
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v28; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v32; // [rsp+68h] [rbp-98h] BYREF
  union _LARGE_INTEGER v33[3]; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  _USAGE_AND_PAGE ButtonList; // [rsp+860h] [rbp+760h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+8B0h] [rbp+7B0h] BYREF
  __int128 v37; // [rsp+8C0h] [rbp+7C0h]
  __int64 v38; // [rsp+8D0h] [rbp+7D0h]
  USHORT BreakUsageList[8]; // [rsp+8D8h] [rbp+7D8h] BYREF
  __int128 v40; // [rsp+8E8h] [rbp+7E8h]
  __int64 v41; // [rsp+8F8h] [rbp+7F8h]
  USHORT MakeUsageList[8]; // [rsp+900h] [rbp+800h] BYREF
  __int128 v43; // [rsp+910h] [rbp+810h]
  __int64 v44; // [rsp+920h] [rbp+820h]
  wil::details::in1diag3 *retaddr; // [rsp+968h] [rbp+868h]

  v30 = a2;
  v28 = 0LL;
  v29 = 0LL;
  v38 = 0LL;
  *(_OWORD *)CurrentUsageList = 0LL;
  v37 = 0LL;
  memset_0(&ButtonList, 0, 0x50uLL);
  UsageLength = 20;
  v44 = 0LL;
  v41 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v43 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v40 = 0LL;
  memset_0(v33, 0, 0x7F0uLL);
  v34 = 2032;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v32);
  if ( DeviceInfo < 0 )
  {
    v10 = 170LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(this, v8, 0LL, &v28, 0LL);
  if ( DeviceInfo < 0 )
  {
    v10 = 174LL;
    goto LABEL_3;
  }
  v12 = v28;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v28 + 6);
  v28 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v12, &v29);
  if ( DeviceInfo < 0 )
  {
    v10 = 176LL;
    goto LABEL_3;
  }
  v14 = v29;
  LODWORD(InputReportByteLength) = v29->InputReportByteLength;
  if ( a4 >= (unsigned int)InputReportByteLength )
  {
    while ( 1 )
    {
      Usages = HidP_GetUsagesEx(
                 HidP_Input,
                 0,
                 &ButtonList,
                 &UsageLength,
                 PreparsedData,
                 Report,
                 (unsigned __int16)InputReportByteLength);
      if ( Usages < 0 )
      {
        v26 = 200LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v26,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      if ( UsageLength )
      {
        v17 = CurrentUsageList;
        v18 = UsageLength;
        p_ButtonList = &ButtonList;
        do
        {
          Usage = p_ButtonList->Usage;
          ++p_ButtonList;
          *v17++ = Usage;
          --v18;
        }
        while ( v18 );
      }
      std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::lower_bound(
        (__int64)this + 2760,
        (__int64 **)&v29,
        (const unsigned __int8 *)&v30);
      if ( v29 == *((struct _HIDP_CAPS **)this + 346) )
      {
        DeviceInfo = -2147467259;
        v10 = 211LL;
        goto LABEL_3;
      }
      v21 = &v29->Reserved[5];
      Usages = HidP_UsageListDifference(&v29->Reserved[5], CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
      if ( Usages < 0 )
      {
        v26 = 220LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v26,
                 (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
                 (const char *)(unsigned int)Usages);
      }
      v22 = BreakUsageList;
      *(_OWORD *)v21 = *(_OWORD *)CurrentUsageList;
      *((_OWORD *)v21 + 1) = v37;
      *((_QWORD *)v21 + 4) = v38;
      if ( BreakUsageList[0] )
        break;
LABEL_20:
      v24 = MakeUsageList;
      if ( MakeUsageList[0] )
      {
        while ( 1 )
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                      (SystemControlDeviceCollection *)*v24,
                      a2,
                      TickCount,
                      PerformanceCount,
                      *v24,
                      1,
                      v33) >= 0 )
          {
            DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                           *((_QWORD *)this + 2),
                           v33);
            if ( DeviceInfo < 0 )
              break;
          }
          if ( !*++v24 )
            goto LABEL_25;
        }
        v10 = 295LL;
        goto LABEL_3;
      }
LABEL_25:
      InputReportByteLength = v14->InputReportByteLength;
      a4 -= InputReportByteLength;
      Report += InputReportByteLength;
      if ( a4 < (unsigned int)InputReportByteLength )
        return 0LL;
      PreparsedData = v28;
    }
    while ( 1 )
    {
      v23 = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                  (SystemControlDeviceCollection *)*v22,
                  a2,
                  v23,
                  PerformanceCount,
                  *v22,
                  0,
                  v33) >= 0 )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v33);
        if ( DeviceInfo < 0 )
          break;
      }
      if ( !*++v22 )
        goto LABEL_20;
    }
    v10 = 256LL;
    goto LABEL_3;
  }
  return 0LL;
}
