/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B4938
 * Callers:
 *     _SystemCursorController::OnStubDisconnected_::_1_::catch$22 @ 0x18004E4C0 (_SystemCursorController--OnStubDisconnected_--_1_--catch$22.c)
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$8 @ 0x18004F074 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$8.c)
 *     _GameInputProcessor::OnDeviceAttach_::_1_::catch$19 @ 0x180051F82 (_GameInputProcessor--OnDeviceAttach_--_1_--catch$19.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$2 @ 0x18005218C (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$2.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$6 @ 0x1800BC705 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$6.c)
 *     _PenDeviceManager::AttachRIMDevice_::_1_::catch$63 @ 0x18012F32F (_PenDeviceManager--AttachRIMDevice_--_1_--catch$63.c)
 *     _SystemCursorController::AttachApplication_::_1_::catch$23 @ 0x18013BB8F (_SystemCursorController--AttachApplication_--_1_--catch$23.c)
 *     _SystemCursorController::CreateCursorForDevice_::_1_::catch$0 @ 0x18013BD77 (_SystemCursorController--CreateCursorForDevice_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCursorShapeAnimation_::_1_::catch$0 @ 0x18013BFC6 (_SystemCursorController--CreateCursorShapeAnimation_--_1_--catch$0.c)
 *     _SystemCursorController::CreateCustomCursorShapeAnimation_::_1_::catch$26 @ 0x18013C398 (_SystemCursorController--CreateCustomCursorShapeAnimation_--_1_--catch$26.c)
 *     _SystemCursorController::DestroyCursorShapeAnimation_::_1_::catch$6 @ 0x18013C710 (_SystemCursorController--DestroyCursorShapeAnimation_--_1_--catch$6.c)
 *     _SystemCursorController::DestroyCustomCursorShapeAnimation_::_1_::catch$27 @ 0x18013CAFD (_SystemCursorController--DestroyCustomCursorShapeAnimation_--_1_--catch$27.c)
 *     _SystemCursorController::EnsureServiceAndRegisterClient_::_1_::catch$26 @ 0x18013CDB0 (_SystemCursorController--EnsureServiceAndRegisterClient_--_1_--catch$26.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::catch$2 @ 0x1801512A5 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801512A5.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4____::_1_::catch$0 @ 0x180151301 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180151301.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8____::_1_::catch$0 @ 0x18015135D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_18015135D.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493____::_1_::catch$0 @ 0x1801513B9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801513B9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_5739becc0e2e945e4356c3e82057fc5a____::_1_::catch$0 @ 0x180151415 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_180151415.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping_::_1_::catch$0 @ 0x180159B1D (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialNodeMapping_--_1_--catch$0.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::catch$2 @ 0x180159BC3 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--catch.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::catch$2 @ 0x1801692D9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801692D9.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::catch$2 @ 0x18016AB05 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDe_ea_18016AB05.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800739B8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
