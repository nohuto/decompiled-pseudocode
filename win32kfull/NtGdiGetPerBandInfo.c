/*
 * XREFs of NtGdiGetPerBandInfo @ 0x1C027B040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C0278984 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, ULONG64 a2)
{
  ULONG64 v3; // rbx
  unsigned int PerBandInfo; // r8d
  _BYTE *v5; // rdx
  _PERBANDINFO v7; // [rsp+20h] [rbp-28h] BYREF

  memset(&v7, 0, sizeof(v7));
  if ( a2 )
  {
    v3 = a2 & 3;
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(_PERBANDINFO *)a2;
  }
  else
  {
    v3 = 0LL;
  }
  PerBandInfo = GreGetPerBandInfo(a1, &v7);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
  {
    if ( v3 )
      ExRaiseDatatypeMisalignment();
    v5 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[19] = v5[19];
    *(_PERBANDINFO *)a2 = v7;
  }
  return PerBandInfo;
}
