/*
 * XREFs of ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x180081090
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800810AC (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 */

__int64 __fastcall UniqueExtendedExecutionSession::OnSessionRevoked(
        UniqueExtendedExecutionSession *this,
        struct IInspectable *a2,
        struct Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *a3)
{
  UniqueExtendedExecutionSession::CloseSession(this, 1);
  return 0LL;
}
