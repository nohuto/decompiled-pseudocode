/*
 * XREFs of NdisMSetAttributes @ 0x1C00727E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C012D0F0 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(void *a1, NDIS_HANDLE MiniportAdapterContext, char a3, NDIS_INTERFACE_TYPE a4)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Cu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  NdisMSetAttributesEx(a1, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Du,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
}
