/*
 * XREFs of NtGdiGetCurrentDpiInfo @ 0x1C003CB50
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfo @ 0x1C003CBE8 (DrvGetCurrentDpiInfo.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall NtGdiGetCurrentDpiInfo(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  _OWORD v5[6]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, sizeof(v5));
  result = DrvGetCurrentDpiInfo(a1, v5);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v5[0];
    a2[1] = v5[1];
    a2[2] = v5[2];
    a2[3] = v5[3];
    a2[4] = v5[4];
    a2[5] = v5[5];
  }
  return result;
}
