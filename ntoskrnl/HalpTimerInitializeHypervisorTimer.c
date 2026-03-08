/*
 * XREFs of HalpTimerInitializeHypervisorTimer @ 0x1403B13E0
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x14028EF10 (HalpInterruptGsiToLine.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpTimerInitialize @ 0x140377220 (HalpTimerInitialize.c)
 *     HalpFindTimer @ 0x140377CA8 (HalpFindTimer.c)
 *     HalpInterruptApplyOverrides @ 0x140379748 (HalpInterruptApplyOverrides.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetRemappedLineState @ 0x140502790 (HalpInterruptSetRemappedLineState.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140508738 (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerTestHypervisorTimer @ 0x140508908 (HalpTimerTestHypervisorTimer.c)
 *     HalpHvBuildDeviceId @ 0x140A92814 (HalpHvBuildDeviceId.c)
 */

char __fastcall HalpTimerInitializeHypervisorTimer(__int64 a1, __int64 a2)
{
  __int64 v7; // rbx
  char v8; // r15
  unsigned int *v9; // r12
  int v10; // esi
  int v11; // r14d
  _DWORD *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  _BYTE v19[4]; // [rsp+38h] [rbp-39h] BYREF
  int v20; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  int v22; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v24[6]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v25; // [rsp+70h] [rbp-1h]
  __int64 v26; // [rsp+78h] [rbp+7h]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  __int64 v28; // [rsp+88h] [rbp+17h]
  __int128 v29; // [rsp+90h] [rbp+1Fh] BYREF

  v23 = 0LL;
  v29 = 0LL;
  v21 = 0LL;
  v19[0] = 0;
  LOBYTE(_RAX) = HalpIsPartitionCpuManager(a1, a2);
  if ( (_BYTE)_RAX )
  {
    if ( qword_140C62160 )
    {
      _RAX = 1073741830LL;
      __asm { cpuid }
      if ( (_RAX & 0x100) != 0 )
      {
        _RAX = (__int64)HalpFindTimer(3, 32, 24576, 3840, 0);
        v7 = _RAX;
        if ( _RAX )
        {
          LODWORD(_RAX) = HalpTimerInitialize(_RAX);
          if ( (int)_RAX >= 0 )
          {
            *(_DWORD *)(v7 + 184) |= 4u;
            HalpHypervisorHpet = v7;
            LODWORD(_RAX) = HalpTimerTestHypervisorTimer(v7, v19);
            HalpHypervisorHpet = 0LL;
            if ( (int)_RAX >= 0 )
            {
              v8 = 0;
              v9 = *(unsigned int **)(v7 + 72);
              v10 = 1;
              v11 = 0;
              if ( v19[0] )
              {
                v12 = *(_DWORD **)(v7 + 288);
                v13 = v12[1];
                HIWORD(v20) = *v12 >> 8;
                BYTE1(v20) = *(_BYTE *)v12;
                LOBYTE(v20) = (8 * *((_BYTE *)v12 + 4)) | (v13 >> 5) & 7;
                HalpHvBuildDeviceId(&v20, v12 + 2, 0LL, &v23);
              }
              else
              {
                v15 = *(_DWORD *)(v7 + 224);
                if ( (v15 & 0x200) != 0 )
                {
                  LODWORD(_RAX) = HalpInterruptGsiToLine(*(unsigned int *)(v7 + 88), &v21);
                  if ( (int)_RAX < 0 )
                    return _RAX;
                  v8 = *((_BYTE *)v9 + 4);
                }
                else if ( (v15 & 0x100) != 0 )
                {
                  v16 = *(_DWORD *)(v7 + 84);
                  if ( v16 >= 8 )
                  {
                    LODWORD(v21) = 45057;
                    v16 -= 8;
                  }
                  else
                  {
                    LODWORD(v21) = 45056;
                  }
                  HIDWORD(v21) = v16;
                }
                v20 = *(_DWORD *)(v7 + 96);
                v22 = *(_DWORD *)(v7 + 92);
                HalpInterruptApplyOverrides(&v21, &v22, &v20);
                v10 = v20;
                v11 = v22;
                v23 = 0x8000000000000000uLL;
                LOBYTE(v23) = v21;
              }
              LOBYTE(v14) = v8;
              LODWORD(_RAX) = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64, __int128 *))qword_140C62160)(
                                *v9,
                                v23,
                                v14,
                                &v29);
              if ( (int)_RAX >= 0 )
              {
                if ( v19[0] )
                {
                  *(_DWORD *)(v7 + 236) = 0;
                  *(_DWORD *)(v7 + 232) = DWORD2(v29);
                  *(_QWORD *)(v7 + 240) = HIDWORD(v29);
                  v17 = *(_DWORD *)(v7 + 184) | 0x10;
                }
                else
                {
                  v24[4] = -1;
                  v26 = *((_QWORD *)&v29 + 1);
                  v24[1] = 0;
                  v25 = 8LL;
                  v27 = 0LL;
                  v28 = 212LL;
                  v24[0] = v11;
                  v24[2] = v10;
                  v24[3] = 0;
                  v24[5] = 1;
                  LODWORD(_RAX) = HalpInterruptSetRemappedLineState(&v21, v24);
                  if ( (int)_RAX < 0 )
                    return _RAX;
                  v17 = *(_DWORD *)(v7 + 184) & 0xFFFFFFEF;
                }
                HalpHypervisorHpet = v7;
                *(_DWORD *)(v7 + 184) = v17 | 0x40;
                LOBYTE(_RAX) = HalpTimerEnableHypervisorTimer();
              }
            }
          }
        }
      }
    }
  }
  return _RAX;
}
