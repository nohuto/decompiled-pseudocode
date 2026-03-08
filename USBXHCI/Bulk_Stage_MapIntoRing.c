/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C0012A00
 * Callers:
 *     Bulk_MapStage @ 0x1C00122C0 (Bulk_MapStage.c)
 *     Bulk_EvtDmaCallback @ 0x1C00227B0 (Bulk_EvtDmaCallback.c)
 * Callees:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0007070 (TR_AddTRBRangeToSecureTransferRing.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C00080D0 (UsbDevice_DirectWriteDoorbell.c)
 *     TR_CalculateTDSize @ 0x1C0012DD0 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C0012DF8 (TR_GetPacketCount.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     Bulk_InsertLinkTrb @ 0x1C00227FE (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C00476E0 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C004781C (WPP_RECORDER_SF_DDDDqDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0048268 (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int PacketCount; // eax
  __int64 v9; // r9
  unsigned int v10; // r11d
  unsigned int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // r8d
  __int64 v20; // r13
  int **v21; // r13
  __int64 v22; // r9
  unsigned int v23; // esi
  unsigned int v24; // r14d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  KIRQL v30; // al
  __int64 v31; // rcx
  KIRQL v32; // dl
  int *result; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // ecx
  unsigned int v38; // r14d
  int v39; // ecx
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // esi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int v46; // r12d
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  _OWORD *v50; // r13
  unsigned int v51; // ecx
  __int64 v52; // rax
  unsigned int v53; // r8d
  __int64 v54; // rdx
  unsigned int v55; // ebx
  int v56; // eax
  signed __int32 v57[8]; // [rsp+0h] [rbp-99h] BYREF
  int v58; // [rsp+20h] [rbp-79h]
  __int128 v59; // [rsp+60h] [rbp-39h] BYREF
  __int64 v60; // [rsp+70h] [rbp-29h]
  _OWORD *v61; // [rsp+78h] [rbp-21h]
  __int64 v62; // [rsp+80h] [rbp-19h]
  int v63; // [rsp+88h] [rbp-11h]
  unsigned int v64; // [rsp+8Ch] [rbp-Dh]
  __int64 v65; // [rsp+90h] [rbp-9h]
  __int64 v66; // [rsp+98h] [rbp-1h]
  __int64 v67; // [rsp+A0h] [rbp+7h]
  unsigned int v68; // [rsp+100h] [rbp+67h]
  unsigned int v69; // [rsp+108h] [rbp+6Fh]
  unsigned int v70; // [rsp+110h] [rbp+77h]
  unsigned int v71; // [rsp+118h] [rbp+7Fh]

  v1 = *(_QWORD *)a1;
  v67 = v1;
  v69 = 0;
  v3 = *(_QWORD *)(v1 + 56);
  v4 = *(_QWORD *)(v1 + 48);
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v3 + 40);
  v62 = *(_QWORD *)(v6 + 456);
  if ( _bittest64((const signed __int64 *)(v6 + 336), 0x22u)
    && (v44 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v44 + 40))
    && (v45 = *(_QWORD *)(v3 + 56), *(char *)(v45 + 98) < 0)
    && *(_DWORD *)(v44 + 20) <= 1u
    && (v46 = *(_WORD *)(v45 + 100) & 0x7FF, v5 % v46) )
  {
    v7 = v46 - v5 % v46;
  }
  else
  {
    v7 = 0;
  }
  v63 = *(_DWORD *)(v4 + 32) & 1;
  PacketCount = TR_GetPacketCount(v3, v5);
  v10 = *(_DWORD *)(a1 + 80);
  v11 = 5;
  *(_DWORD *)(a1 + 88) = v12;
  v13 = *(unsigned int *)(v3 + 192);
  v64 = PacketCount;
  v14 = *(_QWORD *)(v3 + 40);
  v15 = *(_QWORD *)(v3 + 184) + 16 * v13;
  v60 = v12;
  v16 = *(_QWORD *)(v14 + 336);
  v70 = v12;
  v71 = v12;
  v66 = v15;
  v68 = v10;
  if ( (v16 & 8) != 0 )
  {
    LOBYTE(v9) = 1;
    v47 = 5LL;
LABEL_44:
    Bulk_InsertLinkTrb(v3, a1, v47, v9);
    v10 = v68;
  }
LABEL_4:
  v17 = 0x2000000000000LL;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v3 + 192);
    v19 = *(_DWORD *)(v3 + 196);
    v20 = *(_QWORD *)(v3 + 184) + 16LL * v18;
    v61 = (_OWORD *)v20;
    v59 = 0LL;
    if ( v18 + v10 > v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDq(
          *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
          v19,
          17,
          v58,
          *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
          *(_DWORD *)(v3 + 64),
          v18,
          v20);
      LOBYTE(v17) = v20 == v15;
      Bulk_InsertLinkTrb(v3, a1, v11, v17);
      v10 = v68;
      goto LABEL_4;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 40) + 336LL) & 0x2000000000000LL) != 0
      && (v9 = v3 + 48, v48 = *(_QWORD *)(v3 + 48), v65 = v3 + 48, *(_DWORD *)(v48 + 20) == 3)
      && (v21 = (int **)(v3 + 56), v49 = *(_QWORD *)(v3 + 56), *(_DWORD *)(v49 + 120) == 6) )
    {
      if ( v11 == 7 )
      {
        v65 = v3 + 48;
        if ( v18 + 9 > v19 )
        {
          v50 = v61;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v49 + 80),
              *(unsigned __int8 *)(v48 + 135),
              0,
              18,
              v58,
              *(_BYTE *)(v48 + 135),
              *(_DWORD *)(v49 + 144),
              *(_DWORD *)(v3 + 64),
              v18,
              (char)v61);
          }
          v47 = 7LL;
          LOBYTE(v9) = v50 == (_OWORD *)v15;
          goto LABEL_44;
        }
      }
    }
    else
    {
      v9 = v3 + 48;
      v65 = v3 + 48;
      v21 = (int **)(v3 + 56);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDDDqDD(
        *((_QWORD *)*v21 + 10),
        *(unsigned __int8 *)(*(_QWORD *)v9 + 135LL),
        v19,
        v9,
        v58,
        *(_BYTE *)(*(_QWORD *)v9 + 135LL),
        (*v21)[36],
        *(_DWORD *)(v3 + 64),
        v18,
        (char)v61,
        *(_DWORD *)(a1 + 88),
        v10);
      v10 = v68;
    }
    v22 = 5LL;
    if ( v11 == 5 )
    {
      v37 = *(_DWORD *)(v1 + 76);
      v38 = HIDWORD(v59) & 0xFFFF03FF | 0x400;
      HIDWORD(v59) = v38;
      if ( v37 )
      {
        v39 = v37 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            if ( v40 == 1 )
            {
              v51 = v70;
              if ( v70 )
              {
                v54 = v60;
                v53 = v69;
              }
              else
              {
                v52 = *(_QWORD *)(a1 + 56);
                v53 = v69;
                v54 = *(_QWORD *)(v52 + 24LL * v69 + 16);
                v51 = *(_DWORD *)(v52 + 24LL * v69 + 24);
                v60 = v54;
              }
              *(_QWORD *)&v59 = v54;
              if ( v51 > 0x10000 )
              {
                v60 = v54 + 0x10000;
                v42 = DWORD2(v59) & 0xFFFE0000 | 0x10000;
                v11 = 5;
                v70 = v51 - 0x10000;
              }
              else
              {
                v69 = v53 + 1;
                v11 = 7;
                v42 = (v51 ^ DWORD2(v59)) & 0x1FFFF ^ DWORD2(v59);
                v70 = 0;
                if ( **(_DWORD **)(a1 + 56) != v53 + 1 )
                  v11 = 5;
              }
            }
            else
            {
              v42 = DWORD2(v59);
            }
            goto LABEL_32;
          }
          if ( !v63 )
            memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
          v41 = (*(_DWORD *)(a1 + 40) ^ DWORD2(v59)) & 0x1FFFF;
          *(_QWORD *)&v59 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
          v42 = v41 ^ DWORD2(v59);
        }
        else
        {
          v55 = *(_DWORD *)(a1 + 40);
          memmove(&v59, *(const void **)(a1 + 64), v55);
          v38 = HIDWORD(v59) | 0x40;
          v42 = (DWORD2(v59) ^ v55) & 0x1FFFF ^ DWORD2(v59);
        }
      }
      else
      {
        v42 = DWORD2(v59) & 0xFFFE0000;
      }
      v11 = 7;
LABEL_32:
      v71 += v42 & 0x1FFFF;
      LOBYTE(v22) = v11 == 7;
      v43 = TR_CalculateTDSize(v3, v64, v71, v22);
      v10 = v68;
      v25 = v62;
      v23 = (v42 ^ (v43 << 17)) & 0x3E0000 ^ v42;
      v24 = v38 | 0x10;
      goto LABEL_33;
    }
    v23 = DWORD2(v59);
    if ( v11 == 7 )
    {
      v11 = 9;
      *(_QWORD *)&v59 = a1 ^ ((unsigned __int8)a1 ^ *((_BYTE *)*v21 + 99)) & 3;
      v24 = HIDWORD(v59) & 0xFFFF03DF | 0x1C20;
      v25 = v62;
      goto LABEL_14;
    }
    v25 = v62;
    *(_QWORD *)&v59 = *(_QWORD *)(v62 + 24);
    v23 = v7 & 0x1FFFF | DWORD2(v59) & 0xFFC00000;
    v24 = HIDWORD(v59) & 0xFFFF03EF | 0x410;
    v7 = 0;
    v11 = 7;
LABEL_33:
    v68 = --v10;
LABEL_14:
    HIDWORD(v59) = v24;
    v26 = *(_DWORD *)(a1 + 88) + 1;
    *(_DWORD *)(a1 + 88) = v26;
    if ( v11 != 7 )
    {
      if ( v11 != 5 || v10 )
        goto LABEL_16;
      v10 = *(_DWORD *)(a1 + 84) - v26;
      if ( *(_DWORD *)(a1 + 80) < v10 )
        v10 = *(_DWORD *)(a1 + 80);
LABEL_36:
      v68 = v10;
LABEL_16:
      v27 = 8LL;
      goto LABEL_17;
    }
    if ( !v7 || !v25 )
    {
      v24 |= 2u;
      v10 = 1;
      HIDWORD(v59) = v24;
      goto LABEL_36;
    }
    v27 = 8LL;
    v11 = 8;
    v23 ^= (v23 ^ ((v23 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_17:
    if ( v61 != (_OWORD *)v66 )
      HIDWORD(v59) = (*(_DWORD *)(v3 + 200) ^ v24) & 1 ^ v24;
    v17 = 0x2000000000000LL;
    v28 = v23 & 0x3FFFFF | (*(unsigned __int16 *)(v3 + 112) << 22);
    v1 = v67;
    DWORD2(v59) = v28;
    *v61 = v59;
    v29 = (unsigned int)(*(_DWORD *)(v3 + 192) + 1);
    *(_DWORD *)(v3 + 192) = v29;
    if ( v11 == 9 )
      break;
    v15 = v66;
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v3 + 40) + 336LL), 0x31u)
    && *(_DWORD *)(*(_QWORD *)v65 + 20LL) == 3
    && (*v21)[30] == 6 )
  {
    do
    {
      v56 = *(_DWORD *)(v3 + 200) & 1 | 0x2000;
      v59 = 0LL;
      HIDWORD(v59) = v56;
      *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16 * v29) = v59;
      v29 = (unsigned int)++*(_DWORD *)(v3 + 192);
      --v27;
    }
    while ( v27 );
  }
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v3 + 192);
  *(_OWORD *)(*(_QWORD *)(v3 + 184) + 16LL * *(unsigned int *)(v3 + 192)) = 0LL;
  v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v31 = v67;
  *(_BYTE *)(v3 + 104) = v30;
  ++*(_DWORD *)(v31 + 120);
  *(_DWORD *)(v31 + 112) += *(_DWORD *)(a1 + 40);
  v32 = *(_BYTE *)(v3 + 104);
  ++*(_DWORD *)(v3 + 348);
  *(_DWORD *)(v3 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v32);
  *(_BYTE *)(v66 + 12) ^= 1u;
  _InterlockedOr(v57, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v3,
    (_QWORD *)(a1 + 24),
    *(_QWORD **)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128));
  result = *v21;
  v34 = *(unsigned int *)(v3 + 64);
  v35 = *((_QWORD *)*v21 + 2);
  v36 = (unsigned int)(*v21)[36];
  if ( *(_QWORD *)(v35 + 160) )
    return UsbDevice_DirectWriteDoorbell(v35, v36, v34);
  if ( !*(_BYTE *)(v3 + 280) )
    return (int *)XilUsbDevice_SendRequestToRingDoorbell(v35 + 608, v36, v34);
  return result;
}
