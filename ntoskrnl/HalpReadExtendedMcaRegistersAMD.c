/*
 * XREFs of HalpReadExtendedMcaRegistersAMD @ 0x1405040C4
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14050135C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpReadExtendedMcaRegistersAMD(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // ebp

  v4 = 0;
  if ( HalpMcaScalableRasSupported )
  {
    v7 = 16 * a2;
    *(_QWORD *)(a4 + 72) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                             a3,
                             (unsigned int)(16 * a2 - 1073733627),
                             0LL);
    *(_QWORD *)(a4 + 80) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                             a3,
                             (unsigned int)(v7 - 1073733626),
                             0LL);
    *(_QWORD *)(a4 + 88) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                             a3,
                             (unsigned int)(v7 - 1073733628),
                             0LL);
    *(_QWORD *)(a4 + 96) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                             a3,
                             (unsigned int)(v7 - 1073733624),
                             0LL);
    *(_QWORD *)(a4 + 104) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                              a3,
                              (unsigned int)(v7 - 1073733623),
                              0LL);
    *(_QWORD *)(a4 + 112) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                              a3,
                              (unsigned int)(v7 - 1073733622),
                              0LL);
    *(_QWORD *)(a4 + 120) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                              a3,
                              (unsigned int)(v7 - 1073733621),
                              0LL);
    *(_QWORD *)(a4 + 128) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                              a3,
                              (unsigned int)(v7 - 1073733620),
                              0LL);
    *(_QWORD *)(a4 + 136) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))HalpWheaReadMsr)(
                              a3,
                              (unsigned int)(v7 - 1073733619),
                              0LL);
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000007 )
    {
      _RAX = 2147483655LL;
      __asm { cpuid }
      v4 = _RBX;
    }
    *(_QWORD *)(a4 + 144) = v4;
    *(_DWORD *)(a4 + 64) = 10;
  }
}
