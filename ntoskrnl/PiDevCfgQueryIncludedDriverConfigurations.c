/*
 * XREFs of PiDevCfgQueryIncludedDriverConfigurations @ 0x1408766D8
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x140876268 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1403C2368 (PnpDuplicateUnicodeString.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14055F9C8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14055FE54 (PiDevCfgPushDriverNodeEntry.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140876268 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x14087DAA0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverConfigurations(__int64 a1)
{
  __int64 v1; // r13
  int DriverConfiguration; // ebx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rdi
  wchar_t *v7; // rsi
  wchar_t *v8; // r15
  wchar_t *v9; // r14
  wchar_t *v10; // rdi
  int v11; // eax
  const wchar_t *v12; // rdi
  bool v13; // cf
  __int64 v14; // r12
  wchar_t *v15; // rax
  int v16; // r8d
  unsigned int v17; // r14d
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rdi
  __int64 v23; // r14
  __int64 *v24; // r15
  _QWORD *v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rax
  PVOID v28; // rcx
  PVOID *v29; // rax
  _QWORD *v30; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+38h] [rbp-8h]
  PVOID v33; // [rsp+88h] [rbp+48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+50h]

  v1 = a1;
  P = &v30;
  v33 = 0LL;
  v30 = &v30;
  if ( !*(_QWORD *)(a1 + 360) )
  {
    DriverConfiguration = 0;
    goto LABEL_3;
  }
  DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v30, a1);
  if ( DriverConfiguration < 0 )
    goto LABEL_3;
  do
  {
LABEL_6:
    if ( v30 == &v30 )
      goto LABEL_3;
    v4 = P;
    if ( *(_QWORD ***)P != &v30 || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
LABEL_57:
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v5 = &v30;
    v34 = v4[2];
    v6 = v34;
    ExFreePoolWithTag(v4, 0);
    v7 = *(wchar_t **)(v6 + 360);
  }
  while ( !v7 );
  while ( 1 )
  {
    if ( !*v7 )
    {
      if ( DriverConfiguration < 0 )
        break;
      goto LABEL_6;
    }
    v8 = v7;
    v9 = v7;
    v10 = wcschr(v7, 0x3Au);
    v11 = 0;
    if ( v10 )
    {
      *v10 = 0;
      v12 = v10 + 1;
      v7 = (wchar_t *)v12;
      v13 = *v9 < 0x2Au;
      if ( *v9 != 42 || (v13 = 0, v9[1]) )
        v11 = v13 ? -1 : 1;
      v14 = (unsigned __int64)v8 & -(__int64)(v11 != 0);
      v15 = wcsrchr(v12, 0x2Eu);
      if ( v15 )
      {
        *v15 = 0;
        v7 = v15 + 1;
        v16 = v15[1] - 42;
        if ( v15[1] == 42 )
          v16 = v15[2];
        if ( v16 )
        {
          v7 = v15 + 1;
          v17 = 0;
          if ( v15[1] )
          {
            do
            {
              v18 = wcschr(v7, 0x2Cu);
              if ( v18 )
              {
                *v18 = 0;
                v19 = v18 + 1;
              }
              else
              {
                v20 = -1LL;
                do
                  ++v20;
                while ( v7[v20] );
                v19 = &v7[v20];
              }
              v17 |= PiDevCfgGetDriverConfigurationKeyScope(v7);
              v7 = v19;
            }
            while ( *v19 );
          }
        }
        else
        {
          v17 = -1;
        }
        v21 = PiDevCfgQueryIncludedDriverNode(v34, v14, v12, v17, &v33);
        DriverConfiguration = v21;
        if ( v21 < 0 )
        {
          *(_DWORD *)(v1 + 428) = v21;
          break;
        }
        v22 = v33;
        v23 = v1 + 368;
        v24 = *(__int64 **)(v1 + 368);
        if ( v24 != (__int64 *)(v1 + 368) )
        {
          do
          {
            v26 = v24;
            if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v24 + 11), (PCUNICODE_STRING)(v22 + 11), 1u)
              && RtlEqualUnicodeString((PCUNICODE_STRING)(v24 + 5), (PCUNICODE_STRING)(v22 + 5), 1u) )
            {
              break;
            }
            v24 = (__int64 *)*v24;
            v26 = 0LL;
          }
          while ( v24 != (__int64 *)v23 );
          v1 = a1;
          if ( v26 )
          {
            PiDevCfgFreeDriverNode(v22);
            goto LABEL_40;
          }
        }
        v25 = *(_QWORD **)(v23 + 8);
        if ( *v25 != v23 )
          goto LABEL_57;
        *v22 = v23;
        v22[1] = v25;
        *v25 = v22;
        *(_QWORD *)(v23 + 8) = v22;
        DriverConfiguration = PiDevCfgQueryDriverConfiguration((__int64)v22);
        if ( DriverConfiguration < 0 )
          break;
        if ( v22[37] && !*(_QWORD *)(v1 + 296) && !PnpDuplicateUnicodeString(v1 + 288, (__int64)(v22 + 36)) )
        {
          DriverConfiguration = -1073741670;
          break;
        }
        if ( v22[39] )
        {
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 304));
          if ( DriverConfiguration < 0 )
            break;
        }
        if ( v22[41] )
        {
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)(v1 + 320));
          if ( DriverConfiguration < 0 )
            break;
        }
        DriverConfiguration = PiDevCfgPushDriverNodeEntry((__int64)&v30, (__int64)v22);
        if ( DriverConfiguration < 0 )
          break;
      }
    }
LABEL_40:
    v27 = -1LL;
    do
      ++v27;
    while ( v7[v27] );
    v7 += v27 + 1;
  }
LABEL_3:
  while ( v30 != &v30 )
  {
    v28 = P;
    if ( *(_QWORD ***)P != &v30 )
      goto LABEL_57;
    v29 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v29 != P )
      goto LABEL_57;
    P = (PVOID)*((_QWORD *)P + 1);
    *v29 = &v30;
    ExFreePoolWithTag(v28, 0);
  }
  return (unsigned int)DriverConfiguration;
}
