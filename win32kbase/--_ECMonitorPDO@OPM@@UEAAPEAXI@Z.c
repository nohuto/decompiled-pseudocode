/*
 * XREFs of ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1C017EA50
 * Callers:
 *     <none>
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0096938 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CMonitorPDO@OPM@@UEAA@XZ @ 0x1C017EA10 (--1CMonitorPDO@OPM@@UEAA@XZ.c)
 */

char *__fastcall OPM::CMonitorPDO::`vector deleting destructor'(char *P, char a2)
{
  int v3; // esi
  char *v4; // rdi

  v3 = a2 & 1;
  if ( (a2 & 2) != 0 )
  {
    v4 = P - 8;
    `vector destructor iterator'(
      P,
      72LL,
      *((_QWORD *)P - 1),
      (void (__fastcall *)(char *))OPM::CMonitorPDO::~CMonitorPDO);
    if ( v3 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4D504F47u);
    }
    return v4;
  }
  else
  {
    OPM::CMonitorPDO::~CMonitorPDO((OPM::CMonitorPDO *)P, a2);
    if ( v3 && P )
      ExFreePoolWithTag(P, 0x4D504F47u);
    return P;
  }
}
