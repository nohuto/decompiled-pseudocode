/*
 * XREFs of StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001F5E0
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00119F0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EBB4 (RaidUnitLogSenseCommandSrb.c)
 *     McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer @ 0x1C001EEDC (McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransf.c)
 *     StorpTelemetryGetReadErrorCounter @ 0x1C001F448 (StorpTelemetryGetReadErrorCounter.c)
 *     StorpTelemetryGetStartStopCycleCounter @ 0x1C001F4A8 (StorpTelemetryGetStartStopCycleCounter.c)
 *     StorpTelemetryGetWriteErrorCounter @ 0x1C001F580 (StorpTelemetryGetWriteErrorCounter.c)
 *     memset @ 0x1C0020480 (memset.c)
 */

void __fastcall StorpTelemetrySendUnitScsiDiagnostics(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // r15
  _BYTE *PoolWithTag; // rax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // r12d
  char v13; // al
  char v14; // al
  int v15; // r8d
  unsigned int v16; // esi
  __int16 v17; // dx
  PVOID *v18; // rbx
  __int64 v19; // rdi
  int v20; // [rsp+78h] [rbp-190h]
  char v21; // [rsp+188h] [rbp-80h]
  unsigned int v22; // [rsp+18Ch] [rbp-7Ch] BYREF
  unsigned int v23; // [rsp+190h] [rbp-78h]
  __int64 v24; // [rsp+198h] [rbp-70h]
  _BYTE *v25; // [rsp+1A0h] [rbp-68h]
  __int64 v26[34]; // [rsp+1A8h] [rbp-60h] BYREF
  _QWORD v27[8]; // [rsp+2B8h] [rbp+B0h] BYREF
  int v28[2]; // [rsp+2F8h] [rbp+F0h]
  int v29[2]; // [rsp+300h] [rbp+F8h]

  v24 = a1;
  v1 = a1;
  v29[0] = 218956546;
  v29[1] = 353439246;
  v22 = 256;
  v28[0] = 0x1000000;
  v28[1] = 256;
  v2 = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v26, 0, sizeof(v26));
  if ( (*(_DWORD *)(v1 + 1992) & 0x10) == 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x65546152u);
    v25 = PoolWithTag;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = RaidUnitLogSenseCommandSrb(v1, 0LL, 0, 0, &v22, PoolWithTag);
      if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147483643 )
      {
        v6 = 0;
        v23 = 0;
        v7 = 0LL;
        while ( 1 )
        {
          v22 = 4096;
          v8 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
          v27[v7] = v8;
          v9 = v8;
          if ( !v8 )
            break;
          v21 = *((_BYTE *)v28 + v7);
          v10 = RaidUnitLogSenseCommandSrb(v1, 0LL, *((_BYTE *)v29 + v7), v21, &v22, v8);
          if ( ((v10 + 0x80000000) & 0x80000000) != 0 || v10 == -2147483643 )
          {
            v11 = (__int64)(v9 + 4);
            v12 = v22 - 4;
            switch ( *v9 & 0x3F )
            {
              case 2:
                v26[18] = (__int64)v9;
                LODWORD(v26[19]) = v22;
                break;
              case 3:
                v26[20] = (__int64)v9;
                LODWORD(v26[21]) = v22;
                break;
              case 13:
                v14 = v9[1];
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    v26[24] = (__int64)v9;
                    LODWORD(v26[25]) = v22;
                  }
                }
                else
                {
                  v26[22] = (__int64)v9;
                  LODWORD(v26[23]) = v22;
                }
                break;
              case 14:
                v13 = v9[1];
                if ( v13 )
                {
                  if ( v13 == 1 )
                  {
                    v26[28] = (__int64)v9;
                    LODWORD(v26[29]) = v22;
                  }
                }
                else
                {
                  v26[26] = (__int64)v9;
                  LODWORD(v26[27]) = v22;
                }
                break;
              case 17:
                v26[30] = (__int64)v9;
                LODWORD(v26[31]) = v22;
                break;
              case 21:
                v26[32] = (__int64)v9;
                LODWORD(v26[33]) = v22;
                break;
            }
            if ( v12 >= 4 )
            {
              do
              {
                v15 = *(unsigned __int8 *)(v11 + 3);
                v16 = v15 + 4;
                if ( v12 < v15 + 4 )
                  break;
                v17 = __ROR2__(*(_WORD *)v11, 8);
                switch ( *v9 & 0x3F )
                {
                  case 2:
                    StorpTelemetryGetWriteErrorCounter(v11, v17, v26);
                    break;
                  case 3:
                    StorpTelemetryGetReadErrorCounter(v11, v17, v26);
                    break;
                  case 13:
                    if ( !v9[1] && (_BYTE)v15 == 2 )
                    {
                      if ( v17 )
                      {
                        if ( v17 == 1 )
                          BYTE1(v26[0]) = *(_BYTE *)(v11 + 5);
                      }
                      else
                      {
                        LOBYTE(v26[0]) = *(_BYTE *)(v11 + 5);
                      }
                    }
                    break;
                  case 14:
                    if ( v9[1] )
                    {
                      if ( v21 == 1 && !v17 && (_BYTE)v15 == 2 )
                        LOWORD(v26[17]) = __ROR2__(*(_WORD *)(v11 + 4), 8);
                    }
                    else
                    {
                      StorpTelemetryGetStartStopCycleCounter(v11, v17, (__int64)v26);
                    }
                    break;
                  case 17:
                    if ( (_BYTE)v15 == 4 && v17 == 1 )
                      BYTE2(v26[17]) = *(_BYTE *)(v11 + 7);
                    break;
                  default:
                    if ( (*v9 & 0x3F) == 0x15 && (_BYTE)v15 == 12 && !v17 )
                    {
                      BYTE3(v26[17]) = *(_BYTE *)(v11 + 9);
                      HIDWORD(v26[17]) = _byteswap_ulong(*(_DWORD *)(v11 + 4));
                    }
                    break;
                }
                v12 -= v16;
                v11 += v16;
              }
              while ( v12 >= 4 );
              v1 = v24;
              v2 = v25;
              v6 = v23;
            }
          }
          ++v6;
          ++v7;
          v23 = v6;
          if ( v6 >= 8 )
          {
            if ( (byte_1C0069844 & 8) != 0 )
              McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer(
                v1 + 186,
                v1 + 169,
                v1 + 160,
                *(_DWORD *)(*(_QWORD *)(v1 + 24) + 56LL),
                *(_BYTE *)(v1 + 96),
                *(_BYTE *)(v1 + 97),
                *(_BYTE *)(v1 + 98),
                v1 + 1976,
                *(_QWORD *)(v1 + 24) + 5192LL,
                *(const wchar_t **)(*(_QWORD *)(v1 + 24) + 4864LL),
                (const char *)(v1 + 160),
                (const char *)(v1 + 169),
                (const char *)(v1 + 186),
                *(_BYTE *)(v1 + 450) & 1,
                v20,
                v26[0],
                SBYTE1(v26[0]),
                (const wchar_t *)v26 + 1,
                SBYTE4(v26[8]),
                v26[9],
                SBYTE4(v26[9]),
                v26[10],
                v26[11],
                v26[12],
                v26[13],
                v26[14],
                v26[15],
                v26[16],
                v26[17],
                SBYTE2(v26[17]),
                SBYTE3(v26[17]),
                SBYTE4(v26[17]),
                v26[19],
                v26[18],
                v26[21],
                v26[20],
                v26[23],
                v26[22],
                v26[25],
                v26[24],
                v26[27],
                v26[26],
                v26[29],
                v26[28],
                v26[31],
                v26[30],
                v26[33],
                v26[32]);
            break;
          }
        }
      }
      else if ( v4 != -1073741670 )
      {
        v5 = *(_DWORD *)(v1 + 1992);
        if ( (v5 & 1) == 0 )
          *(_DWORD *)(v1 + 1992) = v5 | 0x10;
      }
    }
  }
  v18 = (PVOID *)v27;
  v19 = 8LL;
  do
  {
    if ( *v18 )
      ExFreePoolWithTag(*v18, 0x65546152u);
    ++v18;
    --v19;
  }
  while ( v19 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0x65546152u);
}
