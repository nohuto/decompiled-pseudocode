/*
 * XREFs of ??1_lambda_70c99accc36c2441dd5df81ec50ad134_@@QEAA@XZ @ 0x180012030
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800D13F9 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_70c99accc36c2441dd5df81ec50ad134____::_1_::dtor$2 @ 0x1800D1A38 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800D1A38.c)
 * Callees:
 *     <none>
 */

void __fastcall _lambda_70c99accc36c2441dd5df81ec50ad134_::~_lambda_70c99accc36c2441dd5df81ec50ad134_(HSTRING *this)
{
  WindowsDeleteString(this[1]);
  this[1] = 0LL;
}
