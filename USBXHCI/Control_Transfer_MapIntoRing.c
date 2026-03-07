__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 v4; // r9
  bool v5; // cf
  unsigned int v6; // ecx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  unsigned int v9; // r11d
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  _DWORD *v13; // rdx
  unsigned int v14; // r12d
  _OWORD *v15; // r13
  _DWORD *v16; // r10
  int v17; // r14d
  int v18; // edx
  __int64 result; // rax
  int v20; // r8d
  int v21; // r9d
  int v22; // r14d
  int v23; // ecx
  __int64 v24; // rcx
  BOOL v25; // eax
  char v26; // r14
  int v27; // eax
  KIRQL v28; // dl
  int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rdx
  int v38; // ebx
  int v39; // r14d
  int v40; // ecx
  int v41; // eax
  unsigned int v42; // r8d
  char v43; // cl
  unsigned int v44; // ecx
  __int64 v45; // r8
  bool v46; // zf
  int v47; // ecx
  unsigned int v48; // ebx
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // edx
  int v52; // edx
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // r8
  unsigned int v56; // ecx
  __int64 v57; // rcx
  signed __int32 v58[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v59; // [rsp+20h] [rbp-59h]
  __int64 v60; // [rsp+28h] [rbp-51h]
  __int64 v61; // [rsp+38h] [rbp-41h]
  __int64 v62; // [rsp+40h] [rbp-39h]
  unsigned int v63; // [rsp+50h] [rbp-29h]
  int v64; // [rsp+54h] [rbp-25h]
  unsigned int v65; // [rsp+58h] [rbp-21h]
  __int64 v66; // [rsp+60h] [rbp-19h]
  _DWORD *v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int64 v69; // [rsp+78h] [rbp-1h]
  _OWORD v70[5]; // [rsp+80h] [rbp+7h] BYREF
  char v71; // [rsp+E0h] [rbp+67h]
  unsigned int v72; // [rsp+E8h] [rbp+6Fh]
  unsigned int v73; // [rsp+F0h] [rbp+77h]
  unsigned int v74; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 344);
  v2 = *(_QWORD *)(a1 + 40);
  v70[0] = 0LL;
  v64 = 0;
  v68 = *(_QWORD *)(v1 + 48);
  v4 = *(_DWORD *)(v68 + 32) & 1;
  v5 = *(_BYTE *)(v2 + 320) == 0;
  v63 = *(_DWORD *)(v68 + 32) & 1;
  if ( v5 )
  {
    v65 = 0;
  }
  else
  {
    v6 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FF;
    v65 = (v6 + *(_DWORD *)(v1 + 104) - 1) / v6;
  }
  v7 = *(unsigned int *)(a1 + 192);
  v8 = *(_OWORD *)(v2 + 336);
  v9 = 0;
  v74 = 0;
  v71 = 0;
  v10 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v7;
  v73 = 0;
  v11 = 1;
  v66 = 0LL;
  v12 = v7;
  v72 = 0;
  v69 = v7;
  if ( (v8 & 8) != 0 && (unsigned int)(v7 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, 1LL, v70, 1LL);
    v49 = *(_QWORD *)(a1 + 176);
    v50 = *(unsigned int *)(a1 + 192);
    HIDWORD(v70[0]) |= 2u;
    v4 = v63;
    *(_QWORD *)&v70[0] = *(_QWORD *)(v49 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v50) = v70[0];
    *(_DWORD *)(a1 + 192) = v9;
    v12 = 0;
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a1 + 200) == 0;
  }
  v13 = (_DWORD *)(a1 + 200);
  do
  {
    v14 = v9;
    v15 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v12);
    v16 = v13;
    v67 = v13;
    if ( v12 + 1 > *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v51 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v51,
          v12,
          33,
          v59,
          v51,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v12,
          (char)v15,
          *v16);
      }
      LOBYTE(v4) = v15 == (_OWORD *)v10;
      TR_InitializeLinkTrb(a1, v11, v70, v4);
      v45 = *(_QWORD *)(a1 + 176);
      HIDWORD(v70[0]) |= 2u;
      v16 = v67;
      v13 = v67;
      *(_QWORD *)&v70[0] = *(_QWORD *)(v45 + 24);
      *v15 = v70[0];
      v46 = *v13 == 0;
      *(_DWORD *)(a1 + 192) = 0;
      v12 = 0;
      *v13 = v46;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v52 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v52,
          v12,
          34,
          v59,
          v52,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v12,
          (char)v15,
          *v16);
        v16 = v67;
        LODWORD(v4) = v63;
        v9 = v72;
      }
      v17 = 0;
      v18 = 0;
      v70[0] = 0LL;
      result = (int)(v11 - 1);
      switch ( v11 )
      {
        case 1u:
          v20 = 8;
          *(_QWORD *)&v70[0] = *(_QWORD *)(v68 + 128);
          if ( *(_DWORD *)(v1 + 104) )
          {
            if ( (_DWORD)v4 )
              v21 = 198720;
            else
              v21 = 133184;
            v11 = 2;
          }
          else
          {
            v11 = 3;
            v21 = 2112;
          }
          goto LABEL_16;
        case 2u:
        case 5u:
          if ( v11 == 2 )
            v39 = ((_DWORD)v4 << 16) | 0xC00;
          else
            v39 = 1024;
          v40 = *(_DWORD *)(v1 + 64);
          HIDWORD(v70[0]) = v39;
          if ( v40 == 2 )
          {
            if ( !(_DWORD)v4 )
            {
              memmove(*(void **)(*(_QWORD *)(v1 + 88) + 16LL), *(const void **)(v1 + 80), *(unsigned int *)(v1 + 104));
              v16 = v67;
            }
            v41 = (*(_DWORD *)(v1 + 104) ^ DWORD2(v70[0])) & 0x1FFFF;
            *(_QWORD *)&v70[0] = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 24LL);
            v42 = v41 ^ DWORD2(v70[0]);
            goto LABEL_41;
          }
          if ( !v40 )
            return result;
          v47 = v40 - 1;
          if ( !v47 )
          {
            v48 = *(_DWORD *)(v1 + 104);
            memmove(v70, *(const void **)(v1 + 80), v48);
            v16 = v67;
            v39 = HIDWORD(v70[0]) | 0x40;
            v42 = (DWORD2(v70[0]) ^ v48) & 0x1FFFF ^ DWORD2(v70[0]);
LABEL_41:
            v11 = 6;
            v9 = v14 + (v42 & 0x1FFFF);
            v72 = v9;
LABEL_43:
            v43 = 1;
            goto LABEL_44;
          }
          if ( v47 == 2 )
          {
            v53 = v74;
            if ( v74 )
            {
              v55 = v66;
            }
            else
            {
              v54 = *(_QWORD *)(v1 + 96);
              v55 = *(_QWORD *)(v54 + 24LL * v73 + 16);
              v53 = *(_DWORD *)(v54 + 24LL * v73 + 24);
              v66 = v55;
            }
            v56 = 0x10000;
            if ( v11 == 2 )
            {
              if ( v53 > 0x200 && (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x40) != 0 )
              {
                v56 = 512;
                if ( (_DWORD)v4 )
                  v71 = 1;
LABEL_73:
                *(_QWORD *)&v70[0] = v55;
                v11 = 5;
                v66 += v56;
                v42 = v56 | DWORD2(v70[0]) & 0xFFFE0000;
                v74 = v53 - v56;
                v9 = v14 + (v56 & 0x1FFFF);
                v72 = v9;
                goto LABEL_74;
              }
            }
            else if ( v11 == 5 && v71 )
            {
              v39 |= 0x10000u;
            }
            if ( v53 > 0x10000 )
              goto LABEL_73;
            *(_QWORD *)&v70[0] = v55;
            ++v73;
            v42 = (v53 ^ DWORD2(v70[0])) & 0x1FFFF ^ DWORD2(v70[0]);
            v74 = 0;
            v11 = (v73 == **(_DWORD **)(v1 + 96)) + 5;
          }
          else
          {
            v42 = DWORD2(v70[0]);
          }
          v9 += v42 & 0x1FFFF;
          v72 = v9;
          if ( v11 == 6 )
            goto LABEL_43;
LABEL_74:
          v43 = 0;
LABEL_44:
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 320LL) && !v43 )
          {
            v44 = v65 - v9 / (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu);
            if ( v44 > 0x1F )
              v44 = 31;
          }
          else
          {
            v44 = 0;
          }
          v20 = (v42 ^ (v44 << 17)) & 0x3E0000 ^ v42;
          v17 = v39 | 0x10;
          v21 = v17;
          v18 = v17;
LABEL_48:
          if ( v11 == 6 || (v17 = v18, v11 == 7) )
LABEL_15:
            v21 = v17 | 2;
LABEL_16:
          v23 = *v16;
          v13 = v16;
          if ( v15 == (_OWORD *)v10 )
            HIDWORD(v70[0]) = v21 & 0xFFFFFFFE | (v23 == 0);
          else
            HIDWORD(v70[0]) = ((unsigned __int8)v21 ^ (unsigned __int8)v23) & 1 ^ v21;
          DWORD2(v70[0]) = v20 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
          *v15 = v70[0];
          v12 = ++*(_DWORD *)(a1 + 192);
          break;
        case 3u:
          v20 = DWORD2(v70[0]);
          v22 = 69632;
          if ( (_DWORD)v4 )
            v22 = 4096;
          v11 = 7;
          v17 = v22 | 0x10;
          goto LABEL_15;
        case 6u:
        case 7u:
          ++v64;
          v20 = DWORD2(v70[0]);
          *(_QWORD *)&v70[0] = v1 & 0xFFFFFFFFFFFFFFFCuLL;
          v21 = 7200;
          if ( v11 == 7 )
          {
            v11 = 9;
            *(_QWORD *)&v70[0] = v1 & 0xFFFFFFFFFFFFFFF8uLL | 4;
          }
          else
          {
            v11 = 3;
          }
          goto LABEL_16;
        default:
          v21 = HIDWORD(v70[0]);
          v20 = DWORD2(v70[0]);
          goto LABEL_48;
      }
    }
    v4 = v63;
  }
  while ( v11 != 9 );
  *(_DWORD *)(v1 + 160) = v12;
  v24 = *(unsigned int *)(a1 + 192);
  v25 = *v16 == 0;
  v70[0] = 0LL;
  HIDWORD(v70[0]) = v25;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v24) = v70[0];
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v1 + 128) = v64;
  *(_DWORD *)(a1 + 352) |= 1u;
  if ( *(_DWORD *)(a1 + 108) == 3 )
  {
    v26 = 0;
    v27 = 2;
  }
  else
  {
    v26 = 1;
    v27 = 0;
  }
  v28 = *(_BYTE *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = v27;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v28);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = *(_QWORD *)(a1 + 48);
    v31 = *(_QWORD *)(a1 + 56);
    v62 = v1;
    v32 = *(unsigned __int8 *)(v30 + 135);
    v61 = *(_QWORD *)(v1 + 24);
    LODWORD(v30) = *(_DWORD *)(v31 + 144);
    v33 = *(_QWORD *)(v31 + 80);
    LOBYTE(v60) = v32;
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_DDqq(
      v33,
      v32,
      v29,
      35,
      (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
      v60,
      v30,
      v61,
      v1);
  }
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v58, 0);
  TR_AddTRBRangeToSecureTransferRing(a1, 0, *(_QWORD *)(v1 + 152), v69, *(_DWORD *)(a1 + 192), v1 + 168);
  result = *(_QWORD *)(a1 + 56);
  v35 = *(unsigned int *)(a1 + 64);
  v36 = *(_QWORD *)(result + 16);
  v37 = *(unsigned int *)(result + 144);
  if ( *(_QWORD *)(v36 + 160) )
  {
    v38 = ((_DWORD)v35 << 16) | (unsigned __int8)v37;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      LOBYTE(v34) = *(_BYTE *)(a1 + 280) == 0;
      McTemplateK0uqq_EtwWriteTransfer(v34, v37, v35, *(unsigned __int8 *)(v36 + 135), v37, *(_DWORD *)(a1 + 64));
    }
    result = *(_QWORD *)(v36 + 160);
    *(_DWORD *)result = v38;
    _InterlockedOr(v58, 0);
  }
  else if ( !*(_BYTE *)(a1 + 280) )
  {
    result = XilUsbDevice_SendRequestToRingDoorbell(v36 + 608, v37, v35);
  }
  if ( v26 )
  {
    v57 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v57 + 37) )
      return ESM_AddEvent((PVOID)(v57 + 296));
    result = *(_QWORD *)(v57 + 136);
    if ( _InterlockedIncrement((volatile signed __int32 *)(result + 20)) == *(_DWORD *)(result + 8) )
      return ESM_AddEvent((PVOID)(v57 + 296));
  }
  return result;
}
