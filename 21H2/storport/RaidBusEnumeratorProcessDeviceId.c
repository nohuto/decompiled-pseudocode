/*
 * XREFs of RaidBusEnumeratorProcessDeviceId @ 0x1C0014610
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C00073CC (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessDeviceId(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, unsigned int *a5)
{
  unsigned int v7; // r8d
  __int64 v8; // rdx
  unsigned int v9; // ecx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_DWORD *)(a2 + 60);
  else
    v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = (*(unsigned __int8 *)(v8 + 3) | (*(unsigned __int8 *)(v8 + 2) << 8)) + 4;
  if ( v9 > 0xFFFF )
    v9 = 0xFFFF;
  if ( v9 > v7 )
  {
    *a4 = 1;
    *a5 = v9;
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(a3 + 64) = v8;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
    return 0LL;
  }
}
