/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@5678@@Z@Z @ 0x1800AFCEC
 * Callers:
 *     ?_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800B8270 (-_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?ControlGained@ShellFeedsDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@@Z @ 0x1800C2390 (-ControlGained@ShellFeedsDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180081FB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  _QWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-28h]

  *(_QWORD *)v8 = a2;
  v4 = 0LL;
  *(_OWORD *)&v8[8] = *a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v5);
    v4 = v6;
    v6[1] = *(_OWORD *)v8;
    *(_QWORD *)v6 = off_180501D18;
    *((_QWORD *)v6 + 4) = *(_QWORD *)&v8[16];
  }
  result = a1;
  *a1 = v4;
  return result;
}
