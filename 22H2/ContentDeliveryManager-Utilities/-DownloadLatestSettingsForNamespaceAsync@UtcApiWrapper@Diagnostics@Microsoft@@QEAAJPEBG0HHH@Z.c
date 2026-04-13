/*
 * XREFs of ?DownloadLatestSettingsForNamespaceAsync@UtcApiWrapper@Diagnostics@Microsoft@@QEAAJPEBG0HHH@Z @ 0x1800AD008
 * Callers:
 *     ?DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ @ 0x180010460 (-DownloadLatestUtcSettings@FeatureManager@ContentManagement@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall Microsoft::Diagnostics::UtcApiWrapper::DownloadLatestSettingsForNamespaceAsync(
        Microsoft::Diagnostics::UtcApiWrapper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+40h] [rbp-28h]

  v6 = 0;
  v5 = 0;
  v4 = 0;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 5u, 0LL, *((_QWORD *)this + 1), a2, a3, v4, v5, v6);
}
