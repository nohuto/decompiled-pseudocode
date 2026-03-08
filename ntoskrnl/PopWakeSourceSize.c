/*
 * XREFs of PopWakeSourceSize @ 0x140984C8C
 * Callers:
 *     PopCopyWakeSource @ 0x1409841D4 (PopCopyWakeSource.c)
 *     PopGetWakeSource @ 0x140984368 (PopGetWakeSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopWakeSourceSize(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  _QWORD *v6; // rax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0LL;
  if ( !v1 )
    return *(unsigned __int16 *)(a1 + 24) + 10LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 12LL;
  v4 = v3 - 1;
  if ( v4 && (v5 = v4 - 1) != 0 )
  {
    if ( v5 == 1 )
      return 12LL;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 24);
    if ( v6 )
      return *v6 + 8LL;
    else
      return 48LL;
  }
  return v2;
}
