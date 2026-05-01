/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIUISettings2@ViewManagement@UI@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUISettings2@ViewManagement@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018F84
 * Callers:
 *     ?IsTextScaleFactorWithinThreshold@@YAEH_N@Z @ 0x18009B3B0 (-IsTextScaleFactorWithinThreshold@@YAEH_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::UI::ViewManagement::IUISettings2>>(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  *a2 = 0LL;
  v4 = RoActivateInstance(a1, &v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v5 = *(_QWORD *)GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v5 )
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
             v7,
             &GUID_bad82401_2721_44f9_bb91_2bb228be442f,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  return (unsigned int)v4;
}
