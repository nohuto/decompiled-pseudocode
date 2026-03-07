__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v5; // r14d
  NTSTATUS RegistryValue; // edi
  unsigned __int16 *v7; // r13
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *v12; // rbx
  unsigned int v13; // r10d
  const WCHAR *v14; // rsi
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  __int64 Pool2; // rax
  __int64 *v18; // rdx
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // rax
  void *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // r12d
  unsigned __int16 *v25; // rsi
  unsigned __int16 v26; // dx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  NTSTATUS v30; // eax
  unsigned int v31; // r12d
  __int64 v32; // rax
  void *v33; // r13
  unsigned __int16 *v34; // r8
  _WORD *v35; // r15
  unsigned int v36; // r14d
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // dx
  unsigned int v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  wchar_t *v42; // rcx
  __int64 v43; // rsi
  unsigned int v44; // esi
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned int v48; // [rsp+20h] [rbp-60h]
  PVOID P; // [rsp+28h] [rbp-58h]
  NTSTATUS v50; // [rsp+30h] [rbp-50h]
  PVOID v51; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 *v52; // [rsp+40h] [rbp-40h]
  PVOID v53; // [rsp+48h] [rbp-38h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  wchar_t pszDest[12]; // [rsp+58h] [rbp-28h] BYREF

  v54 = a3;
  v53 = 0LL;
  v51 = 0LL;
  v48 = 0;
  P = 0LL;
  v5 = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Format", 0, &v53);
  if ( RegistryValue < 0 )
    goto LABEL_102;
  if ( !PnpValidateRegistryString(v53) )
  {
    RegistryValue = -1073741823;
    goto LABEL_102;
  }
  v7 = (unsigned __int16 *)((char *)v53 + *((unsigned int *)v53 + 2));
  v52 = v7;
  v8 = IopGetRegistryValue(a2, L"Variables", 0, &v51);
  v12 = (unsigned int *)v51;
  v13 = 0;
  v50 = v8;
  RegistryValue = v8;
  if ( v8 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(v51, v9, v10, v11) )
    {
      RegistryValue = -1073741823;
      goto LABEL_100;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_100;
    RegistryValue = 0;
    v50 = 0;
  }
  if ( v12 )
  {
    v14 = (const WCHAR *)((char *)v12 + v12[2]);
    v15 = v14;
    if ( *v14 != (_WORD)v13 )
    {
      do
      {
        ++v5;
        v16 = -1LL;
        do
          ++v16;
        while ( v15[v16] != (_WORD)v13 );
        v15 += v16 + 1;
      }
      while ( *v15 != (_WORD)v13 );
      v48 = v5;
      if ( v5 )
      {
        Pool2 = ExAllocatePool2(256LL, 8LL * v5, 1667526736LL);
        v13 = 0;
        P = (PVOID)Pool2;
        v18 = (__int64 *)Pool2;
        if ( !Pool2 )
        {
          RegistryValue = -1073741670;
          goto LABEL_100;
        }
        v19 = 0;
        if ( *v14 )
        {
          while ( v19 < v48 )
          {
            v20 = PiDevCfgResolveVariable(a1, v14, &v18[v19]);
            v13 = 0;
            v50 = v20;
            RegistryValue = v20;
            if ( v20 < 0 )
            {
              v22 = P;
              if ( v20 == -1073741772 )
                RegistryValue = -1073741823;
              goto LABEL_99;
            }
            v21 = -1LL;
            do
              ++v21;
            while ( v14[v21] );
            v18 = (__int64 *)P;
            v14 += v21 + 1;
            ++v19;
            if ( !*v14 )
            {
              v5 = v48;
              goto LABEL_28;
            }
          }
        }
        if ( RegistryValue < 0 )
        {
          v22 = P;
          goto LABEL_99;
        }
        v5 = v48;
      }
    }
  }
LABEL_28:
  v23 = *v7;
  v24 = v13;
  v25 = v7;
  if ( !*v7 )
    goto LABEL_54;
  do
  {
    ++v25;
    if ( v23 != 37 )
      goto LABEL_32;
    v26 = *v25;
    if ( *v25 == 37 )
    {
      ++v25;
LABEL_32:
      v24 += 2;
      goto LABEL_52;
    }
    if ( (unsigned __int16)(v26 - 48) <= 9u )
    {
      v27 = v13;
      while ( v26 && (unsigned __int16)(v26 - 48) <= 9u )
      {
        ++v25;
        v27 = v26 + 2 * (5 * v27 - 24);
        v26 = *v25;
      }
      if ( v27 < v5 )
      {
        _mm_lfence();
        v28 = *((_QWORD *)P + v27);
        if ( v28 )
        {
          switch ( *(_DWORD *)(v28 + 32) )
          {
            case 1:
            case 2:
              v24 = *(_DWORD *)(v28 + 36) + v24 - 2;
              break;
            case 4:
              v30 = RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v28 + 40));
              v13 = 0;
              if ( v30 >= 0 )
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( pszDest[v29] );
LABEL_46:
                v24 += 2 * v29;
              }
              break;
            case 7:
              v29 = -1LL;
              do
                ++v29;
              while ( *(_WORD *)(*(_QWORD *)(v28 + 40) + 2 * v29) != (_WORD)v13 );
              goto LABEL_46;
            default:
              break;
          }
        }
      }
    }
LABEL_52:
    v23 = *v25;
  }
  while ( *v25 );
  v12 = (unsigned int *)v51;
  RegistryValue = v50;
LABEL_54:
  v31 = v24 + 2;
  v32 = ExAllocatePool2(256LL, v31, 1667526736LL);
  v33 = (void *)v32;
  if ( !v32 )
  {
    RegistryValue = -1073741670;
    goto LABEL_92;
  }
  v34 = v52;
  v35 = (_WORD *)v32;
  v36 = v31;
  v37 = *v52;
  if ( *v52 )
  {
    while ( 2 )
    {
      if ( v37 == 37 )
      {
        v52 = ++v34;
        v38 = *v34;
        if ( *v34 == 37 )
        {
          if ( v36 <= 2 )
            goto LABEL_96;
          *v35 = 37;
          goto LABEL_61;
        }
        if ( (unsigned __int16)(v38 - 48) <= 9u )
        {
          v39 = 0;
          if ( v38 )
          {
            do
            {
              if ( (unsigned __int16)(v38 - 48) > 9u )
                break;
              ++v34;
              v40 = v38;
              v38 = *v34;
              v39 = v40 + 2 * (5 * v39 - 24);
            }
            while ( *v34 );
            v52 = v34;
          }
          if ( v39 < v48 )
          {
            _mm_lfence();
            v41 = *((_QWORD *)P + v39);
            if ( v41 )
            {
              switch ( *(_DWORD *)(v41 + 32) )
              {
                case 1:
                case 2:
                  v42 = *(wchar_t **)(v41 + 40);
                  v44 = *(_DWORD *)(v41 + 36) - 2;
                  goto LABEL_81;
                case 4:
                  if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%u", **(unsigned int **)(v41 + 40)) >= 0 )
                  {
                    v42 = pszDest;
                    v45 = -1LL;
                    do
                      ++v45;
                    while ( pszDest[v45] );
                    v34 = v52;
                    v44 = 2 * v45;
                    goto LABEL_82;
                  }
LABEL_85:
                  v34 = v52;
                  break;
                case 7:
                  v42 = *(wchar_t **)(v41 + 40);
                  v43 = -1LL;
                  do
                    ++v43;
                  while ( v42[v43] );
                  v44 = 2 * v43;
LABEL_81:
                  if ( v42 )
                  {
LABEL_82:
                    if ( v44 )
                    {
                      if ( v36 <= v44 )
                        goto LABEL_96;
                      memmove(v35, v42, v44);
                      v36 -= v44;
                      v35 += (unsigned __int64)v44 >> 1;
                      goto LABEL_85;
                    }
                  }
                  break;
              }
            }
          }
        }
      }
      else
      {
        if ( v36 <= 2 )
        {
LABEL_96:
          v12 = (unsigned int *)v51;
          RegistryValue = -1073741823;
LABEL_91:
          ExFreePoolWithTag(v33, 0);
          goto LABEL_92;
        }
        *v35 = v37;
LABEL_61:
        ++v35;
        ++v34;
        v36 -= 2;
      }
      v37 = *v34;
      if ( !*v34 )
      {
        v12 = (unsigned int *)v51;
        break;
      }
      continue;
    }
  }
  if ( RegistryValue < 0 )
    goto LABEL_91;
  if ( v36 != 2 )
  {
    RegistryValue = -1073741823;
    goto LABEL_91;
  }
  v46 = v54;
  *v35 = 0;
  *(_DWORD *)(v46 + 32) = 1;
  *(_DWORD *)(v46 + 36) = v31;
  *(_QWORD *)(v46 + 40) = v33;
LABEL_92:
  v22 = P;
  if ( P )
LABEL_99:
    ExFreePoolWithTag(v22, 0);
LABEL_100:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_102:
  if ( v53 )
    ExFreePoolWithTag(v53, 0);
  return (unsigned int)RegistryValue;
}
