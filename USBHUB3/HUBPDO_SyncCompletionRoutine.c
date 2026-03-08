/*
 * XREFs of HUBPDO_SyncCompletionRoutine @ 0x1C0017650
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 */

__int64 __fastcall HUBPDO_SyncCompletionRoutine(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  int v3; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 < 0 )
  {
    v5 = *(_QWORD *)(a2 + 184);
    if ( *(_DWORD *)(v5 + 24) == 2228227 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( !*(_DWORD *)(v6 + 4) )
        *(_DWORD *)(v6 + 4) = HUBPDO_GetUSBDErrorFromNTStatus(v3);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
