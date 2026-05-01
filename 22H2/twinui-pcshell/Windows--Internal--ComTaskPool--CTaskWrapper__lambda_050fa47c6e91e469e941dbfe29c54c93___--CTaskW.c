/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93_____lambda_050fa47c6e91e469e941dbfe29c54c93___ @ 0x18009CC74
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___ @ 0x18009D8B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800A08C4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1800A08C4.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93_____lambda_050fa47c6e91e469e941dbfe29c54c93___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 16,
    a2);
  *(_QWORD *)(a1 + 16) = &CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(a2 + 312);
  *(_BYTE *)(a1 + 329) = *(_BYTE *)(a2 + 313);
  *(_QWORD *)a1 = off_1805019D0;
  return a1;
}
