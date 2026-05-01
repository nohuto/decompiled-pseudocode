/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VActionCenterExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18021E720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18021CE4C (--$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<ActionCenterExperienceManagerFactory,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<ActionCenterExperienceManagerFactory,IUnknown,>(&v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v8)(v8, a3, a4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  return (unsigned int)v6;
}
