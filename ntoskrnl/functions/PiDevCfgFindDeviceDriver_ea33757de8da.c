__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  __int64 v3; // r14
  int v4; // esi
  int v5; // edi
  _QWORD *v6; // r15
  int v7; // eax
  __int64 v8; // rbx
  wchar_t *v9; // rcx
  unsigned int v10; // r12d
  _WORD *v11; // r14
  int i; // r13d
  int ObjectProperty; // eax
  __int64 v14; // rax
  wchar_t *v15; // rdi
  wchar_t *v16; // rbx
  __int64 v17; // rax
  const WCHAR *v18; // r13
  _QWORD *v19; // rax
  char *v20; // rcx
  PVOID v21; // rcx
  PVOID v22; // rcx
  __int64 v24; // rax
  wchar_t *v25; // rax
  wchar_t *v26; // rbx
  wchar_t *v27; // rax
  __int64 v28; // rcx
  PVOID *v29; // rdx
  int v30; // ebx
  __int64 v31; // rax
  bool IsNullGuid; // al
  _QWORD *v33; // rbx
  __int64 v34; // r12
  unsigned int v35; // r11d
  unsigned int v36; // r8d
  unsigned int v37; // edi
  unsigned int v38; // edx
  __int64 v39; // r14
  _QWORD *v40; // r10
  __int64 v41; // rcx
  int v42; // ecx
  const wchar_t *v43; // rdi
  __int64 v44; // rax
  _QWORD *v45; // r14
  _QWORD *j; // rdi
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  PVOID P; // [rsp+60h] [rbp-59h] BYREF
  PVOID v54[2]; // [rsp+68h] [rbp-51h] BYREF
  wchar_t *Str; // [rsp+78h] [rbp-41h]
  PVOID v56[2]; // [rsp+80h] [rbp-39h] BYREF
  int v57; // [rsp+90h] [rbp-29h] BYREF
  int v58; // [rsp+94h] [rbp-25h]
  _WORD *v59; // [rsp+98h] [rbp-21h]
  wchar_t *v60; // [rsp+A0h] [rbp-19h]
  int v61; // [rsp+A8h] [rbp-11h]
  unsigned int v62; // [rsp+ACh] [rbp-Dh]
  int v63; // [rsp+B0h] [rbp-9h]
  __int64 v64; // [rsp+B8h] [rbp-1h]
  PCWSTR SourceString; // [rsp+C0h] [rbp+7h]
  const wchar_t *v66; // [rsp+C8h] [rbp+Fh]
  unsigned int v69; // [rsp+138h] [rbp+7Fh] BYREF

  v54[1] = v54;
  v54[0] = v54;
  v56[1] = v56;
  v56[0] = v56;
  v58 = 0;
  v3 = a1;
  SourceString = 0LL;
  v4 = 0;
  v66 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v57 = 1;
  v69 = 0;
  P = 0LL;
  if ( a2 )
  {
    SourceString = a2;
    v24 = -1LL;
    do
      ++v24;
    while ( a2[v24] );
    v66 = (const wchar_t *)((unsigned __int64)&a2[v24 + 1] & -(__int64)(a2[v24 + 1] != 0));
  }
  v7 = 1;
  LODWORD(v8) = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v64 = 520LL;
  v63 = v7;
  Str = (wchar_t *)ExAllocatePool2(256LL, 520LL, 1667526736LL);
  v9 = Str;
  if ( !Str )
  {
LABEL_52:
    v4 = -1073741670;
    goto LABEL_40;
  }
  v10 = 0;
  v62 = 0;
  while ( 2 )
  {
    v11 = *(_WORD **)(v3 + 16 * (v10 + 2LL));
    v59 = v11;
    if ( !v11 )
      goto LABEL_7;
    for ( i = 0; ; ++i )
    {
      v61 = i;
      if ( !*v11 )
        break;
      v57 = 1;
      v69 = 0;
      while ( 1 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v11,
                           11LL,
                           -1LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v57,
                           (__int64)v9,
                           v8,
                           (__int64)&v69,
                           0);
        v4 = ObjectProperty;
        if ( ObjectProperty != -1073741789 )
          break;
        if ( v69 <= (unsigned int)v8 )
          goto LABEL_18;
        v8 = v69;
        v64 = v69;
        if ( Str )
          ExFreePoolWithTag(Str, 0);
        Str = (wchar_t *)ExAllocatePool2(256LL, v8, 1667526736LL);
        v9 = Str;
        if ( !Str )
          goto LABEL_52;
      }
      if ( ObjectProperty == -1073741670 )
      {
        v9 = Str;
        break;
      }
      if ( ObjectProperty >= 0 )
      {
        if ( v57 == 8210 )
        {
          v9 = Str;
          v15 = Str;
          if ( !*Str )
            goto LABEL_20;
          do
          {
            v16 = wcschr(v15, 0x5Cu);
            if ( v16 )
            {
              v4 = DrvDbSplitDeviceIdDriverInfMatch(v15);
              if ( v4 < 0 )
                break;
              *v16 = 0;
              v15 = v16 + 1;
              v60 = v16 + 1;
            }
            v17 = -1LL;
            do
              ++v17;
            while ( v15[v17] );
            v15 += v17 + 1;
          }
          while ( *v15 );
          LODWORD(v8) = v64;
        }
      }
      else
      {
        if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
        {
          if ( v5 != -1073741772 )
            v5 = ObjectProperty;
          v58 = v5;
        }
        else if ( ObjectProperty == -1073741772 )
        {
          v58 = -1073741772;
        }
LABEL_18:
        v4 = 0;
      }
      v9 = Str;
LABEL_20:
      v14 = -1LL;
      do
        ++v14;
      while ( v11[v14] );
      v5 = v58;
      v11 += v14 + 1;
      v59 = v11;
    }
    if ( v4 < 0 )
      goto LABEL_40;
LABEL_7:
    v62 = ++v10;
    if ( v10 < 3 )
    {
      v3 = a1;
      continue;
    }
    break;
  }
  v18 = SourceString;
  if ( SourceString )
  {
    v25 = wcschr(SourceString, 0x3Au);
    v26 = v25;
    if ( !v25 || (*v25 = 0, (v27 = wcschr(v25 + 1, 0x2Cu)) == 0LL) )
    {
      v4 = -1073741773;
      goto LABEL_40;
    }
    *v27 = 0;
    if ( (int)PiDevCfgQueryDriverNode(v18, v26 + 1, 4, (__int64)&P) >= 0 )
    {
      v6 = P;
      goto LABEL_36;
    }
  }
  else
  {
LABEL_36:
    if ( v6 )
    {
      while ( 1 )
      {
        v19 = v54[0];
        if ( v54[0] == v54 )
          break;
        if ( *((PVOID **)v54[0] + 1) != v54 )
          goto LABEL_130;
        v28 = *(_QWORD *)v54[0];
        if ( *(PVOID *)(*(_QWORD *)v54[0] + 8LL) != v54[0] )
          goto LABEL_130;
        v54[0] = *(PVOID *)v54[0];
        *(_QWORD *)(v28 + 8) = v54;
        P = v19;
        v29 = (PVOID *)v6[29];
        if ( *v29 != v6 + 28 )
          goto LABEL_130;
        *v19 = v6 + 28;
        v19[1] = v29;
        *v29 = v19;
        v6[29] = v19;
        if ( (*((_DWORD *)P + 46) & 4) != 0 )
        {
          v30 = *((_DWORD *)v6 + 46);
          if ( (v30 & 8) == 0 && (int)PiDevCfgCompareDrivers((__int64)P, (__int64)v6, 4) < 0 )
            *((_DWORD *)v6 + 46) = v30 | 8;
        }
      }
      while ( 1 )
      {
        v20 = (char *)v56[0];
        if ( v56[0] == v56 )
        {
          *a3 = v6;
          goto LABEL_40;
        }
        if ( *((PVOID **)v56[0] + 1) != v56 )
          goto LABEL_130;
        v31 = *(_QWORD *)v56[0];
        if ( *(PVOID *)(*(_QWORD *)v56[0] + 8LL) != v56[0] )
          goto LABEL_130;
        v56[0] = *(PVOID *)v56[0];
        *(_QWORD *)(v31 + 8) = v56;
        P = v20;
        IsNullGuid = PnpIsNullGuid(v20 + 188);
        v33 = P;
        if ( IsNullGuid || *((_QWORD *)P + 22) )
          goto LABEL_90;
        v34 = *((_QWORD *)P + 18);
        if ( v34 )
        {
          v35 = *((_DWORD *)v6 + 38);
          v36 = 0;
          if ( !v35 )
            goto LABEL_90;
          v37 = *((_DWORD *)P + 38);
          while ( 1 )
          {
            v38 = 0;
            if ( v37 )
            {
              v39 = v6[18];
              while ( 1 )
              {
                v40 = (_QWORD *)(v34 + 16LL * v38);
                v41 = *(_QWORD *)(v39 + 16LL * v36) - *v40;
                if ( !v41 )
                  v41 = *(_QWORD *)(v39 + 16LL * v36 + 8) - v40[1];
                if ( !v41 )
                  break;
                if ( ++v38 >= v37 )
                  goto LABEL_89;
              }
              if ( v40 )
                break;
            }
LABEL_89:
            if ( ++v36 >= v35 )
              goto LABEL_90;
          }
        }
        if ( v18 )
        {
          if ( !v66 )
            goto LABEL_90;
          v42 = *v66 - 42;
          if ( *v66 == 42 )
            v42 = v66[1];
          if ( v42 )
          {
            v43 = v66;
            if ( !*v66 )
              goto LABEL_90;
            while ( !PiDevCfgMatchDriverConfigurationId((__int64)v33, v43) )
            {
              v44 = -1LL;
              do
                ++v44;
              while ( v43[v44] );
              v33 = P;
              v43 += v44 + 1;
              if ( !*v43 )
                goto LABEL_90;
            }
            v33 = P;
          }
          if ( !v33 )
          {
LABEL_90:
            PiDevCfgFreeDriverNode(v33);
            continue;
          }
        }
        v45 = v6 + 26;
        for ( j = (_QWORD *)v6[26]; ; j = (_QWORD *)*j )
        {
          if ( j == v45 )
            goto LABEL_116;
          v47 = *(_QWORD *)((char *)j + 188) - *(_QWORD *)((char *)v33 + 188);
          if ( !v47 )
            v47 = *(_QWORD *)((char *)j + 196) - *(_QWORD *)((char *)v33 + 196);
          if ( !v47 )
            break;
        }
        if ( j[18] )
        {
          if ( !v33[18] )
            goto LABEL_113;
        }
        else if ( v33[18] )
        {
          goto LABEL_121;
        }
        if ( (int)PiDevCfgCompareDrivers((__int64)v33, (__int64)j, 0) >= 0 )
        {
LABEL_113:
          j = v33;
          v33 = 0LL;
          P = 0LL;
          goto LABEL_114;
        }
LABEL_121:
        v49 = (_QWORD *)*j;
        if ( *(_QWORD **)(*j + 8LL) != j )
          goto LABEL_130;
        v50 = (_QWORD *)j[1];
        if ( (_QWORD *)*v50 != j )
          goto LABEL_130;
        *v50 = v49;
        v49[1] = v50;
        v33 = P;
LABEL_114:
        if ( j )
        {
          PiDevCfgFreeDriverNode(j);
          v33 = P;
        }
LABEL_116:
        if ( v33 )
        {
          v48 = (_QWORD *)v6[27];
          if ( (_QWORD *)*v48 != v45 )
            goto LABEL_130;
          *v33 = v45;
          v33[1] = v48;
          *v48 = v33;
          v6[27] = v33;
        }
      }
    }
  }
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_40:
  while ( 1 )
  {
    v21 = v54[0];
    if ( v54[0] == v54 )
      break;
    if ( *((PVOID **)v54[0] + 1) != v54 || (v51 = *(_QWORD *)v54[0], *(PVOID *)(*(_QWORD *)v54[0] + 8LL) != v54[0]) )
LABEL_130:
      __fastfail(3u);
    v54[0] = *(PVOID *)v54[0];
    *(_QWORD *)(v51 + 8) = v54;
    P = v21;
    PiDevCfgFreeDriverNode(v21);
  }
  while ( 1 )
  {
    v22 = v56[0];
    if ( v56[0] == v56 )
      break;
    if ( *((PVOID **)v56[0] + 1) != v56 )
      goto LABEL_130;
    v52 = *(_QWORD *)v56[0];
    if ( *(PVOID *)(*(_QWORD *)v56[0] + 8LL) != v56[0] )
      goto LABEL_130;
    v56[0] = *(PVOID *)v56[0];
    *(_QWORD *)(v52 + 8) = v56;
    P = v22;
    PiDevCfgFreeDriverNode(v22);
  }
  if ( Str )
    ExFreePoolWithTag(Str, 0);
  return (unsigned int)v4;
}
