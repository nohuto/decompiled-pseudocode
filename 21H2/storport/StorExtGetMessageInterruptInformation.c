/*
 * XREFs of StorExtGetMessageInterruptInformation @ 0x1C0038C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall StorExtGetMessageInterruptInformation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int8 *v4; // r9

  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 0;
  if ( !*(_BYTE *)(v3 + 4513) )
    return 0;
  v4 = *(unsigned __int8 **)(v3 + 4496);
  if ( a2 >= *((_DWORD *)v4 + 1) )
    return 0;
  *(_DWORD *)a3 = a2;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)&v4[48 * a2 + 32];
  *(_QWORD *)(a3 + 8) = *(_QWORD *)&v4[48 * a2 + 8];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)&v4[48 * a2 + 36];
  *(_DWORD *)(a3 + 20) = *v4;
  *(_DWORD *)(a3 + 24) = *(_DWORD *)&v4[48 * a2 + 44];
  return 1;
}
