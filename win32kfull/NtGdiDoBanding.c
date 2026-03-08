/*
 * XREFs of NtGdiDoBanding @ 0x1C027ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0277D50 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall NtGdiDoBanding(HDC a1, int a2, ULONG64 a3, ULONG64 a4)
{
  unsigned int v6; // r10d
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  struct _POINTL v10; // [rsp+20h] [rbp-18h] BYREF
  struct tagSIZE v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v6 = GreDoBanding(a1, a2, &v10, &v11);
  if ( v6 )
  {
    if ( (a3 & 3) != 0 )
      goto LABEL_9;
    v7 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[7] = v7[7];
    *(struct _POINTL *)a3 = v10;
    if ( (a4 & 3) != 0 )
LABEL_9:
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    *(struct tagSIZE *)a4 = v11;
  }
  return v6;
}
