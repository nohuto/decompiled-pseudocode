/*
 * XREFs of KiMaskInterruptInternal @ 0x1403AEACC
 * Callers:
 *     KeMaskInterrupt @ 0x14028E5A8 (KeMaskInterrupt.c)
 *     KiMaskInterruptDpc @ 0x140571080 (KiMaskInterruptDpc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiMaskInterruptInternal(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // r8
  char *v5; // r8
  char *v6; // rcx

  v3 = KeGetCurrentPrcb()->InterruptObject[(unsigned __int8)off_140C01A28[0]()];
  if ( !v3 )
    return 2147483685LL;
  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v3
       + 10) == KiChainedDispatch )
  {
    v5 = (char *)(v3 + 2);
    v6 = v5;
    while ( (*((_DWORD *)v6 + 24) & 1) != 0 )
    {
      v6 = *(char **)v6;
      if ( v6 == v5 )
        return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B80[0])(a2, 0LL);
    }
  }
  else if ( (v3[26] & 1) != 0 )
  {
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C01B80[0])(a2, 0LL);
  }
  return 296LL;
}
