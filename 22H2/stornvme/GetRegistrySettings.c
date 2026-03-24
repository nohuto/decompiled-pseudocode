/*
 * XREFs of GetRegistrySettings @ 0x1C001CF78
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001E16C (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C001E338 (UlongToHex.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // eax
  void *v4; // r10
  char *v5; // rax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  void *v21; // rsi
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  void *v25; // rcx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  int v43; // r8d
  int v44; // r8d
  _BYTE v46[4]; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v47; // [rsp+54h] [rbp-5h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v49; // [rsp+5Ch] [rbp+3h] BYREF
  void *v50; // [rsp+60h] [rbp+7h] BYREF
  char v51[32]; // [rsp+68h] [rbp+Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v51, "VEN_vvvv&DEV_dddd&REV_rr");
  v48 = 512;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 100) = -1;
    *(_DWORD *)(a1 + 104) = -1;
    *(_DWORD *)(a1 + 116) = -1;
    v3 = *(_DWORD *)(a1 + 56) & 0xFFFFFFE8;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 16711680;
    *(_DWORD *)(a1 + 56) = v3 | 8;
    *(_DWORD *)(a1 + 132) = -694967296;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 60) = 1823LL;
    *(_QWORD *)(a1 + 76) = 0x4000LL;
    *(_QWORD *)(a1 + 108) = 0LL;
    *(_QWORD *)(a1 + 124) = 0LL;
    *(_DWORD *)(a1 + 88) = 50;
    *(_DWORD *)(a1 + 92) = 3000;
    *(_DWORD *)(a1 + 96) = 1000;
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = 100;
    *(_DWORD *)(a1 + 136) = 600000000;
    *(_BYTE *)(a1 + 144) = 0;
    v1 = StorPortAllocateRegistryBuffer(a1, &v48);
    v50 = (void *)v1;
    if ( v1 )
    {
      UlongToHex(&v51[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex(&v51[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex(&v51[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      v5 = v51;
      v6 = 0;
      v7 = 29;
      do
      {
        if ( !*v5 )
          break;
        ++v6;
        ++v5;
      }
      while ( v6 < 0x1D );
      v49 = v48;
      if ( v6 < 0x1D )
        v7 = v6;
      NVMeZeroMemory(v4, v48);
      v47 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v8,
                     (unsigned int)&v50,
                     (__int64)&v48,
                     (__int64)&v49,
                     (__int64)v51,
                     v7,
                     (__int64)&v47);
      v46[0] = v1;
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v47;
        if ( v47 )
        {
          if ( v47 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 32) = v1;
        }
      }
      if ( v50 )
      {
        v49 = v48;
        NVMeZeroMemory(v50, v48);
        v47 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v9,
                       (unsigned int)&v50,
                       (__int64)&v48,
                       (__int64)&v49,
                       (__int64)v51,
                       v7,
                       (__int64)&v47);
        v46[0] = v1;
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v47;
          if ( v47 )
            *(_DWORD *)(a1 + 36) = v47;
        }
        if ( v50 )
        {
          v49 = v48;
          NVMeZeroMemory(v50, v48);
          v47 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v10,
                         (unsigned int)&v50,
                         (__int64)&v48,
                         (__int64)&v49,
                         (__int64)v51,
                         v7,
                         (__int64)&v47);
          v46[0] = v1;
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v47;
            if ( v47 )
              *(_WORD *)(a1 + 40) = v47;
          }
          if ( v50 )
          {
            v49 = v48;
            NVMeZeroMemory(v50, v48);
            v47 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v11,
                           (unsigned int)&v50,
                           (__int64)&v48,
                           (__int64)&v49,
                           (__int64)v51,
                           v7,
                           (__int64)&v47);
            v46[0] = v1;
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v47;
              if ( v47 )
                *(_WORD *)(a1 + 42) = v47;
            }
            if ( v50 )
            {
              v49 = v48;
              NVMeZeroMemory(v50, v48);
              v47 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v12,
                             (unsigned int)&v50,
                             (__int64)&v48,
                             (__int64)&v49,
                             (__int64)v51,
                             v7,
                             (__int64)&v47);
              v46[0] = v1;
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v47;
                if ( v47 )
                  *(_BYTE *)(a1 + 44) = v47;
              }
              if ( v50 )
              {
                v49 = v48;
                NVMeZeroMemory(v50, v48);
                v47 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v13,
                               (unsigned int)&v50,
                               (__int64)&v48,
                               (__int64)&v49,
                               (__int64)v51,
                               v7,
                               (__int64)&v47);
                v46[0] = v1;
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v47;
                  if ( v47 )
                    *(_BYTE *)(a1 + 45) = v47;
                }
                if ( v50 )
                {
                  v49 = v48;
                  NVMeZeroMemory(v50, v48);
                  v47 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v14,
                                 (unsigned int)&v50,
                                 (__int64)&v48,
                                 (__int64)&v49,
                                 (__int64)v51,
                                 v7,
                                 (__int64)&v47);
                  v46[0] = v1;
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v47;
                    if ( v47 )
                      *(_BYTE *)(a1 + 46) = v47;
                  }
                  if ( v50 )
                  {
                    v49 = v48;
                    NVMeZeroMemory(v50, v48);
                    v47 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v15,
                                   (unsigned int)&v50,
                                   (__int64)&v48,
                                   (__int64)&v49,
                                   (__int64)v51,
                                   v7,
                                   (__int64)&v47);
                    v46[0] = v1;
                    if ( (_BYTE)v1 == 1 && v47 )
                      *(_DWORD *)(a1 + 56) |= 2u;
                    if ( v50 )
                    {
                      v49 = v48;
                      NVMeZeroMemory(v50, v48);
                      v47 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v16,
                                     (unsigned int)&v50,
                                     (__int64)&v48,
                                     (__int64)&v49,
                                     (__int64)v51,
                                     v7,
                                     (__int64)&v47);
                      v46[0] = v1;
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v47;
                        if ( v47 )
                        {
                          if ( v47 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 47) = v1;
                        }
                      }
                      if ( v50 )
                      {
                        v49 = v48;
                        NVMeZeroMemory(v50, v48);
                        v47 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v17,
                                       (unsigned int)&v50,
                                       (__int64)&v48,
                                       (__int64)&v49,
                                       (__int64)v51,
                                       v7,
                                       (__int64)&v47);
                        v46[0] = v1;
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v47;
                          if ( v47 )
                            *(_DWORD *)(a1 + 48) = v47;
                        }
                        if ( v50 )
                        {
                          v49 = v48;
                          NVMeZeroMemory(v50, v48);
                          v47 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v18,
                                         (unsigned int)&v50,
                                         (__int64)&v48,
                                         (__int64)&v49,
                                         (__int64)v51,
                                         v7,
                                         (__int64)&v47);
                          v46[0] = v1;
                          if ( (_BYTE)v1 == 1 && v47 )
                            *(_DWORD *)(a1 + 56) |= 1u;
                          if ( v50 )
                          {
                            v49 = v48;
                            NVMeZeroMemory(v50, v48);
                            v47 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v19,
                                           (unsigned int)&v50,
                                           (__int64)&v48,
                                           (__int64)&v49,
                                           (__int64)v51,
                                           v7,
                                           (__int64)&v47);
                            v46[0] = v1;
                            if ( (_BYTE)v1 == 1 && v47 )
                              *(_DWORD *)(a1 + 56) |= 4u;
                            if ( v50 )
                            {
                              v49 = v48;
                              NVMeZeroMemory(v50, v48);
                              v47 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v20,
                                             (unsigned int)&v50,
                                             (__int64)&v48,
                                             (__int64)&v49,
                                             (__int64)v51,
                                             v7,
                                             (__int64)&v47);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v47;
                                if ( v47 )
                                {
                                  LODWORD(v1) = v47 & 0x1F;
                                  *(_DWORD *)(a1 + 60) = v1;
                                }
                              }
                              v21 = v50;
                              if ( v50 )
                              {
                                v46[0] = 0;
                                if ( !(unsigned int)StorPortExtendedFunction(97LL, a1, 0LL, v46) && v46[0] )
                                {
                                  *(_DWORD *)(a1 + 80) = 2;
LABEL_71:
                                  v49 = v48;
                                  NVMeZeroMemory(v21, v48);
                                  v47 = 0;
                                  v46[0] = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"DiagnosticFlags",
                                             v23,
                                             (unsigned int)&v50,
                                             (__int64)&v48,
                                             (__int64)&v49,
                                             (__int64)v51,
                                             v7,
                                             (__int64)&v47);
                                  if ( v46[0] == 1 && v47 )
                                    *(_DWORD *)(a1 + 108) = v47;
                                  LODWORD(v1) = *(_DWORD *)(a1 + 108);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 112) = 0x100000;
                                  if ( v50 )
                                  {
                                    v49 = v48;
                                    NVMeZeroMemory(v50, v48);
                                    v47 = 0;
                                    v46[0] = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"LogSize",
                                               v24,
                                               (unsigned int)&v50,
                                               (__int64)&v48,
                                               (__int64)&v49,
                                               (__int64)v51,
                                               v7,
                                               (__int64)&v47);
                                    if ( v46[0] == 1 && v47 )
                                      *(_DWORD *)(a1 + 112) = v47 << 10;
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 112);
                                    v25 = v50;
                                    *(_DWORD *)(a1 + 3860) = *(_DWORD *)(a1 + 112) / 0x18u;
                                    if ( v25 )
                                    {
                                      v49 = v48;
                                      NVMeZeroMemory(v25, v48);
                                      v47 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v26,
                                                     (unsigned int)&v50,
                                                     (__int64)&v48,
                                                     (__int64)&v49,
                                                     (__int64)v51,
                                                     v7,
                                                     (__int64)&v47);
                                      v46[0] = v1;
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v47;
                                        if ( v47 )
                                        {
                                          LODWORD(v1) = v47 << 10;
                                          if ( ((v47 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 52) = v1;
                                        }
                                      }
                                      if ( v50 )
                                      {
                                        v49 = v48;
                                        NVMeZeroMemory(v50, v48);
                                        v47 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v27,
                                                       (unsigned int)&v50,
                                                       (__int64)&v48,
                                                       (__int64)&v49,
                                                       (__int64)v51,
                                                       v7,
                                                       (__int64)&v47);
                                        v46[0] = v1;
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v47;
                                          *(_DWORD *)(a1 + 84) = v47;
                                        }
                                        if ( v50 )
                                        {
                                          v49 = v48;
                                          NVMeZeroMemory(v50, v48);
                                          v47 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v28,
                                                         (unsigned int)&v50,
                                                         (__int64)&v48,
                                                         (__int64)&v49,
                                                         (__int64)v51,
                                                         v7,
                                                         (__int64)&v47);
                                          v46[0] = v1;
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v47;
                                            *(_DWORD *)(a1 + 88) = v47;
                                          }
                                          if ( v50 )
                                          {
                                            v49 = v48;
                                            NVMeZeroMemory(v50, v48);
                                            v47 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v29,
                                                           (unsigned int)&v50,
                                                           (__int64)&v48,
                                                           (__int64)&v49,
                                                           (__int64)v51,
                                                           v7,
                                                           (__int64)&v47);
                                            v46[0] = v1;
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v47;
                                              *(_DWORD *)(a1 + 92) = v47;
                                            }
                                            if ( v50 )
                                            {
                                              v49 = v48;
                                              NVMeZeroMemory(v50, v48);
                                              v47 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v30,
                                                             (unsigned int)&v50,
                                                             (__int64)&v48,
                                                             (__int64)&v49,
                                                             (__int64)v51,
                                                             v7,
                                                             (__int64)&v47);
                                              v46[0] = v1;
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v47;
                                                *(_DWORD *)(a1 + 96) = v47;
                                              }
                                              if ( v50 )
                                              {
                                                v49 = v48;
                                                NVMeZeroMemory(v50, v48);
                                                v47 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v31,
                                                               (unsigned int)&v50,
                                                               (__int64)&v48,
                                                               (__int64)&v49,
                                                               (__int64)v51,
                                                               v7,
                                                               (__int64)&v47);
                                                v46[0] = v1;
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v47;
                                                  *(_DWORD *)(a1 + 100) = v47;
                                                }
                                                if ( v50 )
                                                {
                                                  v49 = v48;
                                                  NVMeZeroMemory(v50, v48);
                                                  v47 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v32,
                                                                 (unsigned int)&v50,
                                                                 (__int64)&v48,
                                                                 (__int64)&v49,
                                                                 (__int64)v51,
                                                                 v7,
                                                                 (__int64)&v47);
                                                  v46[0] = v1;
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v47;
                                                    *(_DWORD *)(a1 + 104) = v47;
                                                  }
                                                  if ( v50 )
                                                  {
                                                    v49 = v48;
                                                    NVMeZeroMemory(v50, v48);
                                                    v47 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v33,
                                                                   (unsigned int)&v50,
                                                                   (__int64)&v48,
                                                                   (__int64)&v49,
                                                                   (__int64)v51,
                                                                   v7,
                                                                   (__int64)&v47);
                                                    v46[0] = v1;
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v47;
                                                      *(_DWORD *)(a1 + 116) = v47;
                                                    }
                                                    if ( v50 )
                                                    {
                                                      v49 = v48;
                                                      NVMeZeroMemory(v50, v48);
                                                      v47 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (unsigned int)"BypassSgl",
                                                                     v34,
                                                                     (unsigned int)&v50,
                                                                     (__int64)&v48,
                                                                     (__int64)&v49,
                                                                     (__int64)v51,
                                                                     v7,
                                                                     (__int64)&v47);
                                                      v46[0] = v1;
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 56) ^ (8 * v47)) & 8;
                                                        *(_DWORD *)(a1 + 56) ^= v1;
                                                      }
                                                      if ( v50 )
                                                      {
                                                        v49 = v48;
                                                        NVMeZeroMemory(v50, v48);
                                                        v47 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (unsigned int)"TestMdlDataBufferOffsetInBytes",
                                                                       v35,
                                                                       (unsigned int)&v50,
                                                                       (__int64)&v48,
                                                                       (__int64)&v49,
                                                                       (__int64)v51,
                                                                       v7,
                                                                       (__int64)&v47);
                                                        v46[0] = v1;
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v47;
                                                          *(_DWORD *)(a1 + 120) = v47;
                                                        }
                                                        if ( v50 )
                                                        {
                                                          v49 = v48;
                                                          NVMeZeroMemory(v50, v48);
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (unsigned int)"UseDumpPointers",
                                                                         v36,
                                                                         (unsigned int)&v50,
                                                                         (__int64)&v48,
                                                                         (__int64)&v49,
                                                                         (__int64)v51,
                                                                         v7,
                                                                         0LL);
                                                          v46[0] = v1;
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 56) |= 0x10u;
                                                          if ( v50 )
                                                          {
                                                            v49 = v48;
                                                            NVMeZeroMemory(v50, v48);
                                                            v47 = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (unsigned int)"ReservedQueuePairCount",
                                                                           v37,
                                                                           (unsigned int)&v50,
                                                                           (__int64)&v48,
                                                                           (__int64)&v49,
                                                                           (__int64)v51,
                                                                           v7,
                                                                           (__int64)&v47);
                                                            v46[0] = v1;
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v47 - 1;
                                                              if ( v47 - 1 <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 124) = v47;
                                                            }
                                                            if ( v50 )
                                                            {
                                                              v49 = v48;
                                                              NVMeZeroMemory(v50, v48);
                                                              v47 = 0;
                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                             a1,
                                                                             (unsigned int)"NvmeTestSwitch",
                                                                             v38,
                                                                             (unsigned int)&v50,
                                                                             (__int64)&v48,
                                                                             (__int64)&v49,
                                                                             (__int64)v51,
                                                                             v7,
                                                                             (__int64)&v47);
                                                              v46[0] = v1;
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = v47;
                                                                if ( v47 )
                                                                  *(_DWORD *)(a1 + 128) = v47;
                                                              }
                                                              if ( v50 )
                                                              {
                                                                v49 = v48;
                                                                NVMeZeroMemory(v50, v48);
                                                                v47 = 0;
                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                               a1,
                                                                               (unsigned int)"IoQueuePercentageInPollingMode",
                                                                               v39,
                                                                               (unsigned int)&v50,
                                                                               (__int64)&v48,
                                                                               (__int64)&v49,
                                                                               (__int64)v51,
                                                                               v7,
                                                                               (__int64)&v47);
                                                                v46[0] = v1;
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( v47 <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = v47;
                                                                    *(_DWORD *)(a1 + 64) = (unsigned __int16)v47;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 64) = 100;
                                                                  }
                                                                }
                                                                if ( v50 )
                                                                {
                                                                  v49 = v48;
                                                                  NVMeZeroMemory(v50, v48);
                                                                  v47 = 0;
                                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                 a1,
                                                                                 (unsigned int)"IoPollingInterval",
                                                                                 v40,
                                                                                 (unsigned int)&v50,
                                                                                 (__int64)&v48,
                                                                                 (__int64)&v49,
                                                                                 (__int64)v51,
                                                                                 v7,
                                                                                 (__int64)&v47);
                                                                  v46[0] = v1;
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( v47 < 0x186A0 )
                                                                      LODWORD(v1) = v47;
                                                                    *(_DWORD *)(a1 + 68) = v1;
                                                                  }
                                                                  if ( v50 )
                                                                  {
                                                                    v49 = v48;
                                                                    NVMeZeroMemory(v50, v48);
                                                                    v47 = 0;
                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                   a1,
                                                                                   (unsigned int)"IoCompletionCapInDPC",
                                                                                   v41,
                                                                                   (unsigned int)&v50,
                                                                                   (__int64)&v48,
                                                                                   (__int64)&v49,
                                                                                   (__int64)v51,
                                                                                   v7,
                                                                                   (__int64)&v47);
                                                                    v46[0] = v1;
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = v47;
                                                                      if ( v47 )
                                                                      {
                                                                        if ( v47 > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 72) = v1;
                                                                      }
                                                                    }
                                                                    if ( v50 )
                                                                    {
                                                                      v49 = v48;
                                                                      NVMeZeroMemory(v50, v48);
                                                                      v47 = 0;
                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                     a1,
                                                                                     (unsigned int)"IoPollingSize",
                                                                                     v42,
                                                                                     (unsigned int)&v50,
                                                                                     (__int64)&v48,
                                                                                     (__int64)&v49,
                                                                                     (__int64)v51,
                                                                                     v7,
                                                                                     (__int64)&v47);
                                                                      v46[0] = v1;
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = v47;
                                                                        if ( v47 )
                                                                          *(_DWORD *)(a1 + 76) = v47;
                                                                      }
                                                                      if ( v50 )
                                                                      {
                                                                        v49 = v48;
                                                                        NVMeZeroMemory(v50, v48);
                                                                        v47 = 0;
                                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                       a1,
                                                                                       (unsigned int)"ErrorEtwThrottleInterval",
                                                                                       v43,
                                                                                       (unsigned int)&v50,
                                                                                       (__int64)&v48,
                                                                                       (__int64)&v49,
                                                                                       (__int64)v51,
                                                                                       v7,
                                                                                       (__int64)&v47);
                                                                        v46[0] = v1;
                                                                        if ( (_BYTE)v1 == 1 )
                                                                        {
                                                                          LODWORD(v1) = v47;
                                                                          if ( v47 )
                                                                          {
                                                                            if ( v47 > 0xD693A400 )
                                                                              LODWORD(v1) = -694967296;
                                                                            *(_DWORD *)(a1 + 132) = v1;
                                                                          }
                                                                        }
                                                                        if ( v50 )
                                                                        {
                                                                          v49 = v48;
                                                                          NVMeZeroMemory(v50, v48);
                                                                          v47 = 0;
                                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                         a1,
                                                                                         (unsigned int)"ShutdownTimeoutForSurpriseRemove",
                                                                                         v44,
                                                                                         (unsigned int)&v50,
                                                                                         (__int64)&v48,
                                                                                         (__int64)&v49,
                                                                                         (__int64)v51,
                                                                                         v7,
                                                                                         (__int64)&v47);
                                                                          v46[0] = v1;
                                                                          if ( (_BYTE)v1 == 1 )
                                                                          {
                                                                            LOBYTE(v1) = v47;
                                                                            if ( v47 )
                                                                            {
                                                                              if ( v47 > 0xFF )
                                                                                LOBYTE(v1) = -1;
                                                                              *(_BYTE *)(a1 + 144) = v1;
                                                                            }
                                                                          }
                                                                          if ( v50 )
                                                                            LOBYTE(v1) = StorPortFreeRegistryBuffer(a1);
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return v1;
                                }
                                v49 = v48;
                                NVMeZeroMemory(v21, v48);
                                v47 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v22,
                                               (unsigned int)&v50,
                                               (__int64)&v48,
                                               (__int64)&v49,
                                               (__int64)v51,
                                               v7,
                                               (__int64)&v47);
                                v46[0] = v1;
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v47;
                                  if ( v47 < 6 )
                                    *(_DWORD *)(a1 + 80) = v47;
                                }
                                v21 = v50;
                                if ( v50 )
                                  goto LABEL_71;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
