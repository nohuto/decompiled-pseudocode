/*
 * XREFs of GetRegistrySettings @ 0x1C000B42C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 * Callees:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0001870 (ReadMultiSzRegistryValueAndCompareId.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     UlongToHex @ 0x1C000C9E8 (UlongToHex.c)
 *     ReadBinaryRegistryValue @ 0x1C000CA18 (ReadBinaryRegistryValue.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax
  void *v4; // r10
  char *v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  void *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  void *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  unsigned int v37; // r15d
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  int v51; // edx
  int v52; // r8d
  unsigned int v53; // esi
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  bool v61[4]; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v62; // [rsp+54h] [rbp-5h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-1h] BYREF
  unsigned int Size[3]; // [rsp+5Ch] [rbp+3h] BYREF
  char v65[32]; // [rsp+68h] [rbp+Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v65, "VEN_vvvv&DEV_dddd&REV_rr");
  v63 = 512;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 92) = -1;
    *(_DWORD *)(a1 + 108) = -1;
    *(_DWORD *)(a1 + 112) = -1;
    *(_DWORD *)(a1 + 124) = -1;
    *(_DWORD *)(a1 + 140) = -694967296;
    v3 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 48) = 0;
    *(_WORD *)(a1 + 52) = 0;
    *(_BYTE *)(a1 + 55) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 68) = 1823;
    *(_DWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 116) = 0LL;
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 136) = 1;
    *(_DWORD *)(a1 + 96) = 50;
    *(_DWORD *)(a1 + 100) = 3000;
    *(_DWORD *)(a1 + 104) = 1000;
    *(_BYTE *)(a1 + 54) = -1;
    *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFC20 | 8;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_DWORD *)(a1 + 80) = 100;
    *(_DWORD *)(a1 + 84) = 0x4000;
    *(_DWORD *)(a1 + 144) = 600000000;
    *(_WORD *)(a1 + 148) = 0;
    *(_BYTE *)(a1 + 160) = 0;
    v1 = StorPortAllocateRegistryBuffer(a1, &v63);
    *(_QWORD *)&Size[1] = v1;
    if ( v1 )
    {
      UlongToHex(&v65[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex(&v65[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex(&v65[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      v5 = v65;
      v6 = 0;
      v7 = 29;
      while ( *v5 )
      {
        ++v6;
        ++v5;
        if ( v6 >= 0x1D )
          goto LABEL_8;
      }
      v7 = v6;
LABEL_8:
      Size[0] = v63;
      NVMeZeroMemory(v4, v63);
      v62 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (__int64)"MaxTransferSize",
                     v8,
                     (char **)&Size[1],
                     &v63,
                     Size,
                     (__int64)v65,
                     v7,
                     (__int64)&v62);
      v61[0] = v1;
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v62;
        if ( v62 )
        {
          if ( v62 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 40) = v1;
        }
      }
      if ( *(_QWORD *)&Size[1] )
      {
        Size[0] = v63;
        NVMeZeroMemory(*(void **)&Size[1], v63);
        v62 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (__int64)"IoQueueDepth",
                       v9,
                       (char **)&Size[1],
                       &v63,
                       Size,
                       (__int64)v65,
                       v7,
                       (__int64)&v62);
        v61[0] = v1;
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v62;
          if ( v62 )
            *(_DWORD *)(a1 + 44) = v62;
        }
        if ( *(_QWORD *)&Size[1] )
        {
          Size[0] = v63;
          NVMeZeroMemory(*(void **)&Size[1], v63);
          v62 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (__int64)"IoSubmissionQueueCount",
                         v10,
                         (char **)&Size[1],
                         &v63,
                         Size,
                         (__int64)v65,
                         v7,
                         (__int64)&v62);
          v61[0] = v1;
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v62;
            if ( v62 )
              *(_WORD *)(a1 + 48) = v62;
          }
          if ( *(_QWORD *)&Size[1] )
          {
            Size[0] = v63;
            NVMeZeroMemory(*(void **)&Size[1], v63);
            v62 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (__int64)"IoCompletionQueueCount",
                           v11,
                           (char **)&Size[1],
                           &v63,
                           Size,
                           (__int64)v65,
                           v7,
                           (__int64)&v62);
            v61[0] = v1;
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v62;
              if ( v62 )
                *(_WORD *)(a1 + 50) = v62;
            }
            if ( *(_QWORD *)&Size[1] )
            {
              Size[0] = v63;
              NVMeZeroMemory(*(void **)&Size[1], v63);
              v62 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (__int64)"InterruptCoalescingTime",
                             v12,
                             (char **)&Size[1],
                             &v63,
                             Size,
                             (__int64)v65,
                             v7,
                             (__int64)&v62);
              v61[0] = v1;
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v62;
                if ( v62 )
                  *(_BYTE *)(a1 + 52) = v62;
              }
              if ( *(_QWORD *)&Size[1] )
              {
                Size[0] = v63;
                NVMeZeroMemory(*(void **)&Size[1], v63);
                v62 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (__int64)"InterruptCoalescingEntry",
                               v13,
                               (char **)&Size[1],
                               &v63,
                               Size,
                               (__int64)v65,
                               v7,
                               (__int64)&v62);
                v61[0] = v1;
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v62;
                  if ( v62 )
                    *(_BYTE *)(a1 + 53) = v62;
                }
                if ( *(_QWORD *)&Size[1] )
                {
                  Size[0] = v63;
                  NVMeZeroMemory(*(void **)&Size[1], v63);
                  v62 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (__int64)"ArbitrationBurst",
                                 v14,
                                 (char **)&Size[1],
                                 &v63,
                                 Size,
                                 (__int64)v65,
                                 v7,
                                 (__int64)&v62);
                  v61[0] = v1;
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v62;
                    if ( v62 )
                      *(_BYTE *)(a1 + 54) = v62;
                  }
                  if ( *(_QWORD *)&Size[1] )
                  {
                    Size[0] = v63;
                    NVMeZeroMemory(*(void **)&Size[1], v63);
                    v62 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (__int64)"ContiguousMemoryFromAnyNode",
                                   v15,
                                   (char **)&Size[1],
                                   &v63,
                                   Size,
                                   (__int64)v65,
                                   v7,
                                   (__int64)&v62);
                    v61[0] = v1;
                    if ( (_BYTE)v1 == 1 && v62 )
                      *(_DWORD *)(a1 + 64) |= 2u;
                    if ( *(_QWORD *)&Size[1] )
                    {
                      Size[0] = v63;
                      NVMeZeroMemory(*(void **)&Size[1], v63);
                      v62 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (__int64)"ShutdownTimeout",
                                     v16,
                                     (char **)&Size[1],
                                     &v63,
                                     Size,
                                     (__int64)v65,
                                     v7,
                                     (__int64)&v62);
                      v61[0] = v1;
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v62;
                        if ( v62 )
                        {
                          if ( v62 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 55) = v1;
                        }
                      }
                      if ( *(_QWORD *)&Size[1] )
                      {
                        Size[0] = v63;
                        NVMeZeroMemory(*(void **)&Size[1], v63);
                        v62 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (__int64)"DeallocateMaxLbaCount",
                                       v17,
                                       (char **)&Size[1],
                                       &v63,
                                       Size,
                                       (__int64)v65,
                                       v7,
                                       (__int64)&v62);
                        v61[0] = v1;
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v62;
                          if ( v62 )
                            *(_DWORD *)(a1 + 56) = v62;
                        }
                        if ( *(_QWORD *)&Size[1] )
                        {
                          Size[0] = v63;
                          NVMeZeroMemory(*(void **)&Size[1], v63);
                          v62 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)"DisableDeallocate",
                                         v18,
                                         (char **)&Size[1],
                                         &v63,
                                         Size,
                                         (__int64)v65,
                                         v7,
                                         (__int64)&v62);
                          v61[0] = v1;
                          if ( (_BYTE)v1 == 1 && v62 )
                            *(_DWORD *)(a1 + 64) |= 1u;
                          if ( *(_QWORD *)&Size[1] )
                          {
                            Size[0] = v63;
                            NVMeZeroMemory(*(void **)&Size[1], v63);
                            v62 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)"ControllerBasicInit",
                                           v19,
                                           (char **)&Size[1],
                                           &v63,
                                           Size,
                                           (__int64)v65,
                                           v7,
                                           (__int64)&v62);
                            v61[0] = v1;
                            if ( (_BYTE)v1 == 1 && v62 )
                              *(_DWORD *)(a1 + 64) |= 4u;
                            if ( *(_QWORD *)&Size[1] )
                            {
                              Size[0] = v63;
                              NVMeZeroMemory(*(void **)&Size[1], v63);
                              v62 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (__int64)"AsyncEventMask",
                                             v20,
                                             (char **)&Size[1],
                                             &v63,
                                             Size,
                                             (__int64)v65,
                                             v7,
                                             (__int64)&v62);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v62;
                                if ( v62 )
                                {
                                  LODWORD(v1) = v62 & 0x1F;
                                  *(_DWORD *)(a1 + 68) = v1;
                                }
                              }
                              v21 = *(void **)&Size[1];
                              if ( *(_QWORD *)&Size[1] )
                              {
                                v61[0] = 0;
                                if ( !(unsigned int)StorPortExtendedFunction(97LL, a1, 0LL, v61) && v61[0] )
                                {
                                  *(_DWORD *)(a1 + 88) = 2;
LABEL_71:
                                  Size[0] = v63;
                                  NVMeZeroMemory(v21, v63);
                                  v62 = 0;
                                  v61[0] = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (__int64)"DiagnosticFlags",
                                             v23,
                                             (char **)&Size[1],
                                             &v63,
                                             Size,
                                             (__int64)v65,
                                             v7,
                                             (__int64)&v62);
                                  if ( v61[0] && v62 )
                                    *(_DWORD *)(a1 + 116) = v62;
                                  LODWORD(v1) = *(_DWORD *)(a1 + 116);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 120) = 0x100000;
                                  if ( *(_QWORD *)&Size[1] )
                                  {
                                    Size[0] = v63;
                                    NVMeZeroMemory(*(void **)&Size[1], v63);
                                    v62 = 0;
                                    v61[0] = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (__int64)"LogSize",
                                               v24,
                                               (char **)&Size[1],
                                               &v63,
                                               Size,
                                               (__int64)v65,
                                               v7,
                                               (__int64)&v62);
                                    if ( v61[0] && v62 )
                                      *(_DWORD *)(a1 + 120) = v62 << 10;
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 120);
                                    v25 = *(void **)&Size[1];
                                    *(_DWORD *)(a1 + 3876) = *(_DWORD *)(a1 + 120) / 0x18u;
                                    if ( v25 )
                                    {
                                      Size[0] = v63;
                                      NVMeZeroMemory(v25, v63);
                                      v62 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (__int64)"IoStripeAlignment",
                                                     v26,
                                                     (char **)&Size[1],
                                                     &v63,
                                                     Size,
                                                     (__int64)v65,
                                                     v7,
                                                     (__int64)&v62);
                                      v61[0] = v1;
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v62;
                                        if ( v62 )
                                        {
                                          LODWORD(v1) = v62 << 10;
                                          if ( ((v62 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 60) = v1;
                                        }
                                      }
                                      if ( *(_QWORD *)&Size[1] )
                                      {
                                        Size[0] = v63;
                                        NVMeZeroMemory(*(void **)&Size[1], v63);
                                        v62 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (__int64)"MedPowerFxIdleTimeout",
                                                       v27,
                                                       (char **)&Size[1],
                                                       &v63,
                                                       Size,
                                                       (__int64)v65,
                                                       v7,
                                                       (__int64)&v62);
                                        v61[0] = v1;
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v62;
                                          *(_DWORD *)(a1 + 92) = v62;
                                        }
                                        if ( *(_QWORD *)&Size[1] )
                                        {
                                          Size[0] = v63;
                                          NVMeZeroMemory(*(void **)&Size[1], v63);
                                          v62 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (__int64)"LowestPowerFxIdleTimeout",
                                                         v28,
                                                         (char **)&Size[1],
                                                         &v63,
                                                         Size,
                                                         (__int64)v65,
                                                         v7,
                                                         (__int64)&v62);
                                          v61[0] = v1;
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v62;
                                            *(_DWORD *)(a1 + 96) = v62;
                                          }
                                          if ( *(_QWORD *)&Size[1] )
                                          {
                                            Size[0] = v63;
                                            NVMeZeroMemory(*(void **)&Size[1], v63);
                                            v62 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (__int64)"MedPowerD3IdleTimeout",
                                                           v29,
                                                           (char **)&Size[1],
                                                           &v63,
                                                           Size,
                                                           (__int64)v65,
                                                           v7,
                                                           (__int64)&v62);
                                            v61[0] = v1;
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v62;
                                              *(_DWORD *)(a1 + 100) = v62;
                                            }
                                            if ( *(_QWORD *)&Size[1] )
                                            {
                                              Size[0] = v63;
                                              NVMeZeroMemory(*(void **)&Size[1], v63);
                                              v62 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (__int64)"LowestPowerD3IdleTimeout",
                                                             v30,
                                                             (char **)&Size[1],
                                                             &v63,
                                                             Size,
                                                             (__int64)v65,
                                                             v7,
                                                             (__int64)&v62);
                                              v61[0] = v1;
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v62;
                                                *(_DWORD *)(a1 + 104) = v62;
                                              }
                                              if ( *(_QWORD *)&Size[1] )
                                              {
                                                Size[0] = v63;
                                                NVMeZeroMemory(*(void **)&Size[1], v63);
                                                v62 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (__int64)"MedPowerResumeLatency",
                                                               v31,
                                                               (char **)&Size[1],
                                                               &v63,
                                                               Size,
                                                               (__int64)v65,
                                                               v7,
                                                               (__int64)&v62);
                                                v61[0] = v1;
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v62;
                                                  *(_DWORD *)(a1 + 108) = v62;
                                                }
                                                if ( *(_QWORD *)&Size[1] )
                                                {
                                                  Size[0] = v63;
                                                  NVMeZeroMemory(*(void **)&Size[1], v63);
                                                  v62 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (__int64)"LowestPowerResumeLatency",
                                                                 v32,
                                                                 (char **)&Size[1],
                                                                 &v63,
                                                                 Size,
                                                                 (__int64)v65,
                                                                 v7,
                                                                 (__int64)&v62);
                                                  v61[0] = v1;
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v62;
                                                    *(_DWORD *)(a1 + 112) = v62;
                                                  }
                                                  if ( *(_QWORD *)&Size[1] )
                                                  {
                                                    Size[0] = v63;
                                                    NVMeZeroMemory(*(void **)&Size[1], v63);
                                                    v62 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (__int64)"HostMemoryBufferBytes",
                                                                   v33,
                                                                   (char **)&Size[1],
                                                                   &v63,
                                                                   Size,
                                                                   (__int64)v65,
                                                                   v7,
                                                                   (__int64)&v62);
                                                    v61[0] = v1;
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v62;
                                                      *(_DWORD *)(a1 + 124) = v62;
                                                    }
                                                    if ( *(_QWORD *)&Size[1] )
                                                    {
                                                      Size[0] = v63;
                                                      NVMeZeroMemory(*(void **)&Size[1], v63);
                                                      v62 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (__int64)"BypassSgl",
                                                                     v34,
                                                                     (char **)&Size[1],
                                                                     &v63,
                                                                     Size,
                                                                     (__int64)v65,
                                                                     v7,
                                                                     (__int64)&v62);
                                                      v61[0] = v1;
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 64) ^ (8 * v62)) & 8;
                                                        *(_DWORD *)(a1 + 64) ^= v1;
                                                      }
                                                      if ( *(_QWORD *)&Size[1] )
                                                      {
                                                        Size[0] = v63;
                                                        NVMeZeroMemory(*(void **)&Size[1], v63);
                                                        v62 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (__int64)"TestMdlDataBufferOffsetInBytes",
                                                                       v35,
                                                                       (char **)&Size[1],
                                                                       &v63,
                                                                       Size,
                                                                       (__int64)v65,
                                                                       v7,
                                                                       (__int64)&v62);
                                                        v61[0] = v1;
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v62;
                                                          *(_DWORD *)(a1 + 128) = v62;
                                                        }
                                                        if ( *(_QWORD *)&Size[1] )
                                                        {
                                                          Size[0] = v63;
                                                          NVMeZeroMemory(*(void **)&Size[1], v63);
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (__int64)"UseDumpPointers",
                                                                         v36,
                                                                         (char **)&Size[1],
                                                                         &v63,
                                                                         Size,
                                                                         (__int64)v65,
                                                                         v7,
                                                                         0LL);
                                                          v61[0] = v1;
                                                          v37 = 16;
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 64) |= 0x10u;
                                                          if ( *(_QWORD *)&Size[1] )
                                                          {
                                                            Size[0] = v63;
                                                            NVMeZeroMemory(*(void **)&Size[1], v63);
                                                            v62 = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (__int64)"ReservedQueuePairCount",
                                                                           v38,
                                                                           (char **)&Size[1],
                                                                           &v63,
                                                                           Size,
                                                                           (__int64)v65,
                                                                           v7,
                                                                           (__int64)&v62);
                                                            v61[0] = v1;
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v62 - 1;
                                                              if ( v62 - 1 <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 132) = v62;
                                                            }
                                                            if ( *(_QWORD *)&Size[1] )
                                                            {
                                                              Size[0] = v63;
                                                              NVMeZeroMemory(*(void **)&Size[1], v63);
                                                              v62 = 0;
                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                             a1,
                                                                             (__int64)"NvmeTestSwitch",
                                                                             v39,
                                                                             (char **)&Size[1],
                                                                             &v63,
                                                                             Size,
                                                                             (__int64)v65,
                                                                             v7,
                                                                             (__int64)&v62);
                                                              v61[0] = v1;
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = v62;
                                                                if ( v62 )
                                                                  *(_DWORD *)(a1 + 136) = v62;
                                                              }
                                                              if ( *(_QWORD *)&Size[1] )
                                                              {
                                                                Size[0] = v63;
                                                                NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                v62 = 0;
                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                               a1,
                                                                               (__int64)"IoQueuePercentageInPollingMode",
                                                                               v40,
                                                                               (char **)&Size[1],
                                                                               &v63,
                                                                               Size,
                                                                               (__int64)v65,
                                                                               v7,
                                                                               (__int64)&v62);
                                                                v61[0] = v1;
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( v62 <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = v62;
                                                                    *(_DWORD *)(a1 + 72) = (unsigned __int16)v62;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 72) = 100;
                                                                  }
                                                                }
                                                                if ( *(_QWORD *)&Size[1] )
                                                                {
                                                                  Size[0] = v63;
                                                                  NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                  v62 = 0;
                                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                 a1,
                                                                                 (__int64)"IoPollingInterval",
                                                                                 v41,
                                                                                 (char **)&Size[1],
                                                                                 &v63,
                                                                                 Size,
                                                                                 (__int64)v65,
                                                                                 v7,
                                                                                 (__int64)&v62);
                                                                  v61[0] = v1;
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( v62 < 0x186A0 )
                                                                      LODWORD(v1) = v62;
                                                                    *(_DWORD *)(a1 + 76) = v1;
                                                                  }
                                                                  if ( *(_QWORD *)&Size[1] )
                                                                  {
                                                                    Size[0] = v63;
                                                                    NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                    v62 = 0;
                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                   a1,
                                                                                   (__int64)"IoCompletionCapInDPC",
                                                                                   v42,
                                                                                   (char **)&Size[1],
                                                                                   &v63,
                                                                                   Size,
                                                                                   (__int64)v65,
                                                                                   v7,
                                                                                   (__int64)&v62);
                                                                    v61[0] = v1;
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = v62;
                                                                      if ( v62 )
                                                                      {
                                                                        if ( v62 > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 80) = v1;
                                                                      }
                                                                    }
                                                                    if ( *(_QWORD *)&Size[1] )
                                                                    {
                                                                      Size[0] = v63;
                                                                      NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                      v62 = 0;
                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                     a1,
                                                                                     (__int64)"IoPollingSize",
                                                                                     v43,
                                                                                     (char **)&Size[1],
                                                                                     &v63,
                                                                                     Size,
                                                                                     (__int64)v65,
                                                                                     v7,
                                                                                     (__int64)&v62);
                                                                      v61[0] = v1;
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = v62;
                                                                        if ( v62 )
                                                                          *(_DWORD *)(a1 + 84) = v62;
                                                                      }
                                                                      if ( *(_QWORD *)&Size[1] )
                                                                      {
                                                                        Size[0] = v63;
                                                                        NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                        v62 = 0;
                                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                       a1,
                                                                                       (__int64)"ErrorEtwThrottleInterval",
                                                                                       v44,
                                                                                       (char **)&Size[1],
                                                                                       &v63,
                                                                                       Size,
                                                                                       (__int64)v65,
                                                                                       v7,
                                                                                       (__int64)&v62);
                                                                        v61[0] = v1;
                                                                        if ( (_BYTE)v1 == 1 )
                                                                        {
                                                                          LODWORD(v1) = v62;
                                                                          if ( v62 )
                                                                          {
                                                                            if ( v62 > 0xD693A400 )
                                                                              LODWORD(v1) = -694967296;
                                                                            *(_DWORD *)(a1 + 140) = v1;
                                                                          }
                                                                        }
                                                                        if ( *(_QWORD *)&Size[1] )
                                                                        {
                                                                          Size[0] = v63;
                                                                          NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                          v62 = 0;
                                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                         a1,
                                                                                         (__int64)"EnableAdditionalFLR",
                                                                                         v45,
                                                                                         (char **)&Size[1],
                                                                                         &v63,
                                                                                         Size,
                                                                                         (__int64)v65,
                                                                                         v7,
                                                                                         (__int64)&v62);
                                                                          v61[0] = v1;
                                                                          if ( (_BYTE)v1 == 1 && v62 )
                                                                            *(_DWORD *)(a1 + 64) |= 0x40u;
                                                                          if ( *(_QWORD *)&Size[1] )
                                                                          {
                                                                            Size[0] = v63;
                                                                            NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                            v62 = 0;
                                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                           a1,
                                                                                           (__int64)"ReliabilityDegraded",
                                                                                           v46,
                                                                                           (char **)&Size[1],
                                                                                           &v63,
                                                                                           Size,
                                                                                           (__int64)v65,
                                                                                           v7,
                                                                                           (__int64)&v62);
                                                                            v61[0] = v1;
                                                                            if ( (_BYTE)v1 == 1 && v62 )
                                                                              *(_DWORD *)(a1 + 64) |= 0x80u;
                                                                            if ( *(_QWORD *)&Size[1] )
                                                                            {
                                                                              Size[0] = v63;
                                                                              NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                              v62 = 0;
                                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                             a1,
                                                                                             (__int64)"ReadOnly",
                                                                                             v47,
                                                                                             (char **)&Size[1],
                                                                                             &v63,
                                                                                             Size,
                                                                                             (__int64)v65,
                                                                                             v7,
                                                                                             (__int64)&v62);
                                                                              v61[0] = v1;
                                                                              if ( (_BYTE)v1 == 1 && v62 )
                                                                                *(_DWORD *)(a1 + 64) |= 0x100u;
                                                                              if ( *(_QWORD *)&Size[1] )
                                                                              {
                                                                                Size[0] = v63;
                                                                                NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                                v62 = 0;
                                                                                v61[0] = ReadMultiSzRegistryValueAndCompareId(
                                                                                           a1,
                                                                                           (__int64)"VolatileMemoryBackupDeviceFailed",
                                                                                           v48,
                                                                                           (char **)&Size[1],
                                                                                           &v63,
                                                                                           Size,
                                                                                           (__int64)v65,
                                                                                           v7,
                                                                                           (__int64)&v62);
                                                                                if ( v61[0] && v62 )
                                                                                  *(_DWORD *)(a1 + 64) |= 0x200u;
                                                                                Size[0] = v63;
                                                                                NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                                v62 = 0;
                                                                                v61[0] = ReadMultiSzRegistryValueAndCompareId(
                                                                                           a1,
                                                                                           (__int64)"AvailableSpare",
                                                                                           v49,
                                                                                           (char **)&Size[1],
                                                                                           &v63,
                                                                                           Size,
                                                                                           (__int64)v65,
                                                                                           v7,
                                                                                           (__int64)&v62);
                                                                                if ( v61[0] && v62 )
                                                                                  *(_BYTE *)(a1 + 148) = v62;
                                                                                Size[0] = v63;
                                                                                NVMeZeroMemory(*(void **)&Size[1], v63);
                                                                                v62 = 0;
                                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                               a1,
                                                                                               (__int64)"AvailableSpareThreshold",
                                                                                               v50,
                                                                                               (char **)&Size[1],
                                                                                               &v63,
                                                                                               Size,
                                                                                               (__int64)v65,
                                                                                               v7,
                                                                                               (__int64)&v62);
                                                                                v61[0] = v1;
                                                                                if ( (_BYTE)v1 == 1 )
                                                                                {
                                                                                  LOBYTE(v1) = v62;
                                                                                  if ( v62 )
                                                                                    *(_BYTE *)(a1 + 149) = v62;
                                                                                }
                                                                                if ( *(_QWORD *)&Size[1] )
                                                                                {
                                                                                  Size[0] = v63;
                                                                                  NVMeZeroMemory(
                                                                                    *(void **)&Size[1],
                                                                                    v63);
                                                                                  LOBYTE(v1) = ReadBinaryRegistryValue(
                                                                                                 a1,
                                                                                                 v51,
                                                                                                 v52,
                                                                                                 (unsigned int)&Size[1],
                                                                                                 (__int64)&v63,
                                                                                                 (__int64)Size);
                                                                                  v61[0] = v1;
                                                                                  if ( (_BYTE)v1 == 1 )
                                                                                  {
                                                                                    v53 = Size[0];
                                                                                    if ( Size[0] )
                                                                                    {
                                                                                      if ( Size[0] < 0x10 )
                                                                                        v37 = Size[0];
                                                                                      memmove(
                                                                                        (void *)(a1 + 4097),
                                                                                        *(const void **)&Size[1],
                                                                                        v37);
                                                                                      LOBYTE(v1) = *(_BYTE *)(a1 + 4096) | 1;
                                                                                      *(_BYTE *)(a1 + 4096) = v1;
                                                                                      if ( v53 > 8 )
                                                                                      {
                                                                                        LOBYTE(v1) = v1 | 2;
                                                                                        *(_BYTE *)(a1 + 4096) = v1;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  if ( *(_QWORD *)&Size[1] )
                                                                                  {
                                                                                    Size[0] = v63;
                                                                                    NVMeZeroMemory(
                                                                                      *(void **)&Size[1],
                                                                                      v63);
                                                                                    v62 = 0;
                                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                                   a1,
                                                                                                   (__int64)"ForcedPhysicalSectorSizeInBytes",
                                                                                                   v54,
                                                                                                   (char **)&Size[1],
                                                                                                   &v63,
                                                                                                   Size,
                                                                                                   (__int64)v65,
                                                                                                   v7,
                                                                                                   (__int64)&v62);
                                                                                    v61[0] = v1;
                                                                                    if ( (_BYTE)v1 == 1 )
                                                                                    {
                                                                                      LOBYTE(v1) = v62;
                                                                                      if ( v62 )
                                                                                        *(_DWORD *)(a1 + 152) = v62;
                                                                                    }
                                                                                    if ( *(_QWORD *)&Size[1] )
                                                                                    {
                                                                                      Size[0] = v63;
                                                                                      NVMeZeroMemory(
                                                                                        *(void **)&Size[1],
                                                                                        v63);
                                                                                      v62 = 0;
                                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                                     a1,
                                                                                                     (__int64)"RetainAsyncEventControlMask",
                                                                                                     v55,
                                                                                                     (char **)&Size[1],
                                                                                                     &v63,
                                                                                                     Size,
                                                                                                     (__int64)v65,
                                                                                                     v7,
                                                                                                     (__int64)&v62);
                                                                                      v61[0] = v1;
                                                                                      if ( (_BYTE)v1 == 1 )
                                                                                      {
                                                                                        LOBYTE(v1) = v62;
                                                                                        *(_DWORD *)(a1 + 156) = v62;
                                                                                      }
                                                                                      if ( *(_QWORD *)&Size[1] )
                                                                                      {
                                                                                        Size[0] = v63;
                                                                                        NVMeZeroMemory(
                                                                                          *(void **)&Size[1],
                                                                                          v63);
                                                                                        v62 = 0;
                                                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(a1, (__int64)"ShutdownTimeoutForSurpriseRemove", v56, (char **)&Size[1], &v63, Size, (__int64)v65, v7, (__int64)&v62);
                                                                                        v61[0] = v1;
                                                                                        if ( (_BYTE)v1 == 1 )
                                                                                        {
                                                                                          LOBYTE(v1) = v62;
                                                                                          if ( v62 )
                                                                                          {
                                                                                            if ( v62 > 0xFF )
                                                                                              LOBYTE(v1) = -1;
                                                                                            *(_BYTE *)(a1 + 160) = v1;
                                                                                          }
                                                                                        }
                                                                                        if ( *(_QWORD *)&Size[1] )
                                                                                        {
                                                                                          Size[0] = v63;
                                                                                          NVMeZeroMemory(
                                                                                            *(void **)&Size[1],
                                                                                            v63);
                                                                                          v62 = 0;
                                                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(a1, (__int64)"DisableNamespacePreferredValueCheck", v57, (char **)&Size[1], &v63, Size, (__int64)v65, v7, (__int64)&v62);
                                                                                          v61[0] = v1;
                                                                                          if ( (_BYTE)v1 == 1 && v62 )
                                                                                            *(_DWORD *)(a1 + 64) |= 0x800u;
                                                                                          if ( *(_QWORD *)&Size[1] )
                                                                                          {
                                                                                            Size[0] = v63;
                                                                                            NVMeZeroMemory(
                                                                                              *(void **)&Size[1],
                                                                                              v63);
                                                                                            v62 = 0;
                                                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(a1, (__int64)"IgnoreNamespacePreferredValues", v58, (char **)&Size[1], &v63, Size, (__int64)v65, v7, (__int64)&v62);
                                                                                            v61[0] = v1;
                                                                                            if ( (_BYTE)v1 == 1 && v62 )
                                                                                              *(_DWORD *)(a1 + 64) |= 0x1000u;
                                                                                            if ( *(_QWORD *)&Size[1] )
                                                                                            {
                                                                                              Size[0] = v63;
                                                                                              NVMeZeroMemory(
                                                                                                *(void **)&Size[1],
                                                                                                v63);
                                                                                              v62 = 0;
                                                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(a1, (__int64)"EnableSingleDpcForIoCompletion", v59, (char **)&Size[1], &v63, Size, (__int64)v65, v7, (__int64)&v62);
                                                                                              v61[0] = v1;
                                                                                              if ( (_BYTE)v1 == 1 && v62 )
                                                                                                *(_DWORD *)(a1 + 64) |= 0x2000u;
                                                                                              if ( *(_QWORD *)&Size[1] )
                                                                                                LOBYTE(v1) = StorPortFreeRegistryBuffer(a1, *(_QWORD *)&Size[1]);
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
                                Size[0] = v63;
                                NVMeZeroMemory(v21, v63);
                                v62 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (__int64)"IdlePowerMode",
                                               v22,
                                               (char **)&Size[1],
                                               &v63,
                                               Size,
                                               (__int64)v65,
                                               v7,
                                               (__int64)&v62);
                                v61[0] = v1;
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v62;
                                  if ( v62 < 6 )
                                    *(_DWORD *)(a1 + 88) = v62;
                                }
                                v21 = *(void **)&Size[1];
                                if ( *(_QWORD *)&Size[1] )
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
