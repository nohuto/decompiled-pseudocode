/*
 * XREFs of NtDxgkConnectDoorbell @ 0x1C031BA00
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1C0312C4C (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkConnectDoorbell(struct DXGHWQUEUE **a1, __int64 a2, __int64 a3)
{
  return DxgkConnectDoorbellInternal(a1, a2, a3);
}
