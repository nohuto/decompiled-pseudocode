/*
 * XREFs of ?QueryInterface@ShellFeedsExperienceManagerImpl@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801655B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellFeedsExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::QueryInterface(
           a1 - 24,
           a2,
           a3);
}
