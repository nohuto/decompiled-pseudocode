/*
 * XREFs of ?FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@PEAUHMONITOR__@@@Z @ 0x1800BEDC4
 * Callers:
 *     ?EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindowData@@PEAPEAUSecondaryRepresentation@1@@Z @ 0x1800BEA6C (-EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindow.c)
 *     ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800BEDFC (-RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

struct CPerMonitorWindowRepresentation::SecondaryRepresentation *__fastcall CPerMonitorWindowRepresentation::FindSecondaryRepresentation(
        CPerMonitorWindowRepresentation *this,
        HMONITOR a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // r11

  v2 = *((_DWORD *)this + 14);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 4);
    while ( **(HMONITOR **)(v5 + 8LL * v4) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CPerMonitorWindowRepresentation::SecondaryRepresentation *)v3;
    }
    return *(struct CPerMonitorWindowRepresentation::SecondaryRepresentation **)(v5 + 8LL * v4);
  }
  return (struct CPerMonitorWindowRepresentation::SecondaryRepresentation *)v3;
}
