/*
 * XREFs of PpmHeteroUpdateHgsConfiguration @ 0x14038F314
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpmEventHgsHardwareTable @ 0x140597E5C (PpmEventHgsHardwareTable.c)
 *     PPmHeteroHgsUpdateOrderValue @ 0x14059C04C (PPmHeteroHgsUpdateOrderValue.c)
 */

char PpmHeteroUpdateHgsConfiguration()
{
  char v0; // bl
  unsigned int i; // edi
  __int64 v3; // r9
  __int64 Prcb; // rax
  _BYTE *v5; // r8
  __int64 v6; // rcx
  unsigned __int16 *v7; // rcx
  char v8; // bl
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-D8h]
  unsigned __int16 *v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  __int16 v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+4Ah] [rbp-BEh]
  __int16 v17; // [rsp+4Eh] [rbp-BAh]
  _DWORD v18[68]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v19[68]; // [rsp+168h] [rbp+60h] BYREF
  _DWORD v20[68]; // [rsp+278h] [rbp+170h] BYREF
  _DWORD v21[68]; // [rsp+388h] [rbp+280h] BYREF
  _DWORD v22[68]; // [rsp+498h] [rbp+390h] BYREF
  _DWORD v23[68]; // [rsp+5A8h] [rbp+4A0h] BYREF

  memset(v19, 0, 0x108uLL);
  memset(v23, 0, 0x108uLL);
  v0 = 0;
  v16 = 0;
  v17 = 0;
  memset(&v18[2], 0, 0x100uLL);
  LODWORD(v11) = 0;
  memset(&v21[2], 0, 0x100uLL);
  memset(v20, 0, 0x108uLL);
  memset(v22, 0, 0x108uLL);
  if ( PpmHeteroHgsEnabled )
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered) )
    {
      v12 = __readmsr(0x1B1u);
      if ( (v12 & 0x4000000) != 0 )
      {
        v18[0] = 2097153;
        PpmHeteroHgsPopulated = 1;
        memset(&v18[1], 0, 0x104uLL);
        KiCopyAffinityEx((__int64)v18, 0x20u, (unsigned __int16 *)&PpmCheckRegistered);
        for ( i = 0; i < *((_DWORD *)PpmHeteroCapability + 1); ++i )
        {
          v19[0] = 2097153;
          memset(&v19[1], 0, 0x104uLL);
          v20[0] = 2097153;
          memset(&v20[1], 0, 0x104uLL);
          v23[0] = 2097153;
          memset(&v23[1], 0, 0x104uLL);
          v22[0] = 2097153;
          memset(&v22[1], 0, 0x104uLL);
          v21[0] = 2097153;
          memset(&v21[1], 0, 0x104uLL);
          v14 = qword_140C0BD78[0];
          v15 = 0;
          v13 = (unsigned __int16 *)&PpmCheckRegistered;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
          {
            Prcb = KeGetPrcb(v11);
            v5 = (_BYTE *)(PpmHeteroHgsCapabilityBits * i + *(unsigned __int16 *)(Prcb + 34122) + PpmHeteroHgsTableEntry);
            v6 = *(_QWORD *)(Prcb + 34128);
            *(_BYTE *)(v6 + 4LL * i + 6) = *v5;
            *(_BYTE *)(v6 + 4LL * i + 7) = v5[1];
            if ( *v5 && v5[1] )
            {
              KeAddProcessorAffinityEx((unsigned __int16 *)v23, v11);
              v7 = (unsigned __int16 *)v22;
            }
            else
            {
              KeAddProcessorAffinityEx((unsigned __int16 *)v19, v11);
              v7 = (unsigned __int16 *)v20;
            }
            KeAddProcessorAffinityEx(v7, v11);
          }
          LOBYTE(v3) = 1;
          v8 = PPmHeteroHgsUpdateOrderValue(v22, v20, i, v3) | v0;
          v0 = PPmHeteroHgsUpdateOrderValue(v23, v19, i, 0LL) | v8;
          KiAndAffinityEx((unsigned __int16 *)v20, (unsigned __int16 *)v19, v21, HIWORD(v21[0]));
          KiAndAffinityEx((unsigned __int16 *)v18, (unsigned __int16 *)v21, v18, HIWORD(v18[0]));
        }
        v14 = qword_140C0BD78[0];
        v15 = 0;
        v13 = (unsigned __int16 *)&PpmCheckRegistered;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, &v13) )
        {
          v9 = KeGetPrcb(v11);
          v10 = KeCheckProcessorAffinityEx((unsigned __int16 *)v18, v11);
          if ( *(_BYTE *)(v9 + 34124) != v10 )
          {
            v0 = 1;
            *(_BYTE *)(v9 + 34124) = v10;
          }
        }
        PpmEventHgsHardwareTable(0LL);
        v12 = __readmsr(0x1B1u) & 0xFFFFFFFFFBFFFFFFuLL;
        __writemsr(0x1B1u, v12);
      }
    }
  }
  return v0;
}
