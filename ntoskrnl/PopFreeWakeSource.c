/*
 * XREFs of PopFreeWakeSource @ 0x1409842D8
 * Callers:
 *     PopUnlinkWakeSources @ 0x140984A4C (PopUnlinkWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140A9E094 (PopProcessDeviceWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140A9E248 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExDeleteWakeTimerInfo @ 0x1406091B4 (ExDeleteWakeTimerInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeSource(_DWORD *P)
{
  int v2; // ecx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = P[4];
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 2) <= 1 )
    {
      v3 = (void *)*((_QWORD *)P + 3);
      if ( v3 )
        ExDeleteWakeTimerInfo(v3);
    }
  }
  else
  {
    v4 = (void *)*((_QWORD *)P + 4);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x206D654Du);
    v5 = (void *)*((_QWORD *)P + 6);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x206D654Du);
    v6 = (void *)*((_QWORD *)P + 8);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x206D654Du);
    v7 = (void *)*((_QWORD *)P + 13);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x206D654Du);
  }
  ExFreePoolWithTag(P, 0x206D654Du);
}
