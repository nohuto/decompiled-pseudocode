/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056290
 * Callers:
 *     <none>
 * Callees:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___ @ 0x180053220 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180053384 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180054EC4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _lambda_45f761d2d247477984b20cf6ec7ae807_::operator() @ 0x180055DB4 (_lambda_45f761d2d247477984b20cf6ec7ae807_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  CWin32ApplicationView *v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+28h] [rbp-18h]
  void **v11; // [rsp+38h] [rbp-8h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  IUnknown **p_punk; // [rsp+80h] [rbp+40h] BYREF

  v6 = 0;
  *a3 = 0LL;
  punk = 0LL;
  p_punk = &punk;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v13);
  if ( v13 )
    lambda_45f761d2d247477984b20cf6ec7ae807_::operator()((__int64 **)&p_punk, v13);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v13);
  v9 = this;
  v10 = (__int128)*a2;
  v11 = a3;
  v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f92d1ded2f5a789bc6502d5fa6951919___(
         punk,
         (__int64)this,
         &v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&punk);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v6;
}
