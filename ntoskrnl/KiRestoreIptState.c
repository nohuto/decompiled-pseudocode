/*
 * XREFs of KiRestoreIptState @ 0x140570600
 * Callers:
 *     KeRestoreSupervisorState @ 0x14036A0E0 (KeRestoreSupervisorState.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14057007C (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KiRestoreThreadIptState @ 0x140570700 (KiRestoreThreadIptState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiRestoreIptState(unsigned __int64 *a1)
{
  char v1; // r10
  int v2; // r9d
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // r8
  unsigned int i; // r11d
  unsigned __int64 result; // rax

  v1 = 0;
  if ( KiXSaveAreaLength )
  {
    v2 = KiIptMsrMask;
    v3 = a1 + 1;
    if ( (KiIptMsrMask & 2) != 0 )
    {
      __writemsr(0x560u, *v3);
      v3 = a1 + 2;
    }
    if ( (KiIptMsrMask & 4) != 0 )
      __writemsr(0x561u, *v3++);
    __writemsr(0x571u, *v3);
    v4 = v3 + 1;
    if ( (KiIptMsrMask & 0x10) != 0 )
      __writemsr(0x572u, *v4++);
    for ( i = 1409; i < 0x589; i += 2 )
    {
      if ( !_bittest(&v2, (unsigned __int8)(v1 + 5)) )
        break;
      __writemsr(i - 1, *v4);
      __writemsr(i, v4[1]);
      v4 += 2;
      ++v1;
    }
    result = *a1;
    __writemsr(0x570u, *a1);
  }
  return result;
}
