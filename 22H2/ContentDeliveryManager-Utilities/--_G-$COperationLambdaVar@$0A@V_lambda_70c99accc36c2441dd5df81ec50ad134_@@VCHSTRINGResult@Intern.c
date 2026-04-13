/*
 * XREFs of ??_G?$COperationLambdaVar@$0A@V_lambda_70c99accc36c2441dd5df81ec50ad134_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D980
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CFA9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_70c99accc36c2441dd5df81ec50ad134_,Windows::Internal::CHSTRINGResult,>::`scalar deleting destructor'(
        HSTRING *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  WindowsDeleteString(a1[2]);
  a1[2] = 0LL;
  *a1 = (HSTRING)&Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
