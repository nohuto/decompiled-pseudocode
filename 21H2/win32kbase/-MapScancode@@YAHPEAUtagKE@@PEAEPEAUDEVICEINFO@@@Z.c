/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01B02B4
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01B08E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01AFFD0 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, char *a2, struct DEVICEINFO *a3)
{
  int v3; // eax
  __int16 *i; // rcx
  __int16 v9; // ax

  v3 = (int)qword_1C0258050;
  if ( qword_1C0258050 )
    v3 = qword_1C0258050(a1, a2);
  if ( v3 )
    return 1LL;
  if ( gpScancodeMap )
  {
    for ( i = (__int16 *)(gpScancodeMap + 12); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == (*(unsigned __int8 *)a1 | (unsigned __int16)((unsigned __int8)*a2 << 8)) )
      {
        v9 = *i;
        *(_BYTE *)a1 = *i;
        *a2 = HIBYTE(v9);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
