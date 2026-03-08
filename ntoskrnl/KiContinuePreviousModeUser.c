/*
 * XREFs of KiContinuePreviousModeUser @ 0x1403647F4
 * Callers:
 *     KiContinueEx @ 0x140364520 (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextXStateCetU @ 0x1403649C8 (KeVerifyContextXStateCetU.c)
 *     RtlInitializeExtendedContext @ 0x140364A10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140364A90 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x140364D9C (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x1403653D4 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x140416130 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1407EDC30 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rax
  void *v10; // rsp
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  __int64 v15; // [rsp+20h] [rbp-10h]
  unsigned int v16; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp+4h] BYREF
  __int64 v18; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp+10h] BYREF
  int v20; // [rsp+60h] [rbp+30h]

  v5 = a2;
  v18 = 0LL;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  v16 = *(_DWORD *)(a1 + 48);
  if ( a4 > 0xFF )
  {
    *(_OWORD *)v19 = *(_OWORD *)a4;
    *(_QWORD *)&v19[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v19[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v19 >= 4u || *(_OWORD *)&v19[8] != 0LL )
      return 3221225485LL;
  }
  else
  {
    memset(v19, 0, sizeof(v19));
  }
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&v16, a2);
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v16, &v17);
    if ( (int)result >= 0 )
    {
      v9 = v17 + 15LL;
      if ( v9 <= v17 )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v16, 0, v17);
      result = RtlInitializeExtendedContext(&v16, v16, &v18);
      if ( (int)result >= 0 )
      {
        LOBYTE(v11) = 1;
        result = RtlpReadExtendedContext(v12, v11, v18, v16, a1, 0LL);
        if ( (int)result >= 0 )
        {
          v18 = 0LL;
          result = KeVerifyContextXStateCetU(CurrentThread, &v16, &v18);
          if ( (int)result >= 0 )
          {
            result = KeVerifyContextRecord(
                       (_DWORD)CurrentThread,
                       (unsigned int)&v16,
                       v13,
                       (unsigned int)v19,
                       (__int64)&v18);
            if ( (int)result >= 0 )
            {
              ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
              if ( ExtendedFeatureDisableMask
                && (v20 & 0x100040) == 0x100040
                && (ExtendedFeatureDisableMask & *(_QWORD *)((_BYTE *)&v16 + SLODWORD(STACK[0x510]) + 1232)) != 0 )
              {
                return 3221225485LL;
              }
              else
              {
                LOBYTE(v15) = 1;
                KeContextToKframes(a3, v5, (unsigned int)&v16, v16, v15);
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
