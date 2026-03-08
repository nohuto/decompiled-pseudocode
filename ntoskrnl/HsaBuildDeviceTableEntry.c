/*
 * XREFs of HsaBuildDeviceTableEntry @ 0x14052CE78
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x14052E900 (HsaUpdateDeviceTableEntry.c)
 *     HsaInitializeIommu @ 0x140A961E0 (HsaInitializeIommu.c)
 * Callees:
 *     HsaBuildInterruptRemappingEntry @ 0x14052D004 (HsaBuildInterruptRemappingEntry.c)
 */

unsigned __int64 __fastcall HsaBuildDeviceTableEntry(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        char a5,
        __int16 a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD *v11; // r10
  __int64 *v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 result; // rax

  v11 = (_QWORD *)a11;
  *(_OWORD *)a11 = 0LL;
  *(_OWORD *)(a11 + 16) = 0LL;
  if ( a3 )
  {
    v13 = (__int64 *)(a11 + 8);
    if ( a5 )
      *v13 = 0x100000000LL;
    v14 = *(_QWORD *)a11 & 0xE1FFFFFFFFFFFFFFuLL | ((a2 & 7) << 58) | 0x180000000000000LL;
    *(_WORD *)(a11 + 10) = a2 >> 3;
    v15 = (a2 << 24) ^ (*v13 ^ (a2 << 24)) & 0x7FFFFFFFFFFLL;
    *(_QWORD *)a11 = v14;
    *v13 = v15;
    if ( a4 )
      *(_QWORD *)a11 = v14 | 0x40000000000000LL;
  }
  *(_WORD *)(a11 + 8) = a6;
  if ( a7 )
    *(_QWORD *)a11 = *(_QWORD *)a11 & 0xFFF00000000009FFuLL | ((a8 & 0xFFFFFFFFFFLL) << 12) | 0x800;
  if ( a9 )
    *(_QWORD *)(a11 + 16) = *a9;
  else
    HsaBuildInterruptRemappingEntry(a1, a10, a11);
  *v11 |= 0x6000000000000003uLL;
  v11[1] = v11[1] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
  v11[2] |= 0x200000000000000uLL;
  result = v11[2] | 0xC100000000000000uLL;
  v11[2] = result;
  return result;
}
