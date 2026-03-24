/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C0004610
 * Callers:
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     Control_EvtDmaCallback @ 0x1C003FEA0 (Control_EvtDmaCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1C0004F80 (WPP_RECORDER_SF_DDqq.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     TR_InitializeLinkTrb @ 0x1C000E5B0 (TR_InitializeLinkTrb.c)
 *     memmove @ 0x1C001B000 (memmove.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C00407A0 (WPP_RECORDER_SF_DDDqD.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C0043248 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C00457F0 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 v4; // r11
  int v5; // r13d
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // r10
  __int64 v12; // r15
  unsigned int v13; // ebx
  unsigned int v14; // r8d
  _OWORD *v15; // r12
  int v16; // r14d
  int v17; // edx
  __int64 result; // rax
  int v19; // r8d
  int v20; // r9d
  int v21; // r14d
  int v22; // ecx
  __int64 v23; // rcx
  BOOL v24; // eax
  char v25; // r14
  int v26; // eax
  KIRQL v27; // dl
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // ebx
  int v38; // r14d
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  int v44; // ecx
  unsigned int v45; // ebx
  bool v46; // zf
  __int64 v47; // rcx
  int v48; // edx
  int v49; // edx
  __int64 v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // ecx
  __int64 v53; // rcx
  signed __int32 v54[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v55; // [rsp+20h] [rbp-49h]
  __int64 v56; // [rsp+28h] [rbp-41h]
  __int64 v57; // [rsp+38h] [rbp-31h]
  __int64 v58; // [rsp+40h] [rbp-29h]
  int v59; // [rsp+50h] [rbp-19h]
  unsigned int v60; // [rsp+54h] [rbp-15h]
  __int64 v61; // [rsp+58h] [rbp-11h]
  __int64 v62; // [rsp+60h] [rbp-9h]
  __int64 v63; // [rsp+68h] [rbp-1h]
  __int128 v64; // [rsp+70h] [rbp+7h] BYREF
  char v65; // [rsp+D0h] [rbp+67h]
  unsigned int v66; // [rsp+D8h] [rbp+6Fh]
  unsigned int v67; // [rsp+E0h] [rbp+77h]
  unsigned int v68; // [rsp+E8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 344);
  v2 = *(_QWORD *)(a1 + 40);
  v64 = 0LL;
  v59 = 0;
  v4 = *(_QWORD *)(v1 + 48);
  v62 = v4;
  v5 = *(_DWORD *)(v4 + 32) & 1;
  if ( *(_BYTE *)(v2 + 320) )
  {
    v6 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FF;
    v7 = v6 + *(_DWORD *)(v1 + 104) - 1;
    if ( v6 == 8 )
      v68 = v7 >> 3;
    else
      v68 = v7 / v6;
  }
  else
  {
    v68 = 0;
  }
  v8 = *(unsigned int *)(a1 + 192);
  v9 = 0LL;
  v10 = *(_OWORD *)(v2 + 336);
  v11 = 0LL;
  v67 = 0;
  v61 = 0LL;
  v12 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v8;
  v66 = 0;
  v13 = 1;
  v60 = 0;
  v14 = v8;
  v63 = v8;
  v65 = 0;
  if ( (v10 & 8) != 0 && (unsigned int)(v8 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, 1LL, &v64, 1LL);
    v47 = *(unsigned int *)(a1 + 192);
    HIDWORD(v64) |= 2u;
    *(_QWORD *)&v64 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v47) = v64;
    *(_DWORD *)(a1 + 192) = 0;
    v14 = 0;
    v9 = 0LL;
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 200) == 0;
    v11 = 0LL;
  }
  do
  {
    v15 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v14);
    if ( v14 + 1 > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v48 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v48,
          v14,
          33,
          v55,
          v48,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v14,
          (char)v15,
          *(_DWORD *)(a1 + 200));
      }
      LOBYTE(v9) = v15 == (_OWORD *)v12;
      TR_InitializeLinkTrb(a1, v13, &v64, v9);
      HIDWORD(v64) |= 2u;
      *(_QWORD *)&v64 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL);
      *v15 = v64;
      v46 = *(_DWORD *)(a1 + 200) == 0;
      *(_DWORD *)(a1 + 192) = 0;
      v14 = 0;
      *(_DWORD *)(a1 + 200) = v46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v49 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v49,
          v14,
          34,
          v55,
          v49,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v14,
          (char)v15,
          *(_DWORD *)(a1 + 200));
        LODWORD(v9) = v66;
        v11 = v61;
        v4 = v62;
      }
      v16 = 0;
      v17 = 0;
      v64 = 0LL;
      result = (int)(v13 - 1);
      switch ( v13 )
      {
        case 1u:
          v19 = 8;
          *(_QWORD *)&v64 = *(_QWORD *)(v4 + 128);
          if ( *(_DWORD *)(v1 + 104) )
          {
            v13 = 2;
            v20 = 133184;
            if ( v5 )
              v20 = 198720;
          }
          else
          {
            v13 = 3;
            v20 = 2112;
          }
          goto LABEL_16;
        case 2u:
        case 5u:
          if ( v13 == 2 )
            v38 = (v5 << 16) | 0xC00;
          else
            v38 = 1024;
          v39 = *(_DWORD *)(v1 + 64);
          HIDWORD(v64) = v38;
          if ( v39 == 2 )
          {
            if ( !v5 )
            {
              memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
              v4 = v62;
            }
            v40 = DWORD2(v64) ^ *(_DWORD *)(v1 + 104);
            *(_QWORD *)&v64 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
            v41 = v40 & 0x1FFFF ^ DWORD2(v64);
            goto LABEL_41;
          }
          if ( !v39 )
            return result;
          v44 = v39 - 1;
          if ( !v44 )
          {
            v45 = *(_DWORD *)(v1 + 104);
            memmove(&v64, *(const void **)(v1 + 80), v45);
            v4 = v62;
            v38 = HIDWORD(v64) | 0x40;
            v41 = (DWORD2(v64) ^ v45) & 0x1FFFF ^ DWORD2(v64);
LABEL_41:
            v13 = 6;
            goto LABEL_42;
          }
          if ( v44 == 2 )
          {
            if ( (_DWORD)v9 )
            {
              v51 = v67;
            }
            else
            {
              v50 = *(_QWORD *)(v1 + 96);
              v51 = v67;
              v11 = *(_QWORD *)(v50 + 24LL * v67 + 16);
              LODWORD(v9) = *(_DWORD *)(v50 + 24LL * v67 + 24);
              v61 = v11;
            }
            v52 = 0x10000;
            if ( v13 == 2 )
            {
              if ( (unsigned int)v9 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x40) != 0 )
              {
                v52 = 512;
                if ( v5 )
                  v65 = 1;
              }
            }
            else if ( v13 == 5 && v65 )
            {
              v38 |= 0x10000u;
            }
            *(_QWORD *)&v64 = v11;
            if ( (unsigned int)v9 > v52 )
            {
              v41 = v52 | DWORD2(v64) & 0xFFFE0000;
              v61 = v52 + v11;
              v66 = v9 - v52;
              v13 = 5;
            }
            else
            {
              v66 = 0;
              v67 = v51 + 1;
              v41 = (v9 ^ DWORD2(v64)) & 0x1FFFF ^ DWORD2(v64);
              v13 = (v51 + 1 == **(_DWORD **)(v1 + 96)) + 5;
            }
          }
          else
          {
            v41 = DWORD2(v64);
          }
LABEL_42:
          v42 = (v41 & 0x1FFFF) + v60;
          v60 = v42;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 320LL) && v13 != 6 )
          {
            v43 = v68 - v42 / (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu);
            if ( v43 > 0x1F )
              v43 = 31;
          }
          else
          {
            v43 = 0;
          }
          v19 = (v41 ^ (v43 << 17)) & 0x3E0000 ^ v41;
          v16 = v38 | 0x10;
          v20 = v16;
          v17 = v16;
LABEL_46:
          if ( v13 == 6 || (v16 = v17, v13 == 7) )
LABEL_15:
            v20 = v16 | 2;
LABEL_16:
          v22 = *(_DWORD *)(a1 + 200);
          if ( v15 == (_OWORD *)v12 )
            HIDWORD(v64) = v20 & 0xFFFFFFFE | (v22 == 0);
          else
            HIDWORD(v64) = ((unsigned __int8)v20 ^ (unsigned __int8)v22) & 1 ^ v20;
          DWORD2(v64) = v19 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
          *v15 = v64;
          v14 = ++*(_DWORD *)(a1 + 192);
          break;
        case 3u:
          v19 = DWORD2(v64);
          v21 = 69632;
          if ( v5 )
            v21 = 4096;
          v13 = 7;
          v16 = v21 | 0x10;
          goto LABEL_15;
        case 6u:
        case 7u:
          ++v59;
          v19 = DWORD2(v64);
          *(_QWORD *)&v64 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          v20 = 7200;
          if ( v13 == 7 )
          {
            v13 = 9;
            *(_QWORD *)&v64 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
            v13 = 3;
          }
          goto LABEL_16;
        default:
          v20 = HIDWORD(v64);
          v19 = DWORD2(v64);
          goto LABEL_46;
      }
    }
    v9 = v66;
    v11 = v61;
  }
  while ( v13 != 9 );
  *(_DWORD *)(v1 + 160) = v14;
  v23 = *(unsigned int *)(a1 + 192);
  v24 = *(_DWORD *)(a1 + 200) == 0;
  v64 = 0LL;
  HIDWORD(v64) = v24;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v23) = v64;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v59;
  *(_DWORD *)(a1 + 352) |= 1u;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    v25 = 0;
    v26 = 2;
  }
  else
  {
    v25 = 1;
    v26 = 0;
  }
  v27 = *(_BYTE *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = v26;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = *(_QWORD *)(a1 + 48);
    v30 = *(_QWORD *)(a1 + 56);
    v58 = v1;
    v31 = *(unsigned __int8 *)(v29 + 135);
    v57 = *(_QWORD *)(v1 + 24);
    LODWORD(v29) = *(_DWORD *)(v30 + 144);
    v32 = *(_QWORD *)(v30 + 80);
    LOBYTE(v56) = v31;
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_DDqq(
      v32,
      v31,
      v28,
      35,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      v56,
      v29,
      v57,
      v1);
  }
  *(_BYTE *)(v12 + 12) ^= 1u;
  _InterlockedOr(v54, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0, *(_QWORD *)(v1 + 152), v63, *(_DWORD *)(a1 + 192), v1 + 168);
  result = *(_QWORD *)(a1 + 56);
  v34 = *(unsigned int *)(a1 + 64);
  v35 = *(_QWORD *)(result + 16);
  v36 = *(unsigned int *)(result + 144);
  if ( *(_QWORD *)(v35 + 160) )
  {
    v37 = ((_DWORD)v34 << 16) | (unsigned __int8)v36;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      LOBYTE(v33) = *(_BYTE *)(a1 + 280) == 0;
      McTemplateK0uqq_EtwWriteTransfer(v33, v36, v34, *(unsigned __int8 *)(v35 + 135), v36, *(_DWORD *)(a1 + 64));
    }
    result = *(_QWORD *)(v35 + 160);
    *(_DWORD *)result = v37;
    _InterlockedOr(v54, 0);
  }
  else if ( !*(_BYTE *)(a1 + 280) )
  {
    result = XilUsbDevice_SendRequestToRingDoorbell(v35 + 608, v36, v34);
  }
  if ( v25 )
  {
    v53 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v53 + 37) )
      return ESM_AddEvent((PVOID)(v53 + 288));
    result = *(_QWORD *)(v53 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v53 + 288));
  }
  return result;
}
