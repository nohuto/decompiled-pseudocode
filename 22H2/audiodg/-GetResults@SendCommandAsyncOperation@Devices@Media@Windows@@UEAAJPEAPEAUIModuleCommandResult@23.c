/*
 * XREFs of ?GetResults@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAUIModuleCommandResult@234@@Z @ 0x1400573F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?9UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_N$$TAEBV?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@0@@Z @ 0x14001EE30 (--$-9UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_N$$TAEBV-.c)
 *     ??$query_to@UIAudioDeviceModule@Devices@Media@Windows@@@?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@@Z @ 0x14002031C (--$query_to@UIAudioDeviceModule@Devices@Media@Windows@@@-$com_ptr_t@UIAudioDeviceModule@Devices@.c)
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x140055D2C (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@.c)
 *     ?get_Status@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAW4AsyncStatus@Foundation@Windows@ABI@@@Z @ 0x14005A990 (-get_Status@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media.c)
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetResults(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        struct Windows::Media::Devices::IModuleCommandResult **a2)
{
  signed __int32 v2; // r8d
  int Status; // ebx
  __int64 *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed __int32 v11; // [rsp+40h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 16);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 3 )
  {
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
      (__int64)this + 16,
      &v12);
    Status = v12;
  }
  else
  {
    if ( v11 != 1 )
    {
      Status = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return (unsigned int)Status;
    }
    Status = 0;
  }
  if ( Status < 0 )
    return (unsigned int)Status;
  Status = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::get_Status(
             (char *)this + 16,
             &v13);
  if ( Status < 0 )
    return (unsigned int)Status;
  if ( v13 != 1 )
  {
    if ( !v13 )
      return (unsigned int)-2147483638;
    if ( v13 == 2 )
      return (unsigned int)-2147467260;
    return (unsigned int)-2147467259;
  }
  if ( !wil::operator!=<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>(
          (__int64)this + 168,
          (_QWORD *)this + 21) )
    return (unsigned int)-2147467259;
  v7 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::query_to<Windows::Media::Devices::IAudioDeviceModule>(
         v6,
         a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x786,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  return (unsigned int)Status;
}
