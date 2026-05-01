/*
 * XREFs of _lambda_e323e37eb6a7c14a55f28542b981c184_::operator() @ 0x1803B1A74
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1803B2CD0 (-MoveNext@-$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x1803B08FC (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d.c)
 *     _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x1803B198C (_lambda_60cffcfe8b0715df3af987611c13edce_--operator().c)
 */

__int64 __fastcall lambda_e323e37eb6a7c14a55f28542b981c184_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  _BYTE ***v2; // rax
  unsigned int *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v5[0] = a1[1];
  v5[1] = &v6;
  v2 = (_BYTE ***)a1[2];
  v6 = v1;
  v3 = (unsigned int *)(v1 + 40);
  if ( *(_BYTE *)(v1 + 56) )
    return lambda_60cffcfe8b0715df3af987611c13edce_::operator()((__int64)v5, *v3, (_DWORD *)(v1 + 40));
  else
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___(
             (volatile signed __int32 *)v3,
             (__int64)v5,
             v2);
}
