/*
 * XREFs of MiVaToSoftwareWsle @ 0x14065F900
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToSoftwareWsle(__int64 a1, unsigned __int64 a2)
{
  return qword_140C66CA8[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
