/*
 * XREFs of bUMPD @ 0x1C014321C
 * Callers:
 *     NtGdiExtEscape @ 0x1C00108F0 (NtGdiExtEscape.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall bUMPD(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 48LL) + 40LL) & 0x8000;
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
