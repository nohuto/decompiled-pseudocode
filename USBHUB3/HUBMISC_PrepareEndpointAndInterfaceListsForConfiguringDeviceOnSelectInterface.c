/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F848
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface @ 0x1C00245A0 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1C002DB3C (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Ddddd @ 0x1C002DD44 (WPP_RECORDER_SF_Ddddd.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003599C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  KIRQL v7; // al
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r14
  _QWORD *v14; // rax
  int v15; // ebx
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // r8
  __int16 v19; // cx
  _QWORD *v20; // r12
  __int64 v21; // rax
  size_t v22; // r15
  unsigned __int8 *v23; // r8
  _DWORD *v24; // r11
  unsigned __int64 v25; // rbx
  unsigned int v26; // r14d
  __int64 v27; // r10
  _BYTE *v28; // rax
  unsigned __int16 v29; // r9
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  __int16 v33; // dx
  char v34; // cl
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // r8d
  unsigned int v42; // r9d
  char *v43; // rdx
  unsigned int v44; // r11d
  int v45; // r10d
  unsigned int *v46; // rdx
  unsigned int v47; // r8d
  __int64 v48; // r10
  _QWORD *v49; // r14
  __int64 v50; // rax
  _QWORD *v51; // rbx
  __int64 v52; // r12
  unsigned int v53; // ecx
  int v54; // r9d
  unsigned int v55; // eax
  _QWORD *v56; // r15
  unsigned int v57; // edx
  __int64 v58; // r8
  _QWORD *v59; // rax
  unsigned int v60; // r15d
  unsigned int v61; // eax
  void *v62; // rcx
  void *v63; // rcx
  void *v64; // rcx
  __int64 Pool2; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  void *v68; // rcx
  void *v69; // rcx
  void *v70; // rcx
  char v71; // al
  _QWORD *v72; // r9
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  unsigned int v75; // r8d
  int v76; // ecx
  __int64 v77; // rcx
  __int64 v78; // rdx
  _QWORD *i; // rax
  unsigned int j; // r9d
  __int64 v82; // rax
  _QWORD *v83; // r8
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  void **v86; // rcx
  __int64 v87; // [rsp+28h] [rbp-E0h]
  __int64 v88; // [rsp+30h] [rbp-D8h]
  __int64 v89; // [rsp+38h] [rbp-D0h]
  __int64 v90; // [rsp+40h] [rbp-C8h]
  __int64 v91; // [rsp+48h] [rbp-C0h]
  int v92; // [rsp+50h] [rbp-B8h]
  __int64 v93; // [rsp+78h] [rbp-90h] BYREF
  void *v94; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int8 v95; // [rsp+88h] [rbp-80h]
  __int64 v96; // [rsp+90h] [rbp-78h]
  unsigned int v97; // [rsp+98h] [rbp-70h]
  unsigned int v98; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v99; // [rsp+A0h] [rbp-68h]
  _QWORD *v100; // [rsp+A8h] [rbp-60h]
  __int64 v101; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD *v102; // [rsp+B8h] [rbp-50h]
  __int128 v103; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v104; // [rsp+D0h] [rbp-38h]
  __int128 v105; // [rsp+E0h] [rbp-28h]
  __int64 v106; // [rsp+F0h] [rbp-18h]
  _OWORD v107[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v108; // [rsp+118h] [rbp+10h]

  LODWORD(v106) = 0;
  v101 = 0LL;
  LOBYTE(v93) = 0;
  v94 = 0LL;
  v99 = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  v2 = *(_QWORD *)(a1 + 456);
  v108 = 0LL;
  memset(v107, 0, sizeof(v107));
  LOWORD(v107[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v107);
  v3 = *((_QWORD *)&v107[0] + 1);
  v4 = (_DWORD *)(*((_QWORD *)&v107[0] + 1) + 32LL);
  if ( *(_WORD *)(*((_QWORD *)&v107[0] + 1) + 2LL) == 1 )
  {
    v5 = *((_QWORD *)&v107[0] + 1) + 32LL;
    *(_DWORD *)(a1 + 148) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = *((_QWORD *)&v107[0] + 1) + 48LL;
    *(_DWORD *)(a1 + 148) = *v4;
    v6 = 0LL;
    if ( *v4 )
      v6 = *(_QWORD *)(v3 + 40);
  }
  *(_QWORD *)(a1 + 152) = v6;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(unsigned __int8 *)(v5 + 3);
  v11 = *(unsigned __int8 *)(v5 + 2);
  v96 = *(_QWORD *)(a1 + 48);
  v8 = v96;
  v12 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                             (int)v8 + 32,
                             (int)v8 + 32,
                             v11,
                             v10,
                             -1,
                             -1,
                             -1,
                             (__int64)&v93,
                             *(_QWORD *)(v9 + 1432));
  v13 = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x22u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
    *(_DWORD *)(a1 + 1564) = -1073725440;
    v14 = (_QWORD *)(v5 + 8);
    v15 = -1073741823;
    goto LABEL_159;
  }
  v16 = *(_DWORD **)(a1 + 2448);
  if ( v16 )
  {
    v17 = 0;
    if ( *v16 )
    {
      while ( *((_BYTE *)v16 + 2 * v17 + 5) != v12[3] || *((_BYTE *)v16 + 2 * v17 + 4) != v12[2] )
      {
        if ( ++v17 >= *v16 )
          goto LABEL_16;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
    }
  }
LABEL_16:
  v18 = (unsigned int)ExDefaultNonPagedPoolType;
  v19 = v12[4] + 1;
  *(_DWORD *)(v5 + 4) = 0;
  v20 = (_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_WORD *)v5 = 24 * v19;
  *(_DWORD *)(v5 + 16) = v12[4];
  *(_QWORD *)&v104 = 0LL;
  v106 = 0LL;
  v103 = 0LL;
  *((_QWORD *)&v104 + 1) = 0x100000001LL;
  v105 = 0LL;
  LODWORD(v103) = 56;
  v21 = *(unsigned int *)(v5 + 16);
  v100 = (_QWORD *)(v5 + 8);
  v22 = 72 * v21 + 40;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, size_t, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v103,
          v18,
          1681082453LL,
          v22,
          &v101,
          &v94);
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x23u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        v88);
    }
    goto LABEL_19;
  }
  memset(v94, 0, v22);
  *(_QWORD *)v94 = v101;
  *((_QWORD *)v94 + 4) = v13;
  *((_DWORD *)v94 + 6) = v13[4];
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_BYTE)v93 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)v94 + 7, 1u);
    _InterlockedOr((volatile signed __int32 *)v94 + 7, 2u);
    *(_QWORD *)(a1 + 64) = v94;
  }
  *(_BYTE *)(v5 + 4) = v13[5];
  *(_BYTE *)(v5 + 5) = v13[6];
  *(_BYTE *)(v5 + 6) = v13[7];
  v23 = &v13[*v13];
  v24 = v94;
  v25 = *(unsigned __int16 *)(v8 + 34) + v8 + 32;
  v26 = 0;
  if ( *(_DWORD *)(v5 + 16) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v23 >= v25 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v29 = 22;
        goto LABEL_95;
      }
      v27 = 9LL * v26;
      v24[2 * v27 + 16] = *(_DWORD *)(v5 + 24LL * v26 + 44);
      v28 = v23 + 1;
      v24[2 * v27 + 12] = 1;
      if ( (unsigned __int64)(v23 + 1) >= v25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = 23;
          goto LABEL_95;
        }
        goto LABEL_96;
      }
      while ( *v28 != 5 )
      {
        v30 = *v23;
        if ( !(_BYTE)v30 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v29 = 24;
          goto LABEL_95;
        }
        v23 += v30;
        if ( (unsigned __int64)v23 >= v25 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_96;
          v29 = 25;
LABEL_95:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            2u,
            5u,
            v29,
            (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
          goto LABEL_96;
        }
        v28 = v23 + 1;
        if ( (unsigned __int64)(v23 + 1) >= v25 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = 26;
            goto LABEL_95;
          }
LABEL_96:
          v15 = -1073741823;
          *(_DWORD *)(a1 + 1564) = -1073725440;
LABEL_19:
          v14 = v20;
LABEL_159:
          *(_DWORD *)(a1 + 148) = 0;
          *(_QWORD *)(a1 + 152) = 0LL;
          *v14 = -1LL;
          if ( v94 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
              WdfDriverGlobals,
              *(_QWORD *)v94);
            *(_QWORD *)(a1 + 64) = 0LL;
          }
          *(_DWORD *)(a1 + 1560) = v15;
          if ( !*(_DWORD *)(a1 + 1564) )
            *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v15);
          return ((v15 >> 31) & 0xFFFFFFF4) + 4077;
        }
      }
      if ( (unsigned __int64)(v23 + 7) > v25 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v29 = 28;
        goto LABEL_95;
      }
      if ( (*(_DWORD *)(v5 + 24LL * v26 + 44) & 1) != 0 )
        *((_WORD *)v23 + 2) = *(_WORD *)(v5 + 24LL * v26 + 24);
      v31 = *(_DWORD *)(v5 + 24LL * v26 + 44) & 0xF0;
      if ( v31 == 16 )
      {
        v24[18 * v26 + 26] = 1;
      }
      else if ( v31 == 32 )
      {
        v24[18 * v26 + 26] = 2;
      }
      else
      {
        v32 = 3;
        if ( v31 != 48 )
          v32 = 0;
        v24[18 * v26 + 26] = v32;
      }
      *(_QWORD *)&v24[18 * v26 + 18] = v23;
      v24[18 * v26 + 20] = v25 - (_DWORD)v23;
      if ( *(_WORD *)(a1 + 1990) >= 0x250u )
        v33 = *((_WORD *)v23 + 2);
      else
        v33 = (*((_WORD *)v23 + 2) & 0x7FF) * (((*((_WORD *)v23 + 2) >> 11) & 3) + 1);
      *(_WORD *)(v5 + 24LL * v26 + 24) = v33;
      v34 = 6;
      if ( v23[6] < 6u )
        v34 = v23[6];
      *(_BYTE *)(v5 + 24LL * v26 + 27) = v34;
      *(_BYTE *)(v5 + 24LL * v26 + 26) = v23[2];
      if ( (v23[3] & 3) == 0 )
      {
        *(_DWORD *)(v5 + 24LL * v26 + 28) = 0;
        goto LABEL_55;
      }
      if ( (v23[3] & 3) == 1 )
        break;
      if ( (v23[3] & 3) == 2 )
      {
        *(_DWORD *)(v5 + 24LL * v26 + 28) = 2;
      }
      else if ( (v23[3] & 3) == 3 )
      {
        v35 = 3;
LABEL_53:
        *(_DWORD *)(v5 + 24LL * v26 + 28) = v35;
      }
LABEL_55:
      if ( !v33 )
        _InterlockedOr(&v24[18 * v26 + 13], 1u);
      v36 = *v23;
      if ( !(_BYTE)v36 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_96;
        v29 = 29;
        goto LABEL_95;
      }
      v23 += v36;
      if ( (unsigned __int64)v23 < v25 && (unsigned __int64)(v23 + 1) < v25 && v23[1] == 48 )
      {
        if ( *v23 )
        {
          if ( (unsigned __int64)(v23 + 6) <= v25 )
          {
            v37 = *(_QWORD *)&v24[18 * v26 + 18];
            *(_QWORD *)&v24[18 * v26 + 22] = v23;
            if ( (*(_BYTE *)(v37 + 3) & 3) == 1 )
            {
              if ( (v24[18 * v26 + 13] & 1) == 0 )
                *(_WORD *)(v5 + 24LL * v26 + 24) = *((_WORD *)v23 + 2);
              if ( (v23[3] & 0x80u) != 0 )
              {
                v23 += *v23;
                if ( (unsigned __int64)v23 < v25 && (unsigned __int64)(v23 + 1) < v25 && v23[1] == 49 )
                {
                  if ( *v23 )
                  {
                    if ( (unsigned __int64)(v23 + 8) <= v25 )
                    {
                      v38 = v24[18 * v26 + 13];
                      *(_QWORD *)&v24[18 * v26 + 24] = v23;
                      if ( (v38 & 1) == 0 )
                      {
                        v39 = *((_DWORD *)v23 + 1);
                        if ( v39 > 0xFFFF )
                        {
                          v40 = *(_DWORD *)(v5 + 24LL * v26 + 44);
                          if ( (v40 & 0x100) != 0 )
                          {
                            *(_DWORD *)(v5 + 24LL * v26 + 40) = v39;
                            *(_DWORD *)(v5 + 24LL * v26 + 44) = v40 | 0x10000;
                          }
                        }
                        else
                        {
                          *(_WORD *)(v5 + 24LL * v26 + 24) = v39;
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
      if ( ++v26 >= *(_DWORD *)(v5 + 16) )
        goto LABEL_78;
    }
    v35 = 1;
    goto LABEL_53;
  }
LABEL_78:
  v41 = 0;
  v42 = *((_DWORD *)v94 + 6);
  if ( v42 )
  {
    v43 = (char *)v94 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v43 + 2LL) & 0xF) != 0 )
    {
      v43 += 72;
      if ( ++v41 >= v42 )
        goto LABEL_97;
    }
    goto LABEL_109;
  }
LABEL_97:
  v44 = *(_DWORD *)(a1 + 148);
  v45 = 0;
  v46 = *(unsigned int **)(a1 + 152);
  if ( v44 )
  {
    while ( 1 )
    {
      v47 = 0;
      if ( v42 )
      {
        do
        {
          if ( *(unsigned __int8 *)(*((_QWORD *)v94 + 9 * v47 + 9) + 2LL) == *((_WORD *)v46 + 2) )
            break;
          ++v47;
        }
        while ( v47 < v42 );
        v20 = (_QWORD *)(v5 + 8);
      }
      if ( v47 == v42 )
        break;
      v46 = (unsigned int *)((char *)v46 + *v46);
      if ( ++v45 >= v44 )
        goto LABEL_104;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v88) = *((unsigned __int16 *)v46 + 2);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x24u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        v88);
    }
LABEL_109:
    v15 = -1073741823;
    *(_DWORD *)(a1 + 1564) = -1072693239;
    goto LABEL_19;
  }
LABEL_104:
  v48 = v96;
  *(_QWORD *)(a1 + 72) = 0LL;
  LOBYTE(v93) = 0;
  v49 = (_QWORD *)(v48 + 16);
  v50 = *(_QWORD *)(v48 + 16);
  v51 = (_QWORD *)(v50 - 8);
  if ( v48 + 16 == v50 )
    goto LABEL_121;
  do
  {
    v52 = v51[4];
    v95 = *(_BYTE *)(v52 + 2);
    if ( v95 == *(_BYTE *)(v5 + 2) )
    {
      v99 = v51;
      LOBYTE(v93) = 1;
      goto LABEL_119;
    }
    v53 = *((_DWORD *)v51 + 6);
    v54 = 0;
    v102 = v94;
    v98 = v53;
    if ( v53 )
    {
      v55 = *((_DWORD *)v94 + 6);
      v56 = v51;
      v97 = v55;
LABEL_112:
      v56 += 9;
      v57 = 0;
      if ( !v55 )
        goto LABEL_118;
      while ( 1 )
      {
        v58 = *((_QWORD *)v94 + 9 * v57 + 9);
        if ( *(_BYTE *)(*v56 + 2LL) == *(_BYTE *)(v58 + 2) && *(_WORD *)(*v56 + 4LL) && *(_WORD *)(v58 + 4) )
          break;
        v55 = v97;
        if ( ++v57 >= v97 )
        {
          v53 = v98;
LABEL_118:
          if ( ++v54 >= v53 )
            goto LABEL_119;
          goto LABEL_112;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v77 = *((_QWORD *)v94 + 4);
        v92 = *(unsigned __int8 *)(v77 + 3);
        LODWORD(v91) = *(unsigned __int8 *)(v77 + 2);
        LODWORD(v89) = v95;
        WORD1(v88) = 0;
        WPP_RECORDER_SF_Ddddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          *(unsigned __int8 *)(v77 + 2),
          *(unsigned __int8 *)(v52 + 3),
          v95,
          v87);
      }
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x10) != 0 )
      {
        v78 = v51[4];
        LOBYTE(v92) = *(_BYTE *)(v78 + 2);
        LOBYTE(v91) = *(_BYTE *)(*v56 + 2LL);
        LODWORD(v90) = *(_DWORD *)(a1 + 172);
        LOWORD(v89) = *(_WORD *)(a1 + 2000);
        LOWORD(v88) = *(_WORD *)(a1 + 1998);
        LOWORD(v87) = *(_WORD *)(a1 + 1996);
        McTemplateK0phhhquuuuu_EtwWriteTransfer(
          v102[4],
          v78,
          (const GUID *)(a1 + 1516),
          *(_QWORD *)(a1 + 24),
          v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          *(_BYTE *)(v78 + 3),
          *(_BYTE *)(v102[4] + 2LL),
          *(_BYTE *)(v102[4] + 3LL));
      }
      v15 = -1073741811;
      goto LABEL_158;
    }
LABEL_119:
    v59 = (_QWORD *)v51[1];
    v51 = v59 - 1;
  }
  while ( v49 != v59 );
  v48 = v96;
LABEL_121:
  v15 = 0;
  v60 = *(_DWORD *)(v48 + 8) + *((_DWORD *)v94 + 6);
  v61 = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  if ( !v61 )
  {
LABEL_129:
    if ( !*(_DWORD *)(a1 + 96) && v60 )
    {
      Pool2 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
      *(_QWORD *)(a1 + 104) = Pool2;
      if ( Pool2 )
      {
        v66 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
        *(_QWORD *)(a1 + 136) = v66;
        if ( v66 )
        {
          v67 = ExAllocatePool2(64LL, 8LL * v60, 1681082453LL);
          *(_QWORD *)(a1 + 120) = v67;
          if ( v67 )
          {
            *(_DWORD *)(a1 + 96) = v60;
            v15 = 0;
            goto LABEL_143;
          }
        }
      }
      v68 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      v15 = -1073741670;
      if ( v68 )
      {
        ExFreePoolWithTag(v68, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v69 = *(void **)(a1 + 136);
      if ( v69 )
      {
        ExFreePoolWithTag(v69, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v70 = *(void **)(a1 + 120);
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v88) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
          v88);
      }
    }
    if ( v15 < 0 )
    {
LABEL_158:
      v14 = v100;
      goto LABEL_159;
    }
LABEL_143:
    v48 = v96;
    goto LABEL_144;
  }
  if ( v60 > v61 )
  {
    v62 = *(void **)(a1 + 104);
    *(_DWORD *)(a1 + 96) = 0;
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0x64334855u);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v63 = *(void **)(a1 + 136);
    if ( v63 )
    {
      ExFreePoolWithTag(v63, 0x64334855u);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v64 = *(void **)(a1 + 120);
    if ( v64 )
    {
      ExFreePoolWithTag(v64, 0x64334855u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    goto LABEL_129;
  }
LABEL_144:
  v71 = v93;
  v72 = v99;
  if ( (_BYTE)v93 )
    v60 -= *((_DWORD *)v99 + 6);
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  if ( v71 )
  {
    v73 = v72[1];
    if ( *(_QWORD **)(v73 + 8) == v72 + 1 )
    {
      v74 = (_QWORD *)v72[2];
      if ( (_QWORD *)*v74 == v72 + 1 )
      {
        *v74 = v73;
        v75 = 0;
        *(_QWORD *)(v73 + 8) = v74;
        for ( *(_QWORD *)(a1 + 72) = v72; v75 < *((_DWORD *)v72 + 6); ++v75 )
        {
          v76 = v72[9 * v75 + 6];
          if ( v76 == 4 )
          {
            LODWORD(v72[9 * v75 + 6]) = 5;
            *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = v72[9 * v75 + 5];
          }
          else if ( v76 == 6 )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v72[9 * v75 + 5];
          }
        }
        goto LABEL_167;
      }
    }
LABEL_173:
    __fastfail(3u);
  }
LABEL_167:
  for ( i = (_QWORD *)*v49; ; i = (_QWORD *)v83[1] )
  {
    v83 = i - 1;
    if ( v49 == i )
      break;
    for ( j = 0; j < *((_DWORD *)v83 + 6); ++*(_DWORD *)(a1 + 144) )
    {
      v82 = j++;
      *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)) = v83[9 * v82 + 5];
    }
  }
  v84 = (_QWORD *)v49[1];
  v85 = (char *)v94 + 8;
  if ( (_QWORD *)*v84 != v49 )
    goto LABEL_173;
  v86 = (void **)v100;
  *v85 = v49;
  v85[1] = v84;
  *v84 = v85;
  v49[1] = v85;
  *(_QWORD *)(a1 + 80) = v94;
  *(_DWORD *)(v48 + 8) = v60;
  *v86 = v94;
  return ((v15 >> 31) & 0xFFFFFFF4) + 4077;
}
