/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0096938
 * Callers:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0096730 (--1CRIMBase@@UEAA@XZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1C017EA50 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
