/*
 * XREFs of sub_1406ECCA0 @ 0x1406ECCA0
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     KeQueryTimeIncrement @ 0x1402F0CE0 (KeQueryTimeIncrement.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406ECCA0(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // r12d
  unsigned int v7; // edi
  unsigned int *v9; // rcx
  int v10; // edx
  unsigned int *v11; // rax
  unsigned int i; // r8d
  __int64 v13; // r9
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  size_t v18; // r9
  const wchar_t *v19; // r14
  signed int v20; // ebx
  unsigned int j; // r8d
  __int64 v22; // rax
  unsigned int *v23; // rdx
  size_t v24; // rdx
  __int64 v25; // r11
  unsigned int v26; // eax
  size_t v27; // r12
  WCHAR *PoolWithTag; // rax
  const WCHAR *v29; // r15
  unsigned int *v30; // rcx
  unsigned int *v31; // rax
  unsigned int k; // r8d
  __int64 v33; // r9
  unsigned int *v34; // rdx
  unsigned int v35; // r8d
  unsigned int *v36; // rdx
  unsigned int *v37; // rax
  unsigned int m; // r8d
  __int64 v39; // rax
  unsigned int *v40; // rdx
  unsigned int v41; // r8d
  unsigned int *v42; // rax
  int v43; // ebx
  int v44; // eax
  int v45; // r15d
  unsigned int v46; // eax
  void *v47; // r13
  int v48; // eax
  unsigned int v49; // r13d
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // eax
  unsigned int v57; // edx
  int v58; // r9d
  int v59; // r8d
  unsigned int v60; // ecx
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // rbx
  ULONG TimeIncrement; // eax
  __int64 v65; // kr00_8
  int v66; // r14d
  __int64 v67; // r12
  int v68; // eax
  int v69; // ecx
  double v70; // xmm0_8
  unsigned __int64 v71; // rax
  NTSTATUS v72; // eax
  __int64 v73; // rbx
  unsigned __int64 v74; // r12
  NTSTATUS v75; // eax
  int v76; // ebx
  unsigned int v77; // edx
  unsigned int *v78; // r8
  unsigned int v79; // eax
  SIZE_T v80; // rcx
  _DWORD *v81; // rax
  int v82; // r15d
  unsigned int v83; // r10d
  __int64 v84; // r11
  unsigned int v85; // r9d
  int v86; // r15d
  unsigned int v87; // edx
  int v88; // eax
  unsigned int v89; // ecx
  unsigned __int64 v90; // rdx
  unsigned int n; // r8d
  __int64 v92; // rax
  __int64 v93; // r11
  unsigned int v94; // r9d
  int v95; // r14d
  unsigned int v96; // edx
  int v97; // eax
  unsigned int v98; // ecx
  unsigned int v99; // r8d
  _DWORD *ii; // rdx
  unsigned int v101; // r9d
  __int64 v102; // r11
  unsigned int v103; // r9d
  unsigned int v104; // r14d
  unsigned int v105; // edx
  int v106; // eax
  unsigned int v107; // ecx
  __int64 v108; // r11
  unsigned int v109; // edx
  int v110; // eax
  unsigned int v111; // ecx
  unsigned int v112; // r8d
  unsigned int *v113; // rdx
  unsigned int v114; // r8d
  _DWORD *jj; // rdx
  __int64 v116; // r11
  unsigned int v117; // r9d
  unsigned int v118; // ecx
  unsigned int v119; // eax
  unsigned int v120; // r8d
  _DWORD *kk; // rdx
  PVOID Src; // [rsp+40h] [rbp-69h]
  unsigned int v123; // [rsp+48h] [rbp-61h]
  int v124; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int Size; // [rsp+50h] [rbp-59h] BYREF
  unsigned int Size_4; // [rsp+54h] [rbp-55h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-51h] BYREF
  int v128; // [rsp+60h] [rbp-49h] BYREF
  int v129; // [rsp+64h] [rbp-45h] BYREF
  int v130; // [rsp+68h] [rbp-41h] BYREF
  int v131; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v132; // [rsp+70h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+78h] [rbp-31h] BYREF
  int v134; // [rsp+80h] [rbp-29h] BYREF
  int v135; // [rsp+84h] [rbp-25h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-21h]
  size_t pcbLength; // [rsp+90h] [rbp-19h] BYREF
  __int64 v138; // [rsp+98h] [rbp-11h]
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF
  UNICODE_STRING v141; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v142; // [rsp+C8h] [rbp+1Fh] BYREF
  int v143; // [rsp+D0h] [rbp+27h]

  Size_4 = a3;
  KeyHandle = a2;
  NumberOfBytes = 0LL;
  v138 = 0LL;
  SourceString = 0LL;
  v6 = 0;
  v132 = 0;
  v7 = 0;
  Size = 0;
  Src = 0LL;
  Timeout.QuadPart = 0LL;
  DestinationString = 0LL;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 )
  {
    if ( *(_DWORD *)a1 > 3u )
    {
      v11 = v9;
      for ( i = 0; i < 3; ++i )
      {
        v13 = *v11;
        v14 = v11 + 1;
        if ( v11 + 1 < v11 )
          goto LABEL_19;
        v11 = (unsigned int *)((char *)v14 + v13);
        if ( (unsigned int *)((char *)v14 + v13) < v14 )
          goto LABEL_19;
      }
      v15 = *v11;
      v16 = v11 + 1;
      if ( v11 + 1 < v11 )
      {
LABEL_19:
        v10 = -1073741675;
        goto LABEL_20;
      }
      v17 = 0LL;
      if ( v15 )
        v17 = v16;
      v10 = 0;
      if ( v15 != 8 )
        return 3221225507LL;
      v138 = *(_QWORD *)v17;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_20:
  if ( v10 < 0 )
    return (unsigned int)v10;
  LODWORD(v18) = 0;
  v19 = 0LL;
  pcbLength = 0LL;
  if ( v9 )
  {
    if ( *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v22 = *v9;
        v23 = v9 + 1;
        if ( v9 + 1 < v9 )
          goto LABEL_43;
        v9 = (unsigned int *)((char *)v23 + v22);
        if ( (unsigned int *)((char *)v23 + v22) < v23 )
          goto LABEL_43;
      }
      v24 = *v9;
      if ( v9 + 1 < v9 )
      {
LABEL_43:
        v20 = -1073741675;
        goto LABEL_44;
      }
      if ( (_DWORD)v24 )
        v19 = (const wchar_t *)(v9 + 1);
      v20 = 0;
      if ( !(_DWORD)v24 )
      {
        v20 = -1073741762;
        goto LABEL_51;
      }
      if ( (v24 & 1) != 0 )
      {
        v20 = -1073741762;
        goto LABEL_51;
      }
      if ( v19[(v24 >> 1) - 1] )
      {
        v20 = -1073741762;
        goto LABEL_51;
      }
      if ( StringCbLengthW(v19, v24, &pcbLength) < 0 )
      {
        v20 = -1073741762;
        goto LABEL_51;
      }
      if ( pcbLength + 2 != v25 )
      {
        v20 = -1073741762;
        goto LABEL_51;
      }
      v18 = pcbLength >> 1;
    }
    else
    {
      v20 = -1073741811;
    }
  }
  else
  {
    v20 = -1073741811;
  }
LABEL_44:
  if ( v20 < 0 )
    goto LABEL_282;
  v26 = 2 * v18 + 2;
  if ( 2 * (_DWORD)v18 == -2 )
  {
    v20 = -1073741762;
  }
  else
  {
    v27 = v26;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
    v29 = PoolWithTag;
    if ( PoolWithTag )
    {
      v20 = 0;
      memmove(PoolWithTag, v19, v27);
      SourceString = v29;
    }
    else
    {
      v20 = -1073741801;
    }
    v6 = 0;
  }
LABEL_51:
  if ( v20 < 0 )
    goto LABEL_282;
  v30 = *(unsigned int **)(a1 + 8);
  if ( v30 )
  {
    if ( *(_DWORD *)a1 > 5u )
    {
      v31 = *(unsigned int **)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v33 = *v31;
        v34 = v31 + 1;
        if ( v31 + 1 < v31 )
          goto LABEL_65;
        v31 = (unsigned int *)((char *)v34 + v33);
        if ( (unsigned int *)((char *)v34 + v33) < v34 )
          goto LABEL_65;
      }
      v35 = *v31;
      v36 = v31 + 1;
      if ( v31 + 1 < v31 )
      {
LABEL_65:
        v20 = -1073741675;
        goto LABEL_66;
      }
      v37 = 0LL;
      if ( v35 )
        v37 = v36;
      v20 = 0;
      if ( v35 == 4 )
      {
        v132 = *v37;
        goto LABEL_66;
      }
      goto LABEL_281;
    }
    v20 = -1073741811;
  }
  else
  {
    v20 = -1073741811;
  }
LABEL_66:
  if ( v20 < 0 )
  {
LABEL_282:
    v47 = 0LL;
    goto LABEL_283;
  }
  if ( !v30 )
  {
    v20 = -1073741811;
    goto LABEL_81;
  }
  if ( *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v39 = *v30;
      v40 = v30 + 1;
      if ( v30 + 1 < v30 )
        goto LABEL_80;
      v30 = (unsigned int *)((char *)v40 + v39);
      if ( (unsigned int *)((char *)v40 + v39) < v40 )
        goto LABEL_80;
    }
    v41 = *v30;
    if ( v30 + 1 < v30 )
    {
LABEL_80:
      v20 = -1073741675;
      goto LABEL_81;
    }
    v42 = 0LL;
    if ( v41 )
      v42 = v30 + 1;
    v20 = 0;
    if ( v41 == 4 )
    {
      v6 = *v42;
      goto LABEL_81;
    }
LABEL_281:
    v20 = -1073741789;
    goto LABEL_282;
  }
  v20 = -1073741811;
LABEL_81:
  if ( v20 < 0 )
    goto LABEL_282;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( v6 )
  {
    v43 = 1;
    if ( v6 <= 0x100000 )
      goto LABEL_94;
  }
  else
  {
    v43 = 0;
  }
  v123 = v6;
  v44 = ((__int64 (__fastcall *)(UNICODE_STRING *, char *, _QWORD, _QWORD, unsigned int *))qword_140D2D498)(
          &DestinationString,
          (char *)&NumberOfBytes + 4,
          0LL,
          0LL,
          &Size);
  v45 = v44;
  if ( v44 == -1073741789 )
  {
    v46 = Size;
    if ( v6 < Size )
    {
      if ( !v6 )
        v45 = 0;
      goto LABEL_103;
    }
  }
  else
  {
    if ( v44 < 0 )
    {
      v20 = v44;
      goto LABEL_282;
    }
    v46 = Size;
    if ( Size )
    {
      v20 = -2147418113;
      goto LABEL_282;
    }
    v43 = 0;
  }
  v123 = v46;
  v6 = v46;
  v45 = 0;
  if ( !v43 )
    goto LABEL_103;
LABEL_94:
  Src = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
  v47 = Src;
  if ( Src )
  {
    v48 = ((__int64 (__fastcall *)(UNICODE_STRING *, char *, PVOID, _QWORD, unsigned int *))qword_140D2D498)(
            &DestinationString,
            (char *)&NumberOfBytes + 4,
            Src,
            v6,
            &Size);
    v45 = v48;
    if ( v48 != -1073741789 )
    {
      v20 = v48;
      if ( v48 < 0 )
        goto LABEL_283;
    }
    if ( v6 >= Size )
      v6 = Size;
    v123 = v6;
LABEL_103:
    v49 = v6 + 4;
    if ( v6 >= 0xFFFFFFFC )
    {
      v20 = -1073741675;
      v50 = 8;
    }
    else
    {
      v20 = 0;
      v50 = v6 + 4;
    }
    if ( v20 < 0 )
    {
      v53 = 0;
    }
    else
    {
      v51 = v50 + 28;
      if ( v51 < 0x1C )
        goto LABEL_114;
      v52 = v51 + 8;
      if ( v51 + 8 < v51 )
        goto LABEL_114;
      v53 = v51 + 16;
      LODWORD(NumberOfBytes) = v52 + 8;
      if ( v52 + 8 < v52 )
        goto LABEL_114;
      v20 = 0;
    }
    if ( v20 < 0 )
    {
LABEL_115:
      v47 = Src;
      goto LABEL_283;
    }
    v54 = 0;
    v55 = v53 + 8;
    if ( v53 >= 0xFFFFFFF8 )
    {
LABEL_114:
      v20 = -1073741675;
      goto LABEL_115;
    }
    v56 = (v53 + 15) & 0xFFFFFFF8;
    if ( v56 >= v55 )
    {
      v54 = v56 + 8;
      if ( v56 + 8 < v56 )
        goto LABEL_126;
      v20 = 0;
    }
    else
    {
      v20 = -1073741675;
    }
    if ( v20 < 0 )
    {
LABEL_127:
      v62 = 0;
LABEL_128:
      if ( v20 < 0 )
        goto LABEL_115;
      if ( Size_4 >= v62 && v45 >= 0 )
      {
        v63 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v141 = 0LL;
        v128 = 0;
        v129 = 0;
        v134 = 0;
        v65 = v63 * TimeIncrement;
        v66 = 1;
        v67 = v65 / 10000;
        RtlInitUnicodeString(&v141, L"Security-SPP-GenuineLocalStatus");
        v68 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, int *))qword_140D2D498)(
                &v141,
                &v128,
                &v129,
                4LL,
                &v134);
        if ( v68 == -1073741772 || v68 >= 0 && (v128 != 4 || !v129) )
          v66 = 0;
        if ( g_ulOldGenuineStateForWnf != v66 )
        {
          g_qwSystemInitTime = v65 / 10000;
          g_ulOldGenuineStateForWnf = v66;
        }
        v69 = v67 - g_qwSystemInitTime;
        if ( v67 - g_qwSystemInitTime < 0 )
        {
          v71 = v69 & 1 | ((unsigned __int64)(v67 - g_qwSystemInitTime) >> 1);
          v70 = (double)(int)v71 + (double)(int)v71;
        }
        else
        {
          v70 = (double)v69;
        }
        if ( !v66 && !g_bWNFEventFired && v70 >= 9000000.0 )
        {
          g_bWNFEventFired = 1;
          ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
        }
        if ( (unsigned __int64)(v67 - g_qwSystemInitTime) >= 0xA4CBFB )
        {
          v72 = KeWaitForSingleObject(&stru_140C13EA0, UserRequest, 1, 0, &Timeout);
          if ( v72 >= 0 && v72 != 192 && v72 != 258 )
          {
            if ( g_ulOldGenuineState != v66 )
            {
              if ( v66 )
              {
                KeResetEvent(&stru_140C13E80);
              }
              else
              {
                v73 = MEMORY[0xFFFFF78000000320];
                qword_140D2D158 = v73 * KeQueryTimeIncrement() / 10000;
              }
            }
            v74 = v67 - qword_140D2D158;
            g_ulOldGenuineState = v66;
            if ( v66 || v74 < 0xADF4FC || !dword_140D2D1C4 )
            {
              KeReleaseMutex(&stru_140C13EA0, 0);
            }
            else
            {
              KeSetEvent(&stru_140C13E80, 1, 0);
              v130 = 4;
              v124 = 0;
              v135 = 0;
              KeyHandle = 0LL;
              v75 = ZwOpenKey(&KeyHandle, 1u, &stru_140D2D860);
              if ( v75 < 0 )
              {
                v75 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_140D2D498)(
                        aBd,
                        &v130,
                        &v124,
                        4LL,
                        &v135);
                v76 = v124;
              }
              else
              {
                v76 = 3;
                v124 = 3;
              }
              if ( v75 < 0 || v130 != 4 || (unsigned int)(v76 - 1) > 2 )
              {
                v76 = 1;
                v124 = 1;
              }
              if ( KeyHandle )
                ZwClose(KeyHandle);
              v131 = 0;
              v142 = 0LL;
              v143 = 0;
              Size_4 = 0;
              if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, unsigned int *))qword_140D2D498)(
                          aLn,
                          &v131,
                          &v142,
                          12LL,
                          &Size_4) >= 0
                && v131 == 3
                && Size_4 == 12 )
              {
                v77 = 0;
                v78 = (unsigned int *)&v142;
                while ( 1 )
                {
                  v79 = *v78;
                  if ( (*v78 & 0xF) == v76 )
                    break;
                  ++v77;
                  ++v78;
                  if ( v77 >= 3 )
                    goto LABEL_171;
                }
              }
              else
              {
LABEL_171:
                v79 = dword_140D2D064 & 0xFFFF0000 | 0x3211;
              }
              dword_140D2D064 = v79;
              if ( v132 )
                v7 = v79;
              else
                KeReleaseMutex(&stru_140C13EA0, 0);
            }
          }
        }
        v6 = v123;
      }
      v80 = (unsigned int)NumberOfBytes;
      *(_DWORD *)(a4 + 4) = NumberOfBytes;
      if ( !(_DWORD)v80 )
      {
        v47 = Src;
        v20 = -1073741762;
        goto LABEL_283;
      }
      v81 = ExAllocatePoolWithTag(PagedPool, v80, 0x20534C53u);
      if ( !v81 )
      {
        v47 = Src;
        v20 = -1073741801;
        goto LABEL_283;
      }
      *(_QWORD *)(a4 + 8) = v81;
      *(_DWORD *)a4 = 0;
      v82 = v45 | 0x10000000;
      if ( v81 + 1 < v81 )
        goto LABEL_114;
      if ( v81 + 2 > (_DWORD *)((char *)v81 + *(unsigned int *)(a4 + 4)) )
      {
        v47 = Src;
        v20 = -1073741789;
        goto LABEL_283;
      }
      *v81 = 4;
      v81[1] = v82;
      v83 = ++*(_DWORD *)a4;
      v84 = *(_QWORD *)(a4 + 8);
      v85 = 0;
      v86 = -1;
      if ( v84 )
      {
        v90 = *(_QWORD *)(a4 + 8);
        for ( n = 0; n < v83; v90 += v85 )
        {
          if ( *(_DWORD *)v90 >= 0xFFFFFFFC )
          {
            v20 = -1073741675;
          }
          else
          {
            v85 = *(_DWORD *)v90 + 4;
            v20 = 0;
          }
          if ( v20 < 0 )
            goto LABEL_115;
          if ( v90 + v85 < v90 )
            goto LABEL_114;
          ++n;
        }
        if ( v90 + 4 < v90 )
          goto LABEL_114;
        v20 = 0;
        if ( v90 + 12 > v84 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v47 = Src;
          v20 = -1073741789;
          goto LABEL_283;
        }
        v92 = v138;
        *(_DWORD *)v90 = 8;
        *(_QWORD *)(v90 + 4) = v92;
        ++*(_DWORD *)a4;
      }
      else
      {
        v87 = *(_DWORD *)(a4 + 4);
        v88 = -1;
        v89 = v87 + 12;
        if ( v87 + 12 >= v87 )
          v88 = v87 + 12;
        v20 = v89 < v87 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v88;
        if ( v89 >= v87 )
        {
          *(_DWORD *)a4 = v83 + 1;
          goto LABEL_201;
        }
      }
      if ( v20 < 0 )
        goto LABEL_115;
LABEL_201:
      v93 = *(_QWORD *)(a4 + 8);
      v94 = 0;
      v95 = HIDWORD(NumberOfBytes);
      if ( v93 )
      {
        v99 = 0;
        for ( ii = *(_DWORD **)(a4 + 8); v99 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v94) )
        {
          if ( *ii >= 0xFFFFFFFC )
          {
            v20 = -1073741675;
          }
          else
          {
            v94 = *ii + 4;
            v20 = 0;
          }
          if ( v20 < 0 )
            goto LABEL_115;
          if ( (_DWORD *)((char *)ii + v94) < ii )
            goto LABEL_114;
          ++v99;
        }
        if ( ii + 1 < ii )
          goto LABEL_114;
        v20 = 0;
        if ( (unsigned __int64)(ii + 2) > v93 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v47 = Src;
          v20 = -1073741789;
          goto LABEL_283;
        }
        *ii = 4;
        ii[1] = v95;
        ++*(_DWORD *)a4;
      }
      else
      {
        v96 = *(_DWORD *)(a4 + 4);
        v97 = -1;
        v98 = v96 + 8;
        if ( v96 + 8 >= v96 )
          v97 = v96 + 8;
        v20 = v98 < v96 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v97;
        if ( v98 >= v96 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_218;
        }
      }
      if ( v20 < 0 )
        goto LABEL_115;
LABEL_218:
      v101 = 0;
      if ( Src )
      {
        if ( !v6 )
          goto LABEL_220;
      }
      else if ( v6 )
      {
LABEL_220:
        v20 = -1073741811;
        goto LABEL_221;
      }
      v108 = *(_QWORD *)(a4 + 8);
      if ( v108 )
      {
        v112 = 0;
        v113 = *(unsigned int **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
        {
LABEL_245:
          if ( v113 + 1 < v113 )
            goto LABEL_114;
          v20 = 0;
          v47 = Src;
          if ( (unsigned __int64)v113 + v6 + 4 > v108 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v20 = -1073741789;
            goto LABEL_283;
          }
          *v113 = v6;
          if ( Src )
            memmove(v113 + 1, Src, v6);
          ++*(_DWORD *)a4;
          goto LABEL_222;
        }
        while ( 1 )
        {
          if ( *v113 >= 0xFFFFFFFC )
          {
            v20 = -1073741675;
          }
          else
          {
            v101 = *v113 + 4;
            v20 = 0;
          }
          if ( v20 < 0 )
            break;
          if ( (unsigned int *)((char *)v113 + v101) < v113 )
            goto LABEL_114;
          ++v112;
          v113 = (unsigned int *)((char *)v113 + v101);
          if ( v112 >= *(_DWORD *)a4 )
            goto LABEL_245;
        }
      }
      else
      {
        if ( v49 < 4 )
        {
          v20 = -1073741675;
        }
        else
        {
          v101 = v49;
          v20 = 0;
        }
        if ( v20 >= 0 )
        {
          v109 = *(_DWORD *)(a4 + 4);
          v110 = -1;
          v111 = v109 + v101;
          if ( v109 + v101 >= v109 )
            v110 = v109 + v101;
          v20 = v111 < v109 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v110;
          if ( v111 >= v109 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_223;
          }
        }
      }
LABEL_221:
      v47 = Src;
LABEL_222:
      if ( v20 < 0 )
        goto LABEL_283;
LABEL_223:
      v102 = *(_QWORD *)(a4 + 8);
      v103 = 0;
      v104 = Size;
      if ( v102 )
      {
        v114 = 0;
        for ( jj = *(_DWORD **)(a4 + 8); v114 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v103) )
        {
          if ( *jj >= 0xFFFFFFFC )
          {
            v20 = -1073741675;
          }
          else
          {
            v103 = *jj + 4;
            v20 = 0;
          }
          if ( v20 < 0 )
            goto LABEL_115;
          if ( (_DWORD *)((char *)jj + v103) < jj )
            goto LABEL_114;
          ++v114;
        }
        if ( jj + 1 < jj )
          goto LABEL_114;
        v20 = 0;
        if ( (unsigned __int64)(jj + 2) > v102 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v47 = Src;
          v20 = -1073741789;
          goto LABEL_283;
        }
        *jj = 4;
        jj[1] = v104;
        ++*(_DWORD *)a4;
      }
      else
      {
        v105 = *(_DWORD *)(a4 + 4);
        v106 = -1;
        v107 = v105 + 8;
        if ( v105 + 8 >= v105 )
          v106 = v105 + 8;
        v20 = v107 < v105 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v106;
        if ( v107 >= v105 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_263;
        }
      }
      if ( v20 < 0 )
        goto LABEL_115;
LABEL_263:
      v116 = *(_QWORD *)(a4 + 8);
      v117 = 0;
      if ( v116 )
      {
        v120 = 0;
        for ( kk = *(_DWORD **)(a4 + 8); v120 < *(_DWORD *)a4; kk = (_DWORD *)((char *)kk + v117) )
        {
          if ( *kk >= 0xFFFFFFFC )
          {
            v20 = -1073741675;
          }
          else
          {
            v117 = *kk + 4;
            v20 = 0;
          }
          if ( v20 < 0 )
            goto LABEL_115;
          if ( (_DWORD *)((char *)kk + v117) < kk )
            goto LABEL_114;
          ++v120;
        }
        if ( kk + 1 < kk )
          goto LABEL_114;
        v20 = 0;
        if ( (unsigned __int64)(kk + 2) > v116 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v47 = Src;
          v20 = -1073741789;
          goto LABEL_283;
        }
        *kk = 4;
        kk[1] = v7;
        ++*(_DWORD *)a4;
      }
      else
      {
        v118 = *(_DWORD *)(a4 + 4);
        v119 = v118 + 8;
        if ( v118 + 8 >= v118 )
          v86 = v118 + 8;
        v20 = v119 < v118 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v86;
        if ( v119 >= v118 )
        {
          ++*(_DWORD *)a4;
          v47 = Src;
          v20 = 0;
          goto LABEL_283;
        }
      }
      if ( v20 >= 0 )
      {
        v47 = Src;
        v20 = 0;
        goto LABEL_283;
      }
      goto LABEL_115;
    }
    v57 = v54 + 8;
    v58 = *((_DWORD *)KeyHandle + 8);
    v59 = *((_DWORD *)KeyHandle + 4);
    if ( v54 + 8 >= v54 + 4 )
    {
      v60 = v57 + v59;
      if ( v57 + v59 >= v57 )
      {
        v61 = v60 + 4;
        if ( v60 + 4 >= v60 && v61 + v58 >= v61 )
        {
          v62 = v61 + v58;
          v20 = 0;
          goto LABEL_128;
        }
      }
    }
LABEL_126:
    v20 = -1073741675;
    goto LABEL_127;
  }
  v20 = -1073741801;
LABEL_283:
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
  if ( v47 )
    ExFreePoolWithTag(v47, 0x20534C53u);
  return (unsigned int)v20;
}
