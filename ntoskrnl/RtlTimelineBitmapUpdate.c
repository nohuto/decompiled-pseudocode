/*
 * XREFs of RtlTimelineBitmapUpdate @ 0x140250EE0
 * Callers:
 *     KiRetireDpcList @ 0x1402521E0 (KiRetireDpcList.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406FF3F8 (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlTimelineBitmapUpdate(unsigned int *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // [rsp+8h] [rbp+8h]

  v3 = *a1;
  if ( a2 > v3 )
  {
    LODWORD(v6) = a2;
    if ( a2 - v3 >= 0x20 )
      v5 = 1;
    else
      v5 = (a1[1] << (a2 - v3)) | 1;
    HIDWORD(v6) = v5;
    *(_QWORD *)a1 = v6;
  }
  else
  {
    v4 = v3 - a2;
    if ( v4 < 0x20 )
      a1[1] |= 1 << v4;
  }
}
