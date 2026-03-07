_BOOL8 __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  int v2; // ebp
  KIRQL v3; // al
  int v4; // edx
  bool v5; // zf
  int v6; // edx
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r15
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // r12
  int v21; // ebp
  __int64 v22; // rsi
  _DWORD *v23; // r14
  __int64 v24; // r10
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rtt
  unsigned int v29; // ebx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rtt
  unsigned int v44; // ebx
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rdx
  int v48; // edx
  __int64 v49; // r14
  __int64 v50; // rbx
  int v51; // edx
  int v52; // r8d
  int v53; // r8d
  int v54; // edx
  int v55; // edx
  __int64 v56; // rbp
  __int64 v57; // r10
  unsigned int v58; // r9d
  __int64 v59; // rdx
  unsigned int v60; // r8d
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rtt
  unsigned int v63; // ebx
  unsigned int v64; // eax
  unsigned int v65; // r8d
  unsigned int v66; // eax
  __int64 v67; // rdx
  unsigned int v68; // r8d
  __int64 v69; // rsi
  unsigned int v70; // edx
  unsigned int v71; // r13d
  unsigned int v72; // r11d
  unsigned int v73; // r14d
  int v74; // r10d
  int v75; // edx
  int v76; // r8d
  int v77; // edx
  char v78; // dl
  unsigned int v79; // r9d
  __int16 v80; // dx
  __int64 v81; // r8
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // edx
  _QWORD *v88; // rax
  int v89; // edx
  int v90; // edx
  int v92; // [rsp+20h] [rbp-98h]
  __int64 v93; // [rsp+60h] [rbp-58h]
  unsigned int v94; // [rsp+C0h] [rbp+8h]
  unsigned int v95; // [rsp+C8h] [rbp+10h]
  __int64 v96; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v97; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 368) = 0LL;
  v2 = -1073741823;
  v97 = 0LL;
  v96 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v3;
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v6) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v6,
        14,
        52,
        (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    }
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 384) != a1 + 384 )
  {
    v5 = *(_DWORD *)(a1 + 336) == 3;
    v7 = *(_QWORD *)(a1 + 392);
    v97 = v7;
    if ( v5 )
    {
      if ( *(_DWORD *)(v7 + 112) != *(_DWORD *)(v7 + 116) )
      {
        *(_DWORD *)(v7 + 108) = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 104);
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v4,
          14,
          53,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v7, -1, -1073737728, 0, 0);
    }
    else if ( (unsigned int)(*(_DWORD *)(v7 + 104) + *(_DWORD *)(v7 + 108)) < *(_DWORD *)(v7 + 96) )
    {
      Isoch_TransferUrb_MarkLatePackets(a1, v7);
      v8 = *(_DWORD *)(v7 + 96);
      if ( *(_DWORD *)(*(_QWORD *)(v7 + 48) + 12LL * (unsigned int)(v8 - 1) + 148) != -1073414144 )
      {
        v10 = Isoch_Stage_Acquire(v7);
        *(_QWORD *)(a1 + 368) = v10;
        if ( v10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = *(_QWORD *)(a1 + 48);
            v13 = *(unsigned __int8 *)(v12 + 135);
            LOBYTE(v12) = 4;
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v12,
              v13,
              55,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              v13,
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v7 + 24),
              v10);
          }
          v2 = 0;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v14) = 5;
          WPP_RECORDER_SF_DDi(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v14,
            v11,
            56,
            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v7 + 24));
        }
LABEL_5:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return v2 >= 0;
      }
      if ( *(_DWORD *)(v7 + 112) != *(_DWORD *)(v7 + 116) )
      {
        *(_DWORD *)(v7 + 108) = v8 - *(_DWORD *)(v7 + 104);
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v9,
          14,
          54,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      Isoch_Transfer_CompleteCancelable(a1, v7, 0, 0, 1, 1);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 72),
         &v96);
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      v15 = Isoch_TransferData_Initialize(a1, v96, &v97);
      if ( v15 < 0 )
      {
        v17 = a1 + 56;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = *(_QWORD *)(a1 + 48);
          v19 = *(unsigned __int8 *)(v18 + 135);
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)v17 + 80LL),
            v18,
            v19,
            59,
            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
            v19,
            *(_DWORD *)(*(_QWORD *)v17 + 144LL),
            v96,
            v15);
        }
        Isoch_Transfer_Complete(a1, v97, -1, -1073737728, 0);
        v20 = a1 + 48;
        goto LABEL_127;
      }
      v21 = 0;
      v22 = *(_QWORD *)(v97 + 48);
      if ( *(_WORD *)(v22 + 2) == 10 )
      {
LABEL_37:
        v23 = (_DWORD *)(v22 + 36);
      }
      else
      {
        switch ( *(_WORD *)(v22 + 2) )
        {
          case '9':
          case ':':
            v23 = (_DWORD *)(v22 + 52);
            break;
          default:
            goto LABEL_37;
        }
      }
      if ( (*(_DWORD *)(v22 + 32) & 4) == 0 )
        break;
      v24 = *(_QWORD *)(a1 + 40);
      v25 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v24 + 444) / 10000LL;
      v26 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v24 + 88) + 40LL) + 1) >> 3) & 0x7FF;
      _m_prefetchw((const void *)(v24 + 432));
      v27 = *(_QWORD *)(v24 + 432);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 432), v27, v27);
      }
      while ( v28 != v27 );
      v29 = v26 | (v25 + ((_DWORD)v27 << 11) - (v27 >> 21)) & 0xFFFFF800;
      v30 = ((_WORD)v25 + ((_WORD)v27 << 11) - (unsigned __int16)(v27 >> 21)) & 0x7FF;
      if ( v30 >= v26 )
      {
        if ( v30 - v26 > 0x400 )
          v29 += 2048;
      }
      else
      {
        v31 = v26 - v30;
        v32 = v29 - 2048;
        if ( v31 <= 0x400 )
          v32 = v29;
        v29 = v32;
      }
      v33 = _InterlockedExchange64(
              (volatile __int64 *)(v24 + 432),
              ((unsigned __int64)v29 >> 11) | ((v25 - (v29 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v33) = 5;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v24 + 72),
          v33,
          4,
          177,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v29);
      }
      if ( *(_BYTE *)(a1 + 334) )
        goto LABEL_51;
      v35 = *(_DWORD *)(a1 + 360);
      v36 = 1024;
      *(_DWORD *)(v22 + 128) = v35;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
        v36 = 255;
      if ( v29 > v35 && v29 - v35 > v36 )
      {
LABEL_51:
        v34 = v29 + 5;
        *(_BYTE *)(a1 + 333) = 1;
        *(_DWORD *)(v22 + 128) = v29 + 5;
LABEL_58:
        *(_DWORD *)(a1 + 360) = v34;
      }
      v37 = 0;
      *(_DWORD *)(a1 + 360) += (unsigned int)(*(_DWORD *)(a1 + 356) + *(_DWORD *)(v22 + 132) - 1)
                             / *(_DWORD *)(a1 + 356);
      *v23 = 0;
      v5 = *(_DWORD *)(v22 + 132) == 0;
      *(_DWORD *)(v22 + 136) = 0;
      if ( !v5 )
      {
        do
        {
          v38 = v37++;
          *(_DWORD *)(v22 + 12 * v38 + 148) = -1;
        }
        while ( v37 < *(_DWORD *)(v22 + 132) );
      }
      v39 = *(_QWORD *)(a1 + 40);
      v40 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v39 + 444) / 10000LL;
      v41 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v39 + 88) + 40LL) + 2) >> 3) & 0x7FF;
      _m_prefetchw((const void *)(v39 + 432));
      v42 = *(_QWORD *)(v39 + 432);
      do
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 432), v42, v42);
      }
      while ( v43 != v42 );
      v44 = v41 | (v40 + ((_DWORD)v42 << 11) - (v42 >> 21)) & 0xFFFFF800;
      v45 = ((_WORD)v40 + ((_WORD)v42 << 11) - (unsigned __int16)(v42 >> 21)) & 0x7FF;
      if ( v45 >= v41 )
      {
        if ( v45 - v41 > 0x400 )
          v44 += 2048;
      }
      else
      {
        v41 -= v45;
        v46 = v44 - 2048;
        if ( v41 <= 0x400 )
          v46 = v44;
        v44 = v46;
      }
      v47 = _InterlockedExchange64(
              (volatile __int64 *)(v39 + 432),
              ((unsigned __int64)v44 >> 11) | ((v40 - (v44 & 0x7FF)) << 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v47) = 5;
        WPP_RECORDER_SF_D(
          *(_QWORD *)(v39 + 72),
          v47,
          4,
          177,
          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
          v44);
      }
      v48 = *(_DWORD *)(v22 + 128) - v44;
      if ( v48 <= 0 )
        v48 = v44 - *(_DWORD *)(v22 + 128);
      if ( v48 <= 1024 )
        *(_BYTE *)(a1 + 334) = 0;
      else
        v21 = -1073741823;
      v17 = a1 + 56;
      v49 = v97;
      v20 = a1 + 48;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDDDD(
          *(_QWORD *)(*(_QWORD *)v17 + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL),
          v41,
          v16,
          v92,
          *(_BYTE *)(*(_QWORD *)v20 + 135LL),
          *(_DWORD *)(*(_QWORD *)v17 + 144LL),
          *(_QWORD *)(v97 + 24),
          *(_DWORD *)(v22 + 132),
          v44,
          *(_DWORD *)(v22 + 128),
          *(_DWORD *)(a1 + 360));
      if ( v21 >= 0 )
      {
        v50 = *(_QWORD *)(v49 + 48);
        if ( *(_WORD *)(v50 + 2) != 10 )
        {
          switch ( *(_WORD *)(v50 + 2) )
          {
            case '9':
            case ':':
              if ( !*(_BYTE *)(a1 + 280) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v51 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
                  LOBYTE(v51) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)v17 + 80LL),
                    v51,
                    v41,
                    30,
                    (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
                    *(_BYTE *)(*(_QWORD *)v20 + 135LL),
                    *(_DWORD *)(*(_QWORD *)v17 + 144LL),
                    *(_QWORD *)(v49 + 48));
                }
                v52 = -1073741811;
LABEL_93:
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v55 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
                  LOBYTE(v55) = 2;
                  WPP_RECORDER_SF_DDqd(
                    *(_QWORD *)(*(_QWORD *)v17 + 80LL),
                    v55,
                    v52,
                    61,
                    (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
                    *(_BYTE *)(*(_QWORD *)v20 + 135LL),
                    *(_DWORD *)(*(_QWORD *)v17 + 144LL),
                    v96,
                    v52);
                }
                Isoch_Transfer_Complete(a1, v49, -1, -2147482880, 0);
                goto LABEL_127;
              }
              if ( !*(_BYTE *)(*(_QWORD *)v20 + 672LL) )
              {
                Feature_SecureUSBDeviceFirmwareHashCheck__private_ReportDeviceUsage();
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v54 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
                  LOBYTE(v54) = 2;
                  WPP_RECORDER_SF_DDi(
                    *(_QWORD *)(*(_QWORD *)v17 + 80LL),
                    v54,
                    v53,
                    31,
                    (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
                    *(_BYTE *)(*(_QWORD *)v20 + 135LL),
                    *(_DWORD *)(*(_QWORD *)v17 + 144LL),
                    v50);
                }
                v52 = -1073741790;
                goto LABEL_93;
              }
              break;
            default:
              break;
          }
        }
        v56 = (unsigned int)(*(_DWORD *)(v49 + 104) + *(_DWORD *)(v49 + 108));
        v57 = *(_QWORD *)(a1 + 40);
        v93 = *(_QWORD *)(v49 + 48);
        v58 = *(_DWORD *)(v50 + 128) + (unsigned int)(v56 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356);
        v94 = v58;
        v59 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v57 + 444) / 10000LL;
        v60 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v57 + 88) + 40LL) + 2) >> 3) & 0x7FF;
        _m_prefetchw((const void *)(v57 + 432));
        v61 = *(_QWORD *)(v57 + 432);
        do
        {
          v62 = v61;
          v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 432), v61, v61);
        }
        while ( v62 != v61 );
        v63 = v60 | (v59 + ((_DWORD)v61 << 11) - (v61 >> 21)) & 0xFFFFF800;
        v64 = ((_WORD)v59 + ((_WORD)v61 << 11) - (unsigned __int16)(v61 >> 21)) & 0x7FF;
        if ( v64 >= v60 )
        {
          if ( v64 - v60 > 0x400 )
            v63 += 2048;
        }
        else
        {
          v65 = v60 - v64;
          v66 = v63 - 2048;
          if ( v65 <= 0x400 )
            v66 = v63;
          v63 = v66;
        }
        v67 = _InterlockedExchange64(
                (volatile __int64 *)(v57 + 432),
                ((unsigned __int64)v63 >> 11) | ((v59 - (v63 & 0x7FF)) << 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v67) = 5;
          WPP_RECORDER_SF_D(
            *(_QWORD *)(v57 + 72),
            v67,
            4,
            177,
            (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
            v63);
          v58 = v94;
        }
        v68 = *(_DWORD *)(a1 + 356);
        v69 = v97;
        v70 = (v68 + *(_DWORD *)(v97 + 96) - (_DWORD)v56 - 1) % v68;
        v95 = (v68 + *(_DWORD *)(v97 + 96) - (_DWORD)v56 - 1) / v68;
        v71 = v95;
        if ( v95 )
        {
          v72 = 0;
          v73 = v58 - v63;
          do
          {
            if ( v58 + v72 > v63 && v73 + v72 < 0x7FFFFFFF )
              break;
            if ( v68 )
            {
              do
              {
                *(_DWORD *)(v93 + 12 * v56 + 148) = -1073414144;
                *(_DWORD *)(v69 + 92) += Isoch_GetPacketLength(v69, (unsigned int)v56);
                v56 = (unsigned int)(v56 + 1);
                ++*(_DWORD *)(v69 + 108);
                v68 = *(_DWORD *)(a1 + 356);
              }
              while ( v74 + 1 < v68 );
              v71 = v95;
              v58 = v94;
            }
            ++v72;
          }
          while ( v72 < v71 );
        }
        if ( *(_DWORD *)(*(_QWORD *)(v69 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v69 + 96) - 1) + 148) == -1073414144 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v70) = 4;
            WPP_RECORDER_SF_DD(
              *(_QWORD *)(*(_QWORD *)v17 + 80LL),
              v70,
              14,
              62,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              *(_BYTE *)(*(_QWORD *)v20 + 135LL),
              *(_DWORD *)(*(_QWORD *)v17 + 144LL));
          }
          Isoch_Transfer_Complete(a1, v69, 0, 0, 1);
        }
        else if ( *(_DWORD *)(v69 + 80) )
        {
          *(_DWORD *)(v69 + 64) = 1;
          v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01023
                                                                                                + 3144))(
                 WdfDriverGlobals,
                 *(_QWORD *)(v69 + 24),
                 Isoch_WdfEvtRequestCancel);
          if ( v2 >= 0 )
          {
            v78 = *(_BYTE *)(v69 + 130);
            v79 = *(unsigned __int8 *)(v69 + 129);
            if ( v78 == (_BYTE)v79 )
            {
              v80 = 0;
              v81 = 0LL;
            }
            else
            {
              v82 = *(unsigned __int8 *)(v69 + 131);
              v83 = v82 * (unsigned int)*(unsigned __int8 *)(v69 + 128);
              *(_BYTE *)(v69 + 130) = v78 + 1;
              v81 = v83 + v69 + 144;
              *(_BYTE *)(v69 + 131) = (v82 + 1) % v79;
              v80 = 0;
              if ( v81 )
              {
                v84 = *(_QWORD *)(v69 + 56);
                *(_QWORD *)(v81 + 16) = v81 + 8;
                *(_QWORD *)(v81 + 8) = v81 + 8;
                *(_QWORD *)(v81 + 32) = v81 + 24;
                *(_QWORD *)(v81 + 24) = v81 + 24;
                *(_QWORD *)(v81 + 72) = 0LL;
                *(_QWORD *)v81 = v69;
                *(_DWORD *)(v81 + 40) = -2;
                *(_DWORD *)(v81 + 44) = -2;
                *(_QWORD *)(v81 + 48) = 1LL;
                *(_BYTE *)(v81 + 56) = 0;
                *(_QWORD *)(v81 + 64) = 0LL;
                *(_QWORD *)(v81 + 80) = *(_QWORD *)(v84 + 176);
                *(_DWORD *)(v81 + 88) = *(_DWORD *)(v84 + 192);
                *(_QWORD *)(v81 + 96) = *(_QWORD *)(v84 + 176);
                *(_DWORD *)(v81 + 104) = *(_DWORD *)(v84 + 192);
                *(_QWORD *)(v81 + 112) = *(_QWORD *)(v84 + 176);
                *(_DWORD *)(v81 + 120) = *(_DWORD *)(v84 + 192);
                *(_DWORD *)(v81 + 160) = 0;
                if ( *(_BYTE *)(v84 + 280) )
                {
                  *(_QWORD *)(v81 + 184) = 0LL;
                  *(_DWORD *)(v81 + 168) = 1;
                  *(_QWORD *)(v81 + 72) = v81 + 168;
                  *(_DWORD *)(v81 + 192) = 0;
                }
                *(_OWORD *)(v81 + 128) = 0LL;
                *(_OWORD *)(v81 + 144) = 0LL;
              }
            }
            v5 = *(_DWORD *)(a1 + 376) == 0;
            *(_QWORD *)(a1 + 368) = v81;
            if ( v5 )
            {
              v85 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v85 + 24) > 1u )
              {
                v86 = *(unsigned int *)(*(_QWORD *)(v69 + 48) + 64LL);
                if ( (unsigned int)v86 < *(_DWORD *)(v85 + 48) )
                  v80 = *(_WORD *)(*(_QWORD *)(v85 + 56) + 2 * v86);
              }
              *(_WORD *)(a1 + 112) = v80;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v87 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
              LOBYTE(v87) = 4;
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)v17 + 80LL),
                v87,
                v81,
                65,
                (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
                *(_BYTE *)(*(_QWORD *)v20 + 135LL),
                *(_DWORD *)(*(_QWORD *)v17 + 144LL),
                *(_QWORD *)(v69 + 24),
                v81);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
            v88 = *(_QWORD **)(a1 + 392);
            if ( *v88 != a1 + 384 )
              __fastfail(3u);
            *(_QWORD *)v69 = a1 + 384;
            *(_QWORD *)(v69 + 8) = v88;
            *v88 = v69;
            *(_QWORD *)(a1 + 392) = v69;
            goto LABEL_5;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v77 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
            LOBYTE(v77) = 4;
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(*(_QWORD *)v17 + 80LL),
              v77,
              v76,
              64,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              *(_BYTE *)(*(_QWORD *)v20 + 135LL),
              *(_DWORD *)(*(_QWORD *)v17 + 144LL),
              *(_QWORD *)(v69 + 24),
              v2);
          }
          *(_DWORD *)(v69 + 64) = 3;
          Isoch_Transfer_Complete(a1, v69, -1, -1073676288, 0);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v75 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
            LOBYTE(v75) = 4;
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(*(_QWORD *)v17 + 80LL),
              v75,
              v68,
              63,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              *(_BYTE *)(*(_QWORD *)v20 + 135LL),
              *(_DWORD *)(*(_QWORD *)v17 + 144LL),
              v96);
          }
          Isoch_Transfer_Complete(a1, v69, -1, -1, 1);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v48) = 2;
          WPP_RECORDER_SF_DDqd(
            *(_QWORD *)(*(_QWORD *)v17 + 80LL),
            v48,
            *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL),
            60,
            (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
            *(_BYTE *)(*(_QWORD *)v20 + 135LL),
            *(_DWORD *)(*(_QWORD *)v17 + 144LL),
            v96,
            v21);
        }
        Isoch_Transfer_Complete(a1, v49, -1073414144, -1073739264, 0);
      }
LABEL_127:
      v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 72),
             &v96);
      if ( v2 < 0 )
        goto LABEL_146;
    }
    v34 = *(_DWORD *)(v22 + 128);
    goto LABEL_58;
  }
  v17 = a1 + 56;
  v20 = a1 + 48;
LABEL_146:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v89 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
    LOBYTE(v89) = 5;
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)v17 + 80LL),
      v89,
      14,
      57,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(*(_QWORD *)v20 + 135LL),
      *(_DWORD *)(*(_QWORD *)v17 + 144LL),
      v2);
  }
  if ( !*(_DWORD *)(a1 + 376) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v90 = *(unsigned __int8 *)(*(_QWORD *)v20 + 135LL);
    LOBYTE(v90) = 3;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)v17 + 80LL),
      v90,
      14,
      58,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(*(_QWORD *)v20 + 135LL),
      *(_DWORD *)(*(_QWORD *)v17 + 144LL));
  }
  return v2 >= 0;
}
