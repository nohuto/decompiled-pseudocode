/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBC0
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration @ 0x1C001FA50 (HUBDSM_PreparingEndpointAndInterfaceListsOnSelectConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C002DE78 (WPP_RECORDER_SF_Dq.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003599C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned __int16 *v4; // r13
  KIRQL v5; // al
  __int64 v6; // r15
  size_t v7; // r14
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int v10; // r8d
  _QWORD *v11; // r14
  _QWORD **v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // r10
  unsigned __int16 *v15; // r12
  unsigned __int64 v16; // rcx
  bool i; // cf
  __int64 v18; // rax
  unsigned __int16 *v19; // r13
  int v20; // r9d
  int v21; // r8d
  unsigned __int8 *v22; // rax
  unsigned __int8 *v23; // r14
  _DWORD *v24; // rcx
  unsigned int v25; // edx
  _DWORD *v26; // rcx
  __int64 v27; // r8
  char *v28; // r12
  size_t v29; // r12
  _QWORD *v30; // r12
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  unsigned int v33; // r12d
  unsigned __int8 *v34; // r8
  _DWORD *v35; // r14
  unsigned __int64 v36; // r11
  __int64 v37; // r10
  _BYTE *v38; // rax
  unsigned __int16 v39; // r9
  __int64 v40; // rax
  int v41; // ecx
  int v42; // eax
  unsigned __int16 v43; // dx
  char v44; // cl
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  __int64 *v51; // r13
  __int64 v52; // r9
  _QWORD *j; // rax
  _QWORD *v54; // rdx
  unsigned int v55; // ebx
  unsigned int v56; // r10d
  _QWORD *v57; // r8
  __int64 v58; // rdx
  unsigned __int16 v59; // r11
  __int64 v60; // r8
  _QWORD *m; // rax
  _QWORD *v62; // rbx
  unsigned int v63; // r12d
  char *v64; // r10
  __int64 v65; // rcx
  unsigned __int16 *v66; // r14
  char v67; // r11
  __int64 v68; // r14
  unsigned int v69; // eax
  void *v70; // rcx
  void *v71; // rcx
  void *v72; // rcx
  __int64 Pool2; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  void *v76; // rcx
  void *v77; // rcx
  void *v78; // rcx
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  __int64 v81; // r8
  unsigned int k; // r9d
  int v83; // ecx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  _QWORD *v86; // rcx
  int v88; // [rsp+28h] [rbp-E0h]
  __int64 *v89; // [rsp+30h] [rbp-D8h]
  __int64 v90; // [rsp+48h] [rbp-C0h]
  __int16 v91[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v92; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int16 v93; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v94; // [rsp+64h] [rbp-A4h] BYREF
  void *v95; // [rsp+68h] [rbp-A0h]
  __int64 v96; // [rsp+70h] [rbp-98h]
  _DWORD *v97; // [rsp+78h] [rbp-90h]
  __int64 v98; // [rsp+80h] [rbp-88h] BYREF
  __int64 v99; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v100; // [rsp+90h] [rbp-78h]
  _QWORD *v101; // [rsp+98h] [rbp-70h]
  __int64 v102; // [rsp+A0h] [rbp-68h]
  __int128 v103; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-50h]
  __int64 v105; // [rsp+C0h] [rbp-48h]
  __int128 v106; // [rsp+C8h] [rbp-40h]
  __int64 v107; // [rsp+D8h] [rbp-30h]
  unsigned __int16 *v108; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v109; // [rsp+E8h] [rbp-20h]
  _OWORD v110[2]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v111; // [rsp+110h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 456);
  v2 = 0LL;
  DWORD1(v103) = 0;
  v111 = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  memset(v110, 0, sizeof(v110));
  LOWORD(v110[0]) = 40;
  v98 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v110);
  v4 = (unsigned __int16 *)*((_QWORD *)&v110[0] + 1);
  v102 = *((_QWORD *)&v110[0] + 1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFEF);
  v6 = a1 + 48;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFF7FFF);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  v107 = 0LL;
  v104 = 0LL;
  v103 = 0LL;
  v105 = 0x100000001LL;
  v106 = 0LL;
  LODWORD(v103) = 56;
  v7 = *(unsigned __int16 *)(*((_QWORD *)v4 + 3) + 2LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, size_t, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v103,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL,
         v7 + 39,
         &v98,
         a1 + 48);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v9 = 31;
    v10 = 5;
LABEL_4:
    LODWORD(v89) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      v10,
      v9,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v89);
    goto LABEL_5;
  }
  v13 = *(_QWORD **)v6;
  v101 = v13;
  *v13 = v98;
  memmove((void *)(*(_QWORD *)v6 + 32LL), *((const void **)v4 + 3), v7);
  LODWORD(v96) = 0;
  LODWORD(v14) = (_DWORD)v13 + 32;
  v13[3] = v13 + 2;
  v13[2] = v13 + 2;
  v15 = v4 + 20;
  v16 = (unsigned __int64)v4 + *v4;
  v100 = v13 + 4;
  v109 = v16;
  for ( i = (unsigned __int64)(v4 + 21) < v16; i; i = (unsigned __int64)(v108 + 1) < v109 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v99 = 0LL;
    v95 = 0LL;
    v19 = v15;
    v20 = *((unsigned __int8 *)v15 + 3);
    v21 = *((unsigned __int8 *)v15 + 2);
    v90 = *(_QWORD *)(v18 + 1432);
    LOBYTE(v91[0]) = 0;
    v22 = (unsigned __int8 *)HUBDESC_ParseConfigurationDescriptor(
                               (_DWORD)v14,
                               (_DWORD)v14,
                               v21,
                               v20,
                               -1,
                               -1,
                               -1,
                               (__int64)v91,
                               v90);
    v23 = v22;
    if ( !v22 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_95;
      v39 = 32;
      goto LABEL_94;
    }
    v24 = *(_DWORD **)(a1 + 2448);
    if ( v24 )
    {
      v25 = 0;
      if ( *v24 )
      {
        while ( *((_BYTE *)v24 + 2 * v25 + 5) != v22[3] || *((_BYTE *)v24 + 2 * v25 + 4) != v22[2] )
        {
          if ( ++v25 >= *v24 )
            goto LABEL_20;
        }
        _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x8000u);
      }
    }
LABEL_20:
    v26 = v15 + 8;
    v27 = (unsigned int)ExDefaultNonPagedPoolType;
    *((_DWORD *)v15 + 4) = v22[4];
    LODWORD(v96) = v22[4] + (_DWORD)v96;
    v28 = (char *)v15 + *v15;
    v97 = v26;
    v108 = (unsigned __int16 *)v28;
    v107 = 0LL;
    v104 = 0LL;
    v105 = 0x100000001LL;
    v103 = 0LL;
    v106 = 0LL;
    LODWORD(v103) = 56;
    v29 = 72LL * (unsigned int)*v26 + 40;
    v89 = &v99;
    v88 = 72 * *v26 + 40;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           &v103,
           v27,
           1681082453LL);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v9 = 33;
      v10 = 2;
      goto LABEL_4;
    }
    *((_QWORD *)v19 + 1) = v95;
    memset(v95, 0, v29);
    *(_QWORD *)v95 = v99;
    *((_QWORD *)v95 + 4) = v23;
    *((_DWORD *)v95 + 6) = v23[4];
    if ( LOBYTE(v91[0]) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)v95 + 7, 1u);
      _InterlockedOr((volatile signed __int32 *)v95 + 7, 2u);
    }
    v30 = v101 + 2;
    v31 = (char *)v95 + 8;
    v32 = (_QWORD *)v101[3];
    if ( (_QWORD *)*v32 != v101 + 2 )
LABEL_167:
      __fastfail(3u);
    v14 = v100;
    *v31 = v30;
    v31[1] = v32;
    *v32 = v31;
    v30[1] = v31;
    v33 = 0;
    *((_BYTE *)v19 + 4) = v23[5];
    *((_BYTE *)v19 + 5) = v23[6];
    *((_BYTE *)v19 + 6) = v23[7];
    v34 = &v23[*v23];
    v35 = v95;
    v36 = (unsigned __int64)v14 + *(unsigned __int16 *)(*(_QWORD *)(v102 + 24) + 2LL);
    if ( *v97 )
    {
      while ( 2 )
      {
        if ( (unsigned __int64)v34 >= v36 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v39 = 22;
          break;
        }
        v37 = 9LL * v33;
        v35[2 * v37 + 16] = *(_DWORD *)&v19[12 * v33 + 22];
        v38 = v34 + 1;
        v35[2 * v37 + 12] = 1;
        if ( (unsigned __int64)(v34 + 1) >= v36 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v39 = 23;
          break;
        }
        while ( *v38 != 5 )
        {
          v40 = *v34;
          if ( !(_BYTE)v40 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_95;
            v39 = 24;
            goto LABEL_94;
          }
          v34 += v40;
          if ( (unsigned __int64)v34 >= v36 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_95;
            v39 = 25;
            goto LABEL_94;
          }
          v38 = v34 + 1;
          if ( (unsigned __int64)(v34 + 1) >= v36 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_95;
            v39 = 26;
            goto LABEL_94;
          }
        }
        if ( (unsigned __int64)(v34 + 7) > v36 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v39 = 28;
        }
        else
        {
          if ( (*(_DWORD *)&v19[12 * v33 + 22] & 1) != 0 )
            *((_WORD *)v34 + 2) = v19[12 * v33 + 12];
          v41 = *(_DWORD *)&v19[12 * v33 + 22] & 0xF0;
          if ( v41 == 16 )
          {
            v35[18 * v33 + 26] = 1;
          }
          else if ( v41 == 32 )
          {
            v35[18 * v33 + 26] = 2;
          }
          else
          {
            v42 = 3;
            if ( v41 != 48 )
              v42 = 0;
            v35[18 * v33 + 26] = v42;
          }
          *(_QWORD *)&v35[18 * v33 + 18] = v34;
          v35[18 * v33 + 20] = v36 - (_DWORD)v34;
          if ( *(_WORD *)(a1 + 1990) >= 0x250u )
            v43 = *((_WORD *)v34 + 2);
          else
            v43 = (*((_WORD *)v34 + 2) & 0x7FF) * (((*((_WORD *)v34 + 2) >> 11) & 3) + 1);
          v19[12 * v33 + 12] = v43;
          v44 = 6;
          if ( v34[6] < 6u )
            v44 = v34[6];
          HIBYTE(v19[12 * v33 + 13]) = v44;
          LOBYTE(v19[12 * v33 + 13]) = v34[2];
          if ( (v34[3] & 3) != 0 )
          {
            switch ( v34[3] & 3 )
            {
              case 1:
                v45 = 1;
LABEL_55:
                *(_DWORD *)&v19[12 * v33 + 14] = v45;
                break;
              case 2:
                *(_DWORD *)&v19[12 * v33 + 14] = 2;
                break;
              case 3:
                v45 = 3;
                goto LABEL_55;
            }
          }
          else
          {
            *(_DWORD *)&v19[12 * v33 + 14] = 0;
          }
          if ( !v43 )
            _InterlockedOr(&v35[18 * v33 + 13], 1u);
          v46 = *v34;
          if ( (_BYTE)v46 )
          {
            v34 += v46;
            if ( (unsigned __int64)v34 < v36 && (unsigned __int64)(v34 + 1) < v36 && v34[1] == 48 )
            {
              if ( *v34 )
              {
                if ( (unsigned __int64)(v34 + 6) <= v36 )
                {
                  v47 = *(_QWORD *)&v35[18 * v33 + 18];
                  *(_QWORD *)&v35[18 * v33 + 22] = v34;
                  if ( (*(_BYTE *)(v47 + 3) & 3) == 1 )
                  {
                    if ( (v35[18 * v33 + 13] & 1) == 0 )
                      v19[12 * v33 + 12] = *((_WORD *)v34 + 2);
                    if ( (v34[3] & 0x80u) != 0 )
                    {
                      v34 += *v34;
                      if ( (unsigned __int64)v34 < v36 && (unsigned __int64)(v34 + 1) < v36 && v34[1] == 49 )
                      {
                        if ( *v34 )
                        {
                          if ( (unsigned __int64)(v34 + 8) <= v36 )
                          {
                            v48 = v35[18 * v33 + 13];
                            *(_QWORD *)&v35[18 * v33 + 24] = v34;
                            if ( (v48 & 1) == 0 )
                            {
                              v49 = *((_DWORD *)v34 + 1);
                              if ( v49 > 0xFFFF )
                              {
                                v50 = *(_DWORD *)&v19[12 * v33 + 22];
                                if ( (v50 & 0x100) != 0 )
                                {
                                  *(_DWORD *)&v19[12 * v33 + 20] = v49;
                                  *(_DWORD *)&v19[12 * v33 + 22] = v50 | 0x10000;
                                }
                              }
                              else
                              {
                                v19[12 * v33 + 12] = v49;
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
            if ( ++v33 >= *v97 )
            {
              LODWORD(v14) = (_DWORD)v100;
              goto LABEL_81;
            }
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_95;
          v39 = 29;
        }
        break;
      }
LABEL_94:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v39,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
      goto LABEL_95;
    }
LABEL_81:
    v15 = v108;
  }
  v51 = (__int64 *)(a1 + 48);
  v52 = *(_QWORD *)(a1 + 48);
  if ( v52 )
  {
    for ( j = *(_QWORD **)(v52 + 16); ; j = (_QWORD *)*j )
    {
      v54 = j - 1;
      if ( (_QWORD *)(v52 + 16) == j )
        break;
      v55 = *((_DWORD *)v54 + 6);
      v56 = 0;
      if ( v55 )
      {
        v57 = v54 + 9;
        while ( (*(_BYTE *)(*v57 + 2LL) & 0xF) != 0 )
        {
          ++v56;
          v57 += 9;
          if ( v56 >= v55 )
            goto LABEL_107;
        }
        v8 = -1073741823;
        *(_DWORD *)(a1 + 1564) = -1072693239;
        goto LABEL_5;
      }
LABEL_107:
      ;
    }
  }
  v93 = 0;
  v58 = 0LL;
  v92 = 0;
  v59 = 0;
  v94 = 0;
  v60 = 0LL;
  if ( !v52 )
  {
LABEL_128:
    v8 = 0;
    v68 = (unsigned int)v96;
    *((_DWORD *)v101 + 2) = v96;
    v69 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    if ( v69 )
    {
      if ( (unsigned int)v68 <= v69 )
        goto LABEL_150;
      v70 = *(void **)(a1 + 104);
      *(_DWORD *)(a1 + 96) = 0;
      if ( v70 )
      {
        ExFreePoolWithTag(v70, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v71 = *(void **)(a1 + 136);
      if ( v71 )
      {
        ExFreePoolWithTag(v71, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v72 = *(void **)(a1 + 120);
      if ( v72 )
      {
        ExFreePoolWithTag(v72, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
    }
    if ( *(_DWORD *)(a1 + 96) || !(_DWORD)v68 )
      goto LABEL_149;
    Pool2 = ExAllocatePool2(64LL, 8 * v68, 1681082453LL);
    *(_QWORD *)(a1 + 104) = Pool2;
    if ( !Pool2
      || (v74 = ExAllocatePool2(64LL, 8 * v68, 1681082453LL), (*(_QWORD *)(a1 + 136) = v74) == 0LL)
      || (v75 = ExAllocatePool2(64LL, 8 * v68, 1681082453LL), (*(_QWORD *)(a1 + 120) = v75) == 0LL) )
    {
      v76 = *(void **)(a1 + 104);
      v8 = -1073741670;
      *(_DWORD *)(a1 + 96) = 0;
      if ( v76 )
      {
        ExFreePoolWithTag(v76, 0x64334855u);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v77 = *(void **)(a1 + 136);
      if ( v77 )
      {
        ExFreePoolWithTag(v77, 0x64334855u);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      v78 = *(void **)(a1 + 120);
      if ( v78 )
      {
        ExFreePoolWithTag(v78, 0x64334855u);
        *(_QWORD *)(a1 + 120) = 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v89) = -1073741670;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x1Eu,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
          v89);
      }
LABEL_149:
      if ( v8 < 0 )
        goto LABEL_5;
      goto LABEL_150;
    }
    *(_DWORD *)(a1 + 96) = v68;
    v8 = 0;
LABEL_150:
    v79 = *(_QWORD *)(a1 + 56);
    if ( v79 )
    {
      v80 = (_QWORD *)(v79 + 16);
      *(_DWORD *)(a1 + 144) = 0;
      *(_DWORD *)(a1 + 128) = 0;
      v81 = *v80 - 8LL;
      if ( v80 != (_QWORD *)*v80 )
      {
        do
        {
          for ( k = 0; k < *(_DWORD *)(v81 + 24); ++k )
          {
            v83 = *(_DWORD *)(v81 + 72LL * k + 48);
            if ( v83 == 4 )
            {
              *(_DWORD *)(v81 + 72LL * k + 48) = 5;
              *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v81 + 72LL * k + 40);
            }
            else if ( v83 == 6 )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v81 + 72LL * k + 40);
            }
          }
          v84 = *(_QWORD *)(v81 + 8);
          v81 = v84 - 8;
        }
        while ( *(_QWORD *)(a1 + 56) + 16LL != v84 );
      }
    }
    v2 = *v51;
    goto LABEL_166;
  }
  for ( m = *(_QWORD **)(v52 + 16); ; m = (_QWORD *)*m )
  {
    v62 = m - 1;
    if ( (_QWORD *)(v52 + 16) == m )
    {
      v51 = (__int64 *)(a1 + 48);
      goto LABEL_128;
    }
    v63 = 0;
    LODWORD(v97) = *((_DWORD *)v62 + 6);
    if ( (_DWORD)v97 )
      break;
LABEL_124:
    ;
  }
  v64 = (char *)v62 + 52;
  while ( 1 )
  {
    v65 = *(_QWORD *)(v64 + 20);
    if ( (*(_DWORD *)v64 & 1) == 0 )
      break;
LABEL_123:
    ++v63;
    v64 += 72;
    if ( v63 >= (unsigned int)v97 )
      goto LABEL_124;
  }
  if ( (*(_BYTE *)(v65 + 3) & 3) != 0 )
  {
    if ( *(char *)(v65 + 2) >= 0 )
    {
      v66 = &v93;
      v58 = v59;
    }
    else
    {
      v66 = &v92;
    }
  }
  else
  {
    v66 = &v94;
    v58 = (unsigned __int16)v60;
  }
  v67 = *(_BYTE *)(v65 + 2);
  LOWORD(v60) = (unsigned __int16)v60 >> (v67 & 0xF);
  if ( (v60 & 1) == 0 && (((unsigned __int16)v58 >> (v67 & 0xF)) & 1) == 0 )
  {
    *v66 = v58 | (1 << (v67 & 0xF));
    v58 = v92;
    v59 = v93;
    v60 = v94;
    goto LABEL_123;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL), v58, v60, v52, v88);
LABEL_95:
  v8 = -1073741823;
  *(_DWORD *)(a1 + 1564) = -1073737984;
LABEL_5:
  v6 = a1 + 48;
LABEL_6:
  *(_DWORD *)(a1 + 1560) = v8;
  if ( !*(_DWORD *)(a1 + 1564) )
    *(_DWORD *)(a1 + 1564) = HUBPDO_GetUSBDErrorFromNTStatus(v8);
  v11 = *(_QWORD **)v6;
  *(_QWORD *)v6 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
  if ( v11 )
  {
    v12 = (_QWORD **)(v11 + 2);
    while ( 1 )
    {
      v86 = *v12;
      if ( *v12 == v12 )
        break;
      if ( (_QWORD **)v86[1] != v12 )
        goto LABEL_167;
      v85 = (_QWORD *)*v86;
      if ( *(_QWORD **)(*v86 + 8LL) != v86 )
        goto LABEL_167;
      *v12 = v85;
      v85[1] = v12;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *(v86 - 1));
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v11);
  }
LABEL_166:
  *(_QWORD *)(v102 + 32) = v2;
  return ((v8 >> 31) & 0xFFFFFFF4) + 4077;
}
