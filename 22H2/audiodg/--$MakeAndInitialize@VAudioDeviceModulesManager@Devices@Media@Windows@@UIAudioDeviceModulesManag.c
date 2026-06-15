/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012D40
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400021C0 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140010C1C (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140011A78 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140012B74 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x140021160 (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rax
  int v5; // ebx
  RTL_SRWLOCK *v6; // rsi
  RTL_SRWLOCK **v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 *Ptr; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+50h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
  v17 = v6;
  v18 = 0LL;
  v16 = *a2;
  v7 = (RTL_SRWLOCK **)wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v6[12]);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
         v7,
         &v16);
  v5 = v8;
  if ( v8 >= 0 )
  {
    v8 = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents((Windows::Media::Devices::AudioDeviceModulesManager *)v6);
    v5 = v8;
    if ( v8 >= 0 )
    {
      Ptr = (__int64 *)v6[12].Ptr;
      v11 = *Ptr;
      v12 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v6[13]);
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v11 + 48))(Ptr, v12);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v5 = 0;
        goto LABEL_11;
      }
      v9 = 627LL;
    }
    else
    {
      v9 = 626LL;
    }
  }
  else
  {
    v9 = 625LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v8,
    v14);
LABEL_11:
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD *))v6->Ptr)(
           v6,
           &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
           a1);
  if ( v6 )
    (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
  return (unsigned int)v5;
}
