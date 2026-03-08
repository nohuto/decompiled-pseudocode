/*
 * XREFs of HsaBuildInterruptRemappingEntry @ 0x14052D004
 * Callers:
 *     HsaBuildDeviceTableEntry @ 0x14052CE78 (HsaBuildDeviceTableEntry.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14052F02C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaBuildInterruptRemappingEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // eax
  __int64 v5; // rcx

  result = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( *(_DWORD *)(a1 + 176) )
  {
    *(_QWORD *)(a3 + 16) = 0x2000000000000001LL;
    _BitScanForward(&v4, *(_DWORD *)(a2 + 20));
    result = (2LL * (v4 & 0xF)) | 0x2000000000000001LL;
    *(_QWORD *)(a3 + 16) = result;
    v5 = result | *(_QWORD *)a2 & 0xFFFFFFFFFFFC0LL | 0x400000000000000LL;
  }
  else
  {
    v5 = 0x1000000000000020LL;
  }
  *(_QWORD *)(a3 + 16) = v5;
  return result;
}
