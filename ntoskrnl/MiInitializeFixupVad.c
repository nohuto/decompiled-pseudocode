/*
 * XREFs of MiInitializeFixupVad @ 0x14072E14C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiInitializePrivateFixupBitmap @ 0x14072E1E0 (MiInitializePrivateFixupBitmap.c)
 */

unsigned __int64 __fastcall MiInitializeFixupVad(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  int v6; // ecx
  unsigned __int64 result; // rax
  int v8; // ecx

  v4 = **(_QWORD ***)(a1 + 72);
  *(_QWORD *)(a1 + 144) = -4096 * ((__int64)(*(_QWORD *)(a1 + 80) - v4[17]) >> 3)
                        + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)
                        - *(_QWORD *)(*v4 + 32LL);
  *(_DWORD *)(a1 + 136) = a2;
  v5 = MiInitializePrivateFixupBitmap(a1 + 152, v4, a2);
  v6 = v5;
  result = v5 >> 31;
  v8 = (*(_DWORD *)(a1 + 52) ^ v6) & 0x7FFFFFFF;
  *(_BYTE *)(a1 + 34) = result;
  *(_DWORD *)(a1 + 52) ^= v8;
  *(_DWORD *)(a1 + 48) |= 0x400000u;
  return result;
}
