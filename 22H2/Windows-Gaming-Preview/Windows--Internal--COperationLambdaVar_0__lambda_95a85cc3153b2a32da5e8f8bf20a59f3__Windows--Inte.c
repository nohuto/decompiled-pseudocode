/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_95a85cc3153b2a32da5e8f8bf20a59f3__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x18001F850
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_95a85cc3153b2a32da5e8f8bf20a59f3__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()(
                           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
