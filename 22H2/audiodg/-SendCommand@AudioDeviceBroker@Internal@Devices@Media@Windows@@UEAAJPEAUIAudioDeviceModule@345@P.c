/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x140059DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x14001EE10 (--$-8UIModuleCommandResult@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$co.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(&v13, *((_QWORD *)a2 + 12));
        if ( wil::operator==<Windows::Media::Devices::IModuleCommandResult,wil::err_returncode_policy>(&v13) )
        {
          v7 = -2147467261;
          v8 = 1535LL;
          v9 = 2147500035LL;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModule *, struct Windows::Storage::Streams::IBuffer *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v13 + 56LL))(
                  v13,
                  a2,
                  a3,
                  a4);
          v7 = v10;
          if ( v10 >= 0 )
          {
            v7 = 0;
            goto LABEL_13;
          }
          v9 = (unsigned int)v10;
          v8 = 1538LL;
        }
      }
      else
      {
        v7 = -2147467261;
        v8 = 1531LL;
        v9 = 2147500035LL;
      }
    }
    else
    {
      v7 = -2147024809;
      v8 = 1530LL;
      v9 = 2147942487LL;
    }
  }
  else
  {
    v7 = -2147024809;
    v8 = 1529LL;
    v9 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v9);
LABEL_13:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
  return v7;
}
