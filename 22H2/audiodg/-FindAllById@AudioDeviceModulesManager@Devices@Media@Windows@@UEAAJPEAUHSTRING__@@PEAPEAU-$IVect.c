/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140055E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140018DF4 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x140021160 (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rbx
  void *v9; // rax
  __int64 v10; // rdx
  char v11; // r8
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r9
  unsigned int v15; // esi
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // rax
  HRESULT v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  INT32 result; // [rsp+88h] [rbp+48h] BYREF

  v27 = 0;
  v24 = 0LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 658LL;
LABEL_27:
    v14 = v6;
    goto LABEL_28;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 659LL;
    goto LABEL_27;
  }
  v8 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v24);
  *v8 = 0LL;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v9
    || (v12 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v9,
                v10,
                v11)) == 0 )
  {
    v6 = -2147024882;
    v7 = 661LL;
    goto LABEL_27;
  }
  *v8 = v12;
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(
          *(_QWORD *)(a1 + 104),
          &v27);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v7 = 663LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v14);
    goto LABEL_29;
  }
  v15 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      v16 = *(__int64 **)(a1 + 104);
      v23 = 0LL;
      result = 0;
      v17 = *v16;
      v18 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v23);
      v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v17 + 48))(v16, v15, v18);
      v6 = v19;
      if ( v19 < 0 )
        break;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 48LL))(v23, string1);
      v6 = v19;
      if ( v19 < 0 )
      {
        v21 = 674LL;
        goto LABEL_22;
      }
      v19 = WindowsCompareStringOrdinal(string1[0], a2, &result);
      v6 = v19;
      if ( v19 < 0 )
      {
        v21 = 675LL;
        goto LABEL_22;
      }
      if ( !result )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, v23);
        v6 = v19;
        if ( v19 < 0 )
        {
          v21 = 679LL;
          goto LABEL_22;
        }
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v23);
      if ( ++v15 >= v27 )
        goto LABEL_16;
    }
    v21 = 673LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v19);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v23);
  }
  else
  {
LABEL_16:
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 64LL))(v24, a3);
    v6 = v20;
    if ( v20 < 0 )
    {
      v14 = (unsigned int)v20;
      v7 = 683LL;
      goto LABEL_28;
    }
    if ( !*a3 )
    {
      v6 = -2147467259;
      v7 = 684LL;
      goto LABEL_27;
    }
    v6 = 0;
  }
LABEL_29:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v24);
  return v6;
}
