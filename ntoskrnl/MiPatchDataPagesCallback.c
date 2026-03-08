/*
 * XREFs of MiPatchDataPagesCallback @ 0x140A37AC0
 * Callers:
 *     <none>
 * Callees:
 *     MiSetImageProtection @ 0x1402E3BB8 (MiSetImageProtection.c)
 *     RtlAreBitsClearEx @ 0x1402E4560 (RtlAreBitsClearEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     RtlAreBitsSetEx @ 0x14045B6E0 (RtlAreBitsSetEx.c)
 */

__int64 __fastcall MiPatchDataPagesCallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _BYTE *a6)
{
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned __int64 v9; // r15

  *a6 = 0;
  if ( !a1 )
    return 0LL;
  v7 = a2 >> 12;
  v8 = a2 >> 12;
  v9 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)a4) >> 12;
  if ( RtlAreBitsSetEx((unsigned __int64 *)(a1 + 48), a2 >> 12, (unsigned int)v9) )
  {
    *a6 = 1;
    if ( !RtlAreBitsSetEx((unsigned __int64 *)(a1 + 64), v8, (unsigned int)v9) )
    {
      MiSetImageProtection(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 48LL) + (v7 << 12), (_DWORD)v9 << 12);
      RtlSetBitsEx(a1 + 64, v8, (unsigned int)v9);
    }
    return 0LL;
  }
  return !RtlAreBitsClearEx((unsigned __int64 *)(a1 + 48), v8, (unsigned int)v9) ? 0xC000007B : 0;
}
