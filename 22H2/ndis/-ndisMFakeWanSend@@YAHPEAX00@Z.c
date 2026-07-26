/*
 * XREFs of ?ndisMFakeWanSend@@YAHPEAX00@Z @ 0x1C006F830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(_QWORD *a1, void *a2, void *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi

  v3 = a1[2];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x4Du,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      v3);
  v4 = -1073741823;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 540);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x4Eu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      v3);
  return v4;
}
