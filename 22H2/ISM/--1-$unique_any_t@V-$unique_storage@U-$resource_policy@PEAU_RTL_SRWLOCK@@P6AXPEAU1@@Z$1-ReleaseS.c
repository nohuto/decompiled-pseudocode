/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001275C
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180028DD0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18003DA18 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x18003DD1C (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18003EF34 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     _NonBamoInputDeliveryServer::Create_::_1_::dtor$0 @ 0x18004EAEE (_NonBamoInputDeliveryServer--Create_--_1_--dtor$0.c)
 *     _NotifyInputSinkRemoved_::_1_::dtor$0 @ 0x18004FF52 (_NotifyInputSinkRemoved_--_1_--dtor$0.c)
 *     _NotifyInputSinkParented_::_1_::dtor$0 @ 0x180050150 (_NotifyInputSinkParented_--_1_--dtor$0.c)
 *     _InputStateManager::OnDeviceAttach_::_1_::dtor$0 @ 0x180050EE2 (_InputStateManager--OnDeviceAttach_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToEnabledStateChanges_::_1_::dtor$0 @ 0x180051B4D (_wil--details--FeatureStateManager--SubscribeToEnabledStateChanges_--_1_--dtor$0.c)
 *     _wil::details_abi::FeatureStateData::RecordFeatureUsage_::_1_::dtor$0 @ 0x180066746 (_wil--details_abi--FeatureStateData--RecordFeatureUsage_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x180069768 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::On3DCompositorStateChanged_::_1_::dtor$0 @ 0x18006986B (_MPC3DStateHelper--On3DCompositorStateChanged_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::Register3DCompositor_::_1_::dtor$0 @ 0x1800699B7 (_MPC3DStateHelper--Register3DCompositor_--_1_--dtor$0.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800878A0 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::OnDeviceRemoved_::_1_::dtor$0 @ 0x1800DC166 (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeObjectDevice--OnDeviceRemoved_.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects_::_1_::dtor$0 @ 0x1800DCD3D (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeObjectDevice--StartListeningTo.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StopListeningToSpatialObjects_::_1_::dtor$0 @ 0x1800DD019 (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeObjectDevice--StopListeningToS.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_4f2ec4d072da510feb5622880d58a28d____::_1_::dtor$0 @ 0x18014F365 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_4f2ec4d072da51.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_50bd02ca6402c71620c7421f2ab232fc____::_1_::dtor$0 @ 0x18014F419 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_50bd02ca6402c7.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20____::_1_::dtor$0 @ 0x18014F4CD (_Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_81a1f3a0b00899.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c____::_1_::dtor$0 @ 0x18014F581 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ae4609f332701f.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ed6a7cdcc708de0d2bf982d91253a679____::_1_::dtor$0 @ 0x18014F63E (_Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ed6a7cdcc708de.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285____::_1_::dtor$0 @ 0x180151299 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic.c)
 *     __lambda_fa6b829d8739de4b5d4653aa8baa7884_::operator()_::_1_::dtor$1 @ 0x180158E9A (__lambda_fa6b829d8739de4b5d4653aa8baa7884_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::AddHandleOpenCloseCallbacks_::_1_::dtor$0 @ 0x180159430 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--AddHandleOpenCloseCallbacks_--_.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::AddNodePoseValidityChangedCallback_::_1_::dtor$2 @ 0x18015956A (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--AddNodePoseValidi_ea_18015956A.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::AddNodePropertiesUpdatedCallback_::_1_::dtor$1 @ 0x180159825 (_Windows--Internal--Holographic--DynamicNodeSourceBase--AddNodePropertiesUpdatedCal_ea_180159825.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$0 @ 0x180159BB7 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_--_1_--dtor$.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$0 @ 0x18015A45E (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::InvokeNodePropertiesUpdatedCallback_::_1_::dtor$1 @ 0x180160287 (_Windows--Internal--Holographic--DynamicNodeSourceBase--InvokeNodePropertiesUpdated_ea_180160287.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$0 @ 0x180161CA0 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$1 @ 0x180161CAC (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$2 @ 0x180161CB8 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2_::_1_::dtor$5 @ 0x180163123 (_Windows--Internal--Holographic--SpatialGraphDriverClient--PropertyUpdatedListenerT_ea_180163123.c)
 *     _Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveNodePropertiesUpdatedCallback_::_1_::dtor$2 @ 0x1801639CE (_Windows--Internal--Holographic--DynamicNodeSourceBase--RemoveNodePropertiesUpdated_ea_1801639CE.c)
 *     _Windows::Internal::Holographic::NodePropertyCache::SetValue_::_1_::dtor$0 @ 0x180164103 (_Windows--Internal--Holographic--NodePropertyCache--SetValue_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::PropertyCache::SetValue_::_1_::dtor$0 @ 0x180164262 (_Windows--Internal--Holographic--PropertyCache--SetValue_--_1_--dtor$0.c)
 *     _ThreadHelpers::ChainedThreadpoolWorker::Then_::_1_::dtor$0 @ 0x180166561 (_ThreadHelpers--ChainedThreadpoolWorker--Then_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::UpdateMostRecentNodePoseValidity_::_1_::dtor$0 @ 0x180166CA8 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--UpdateMostRecentNodePoseValidi.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786____::_1_::dtor$0 @ 0x1801692CD (_Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal_ea_1801692CD.c)
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping_::_1_::dtor$0 @ 0x18016AAF9 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddSpatialInteractionDeviceIdMapping.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
