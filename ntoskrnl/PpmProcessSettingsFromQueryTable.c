/*
 * XREFs of PpmProcessSettingsFromQueryTable @ 0x14099A414
 * Callers:
 *     PpmRegisterSpmSettings @ 0x14099A640 (PpmRegisterSpmSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     PpmSetProfilePolicySetting @ 0x140825A60 (PpmSetProfilePolicySetting.c)
 */

char __fastcall PpmProcessSettingsFromQueryTable(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  int **v4; // r14
  __int64 v5; // rbp
  char v6; // r12
  __int64 v7; // r13
  const wchar_t *v8; // r15
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  int v16; // [rsp+34h] [rbp-64h]
  _QWORD *v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  v16 = a2;
  v18 = 0LL;
  v3 = 0LL;
  v4 = (int **)(a3 + 24);
  v5 = 0LL;
  v17 = a1;
  v6 = 0;
  v7 = 20LL;
  do
  {
    v8 = (const wchar_t *)*(v4 - 1);
    v9 = 0;
    v10 = 0LL;
    while ( wcsicmp(v8, (&PpmPolicyAliasList)[v10]) )
    {
      ++v9;
      v10 += 2LL;
      if ( v9 >= 0x14 )
        goto LABEL_7;
    }
    v18 = *(_OWORD *)*(&PpmPolicyAliasList + v10 + 1);
    v3 = *((_QWORD *)&v18 + 1);
    v5 = v18;
LABEL_7:
    v15 = **v4;
    if ( v15 != -1 )
    {
      v11 = v5 - *(_QWORD *)&GUID_PROCESSOR_PERF_INCREASE_HISTORY.Data1;
      if ( v5 == *(_QWORD *)&GUID_PROCESSOR_PERF_INCREASE_HISTORY.Data1 )
        v11 = v3 - *(_QWORD *)GUID_PROCESSOR_PERF_INCREASE_HISTORY.Data4;
      if ( v11 )
      {
        v12 = v5 - *(_QWORD *)&GUID_PROCESSOR_PERF_DECREASE_HISTORY.Data1;
        if ( v5 == *(_QWORD *)&GUID_PROCESSOR_PERF_DECREASE_HISTORY.Data1 )
          v12 = v3 - *(_QWORD *)GUID_PROCESSOR_PERF_DECREASE_HISTORY.Data4;
        if ( v12 )
        {
          v13 = v5 - *(_QWORD *)&GUID_PROCESSOR_PERF_CORE_PARKING_HISTORY.Data1;
          if ( v5 == *(_QWORD *)&GUID_PROCESSOR_PERF_CORE_PARKING_HISTORY.Data1 )
            v13 = v3 - *(_QWORD *)GUID_PROCESSOR_PERF_CORE_PARKING_HISTORY.Data4;
          if ( v13 )
          {
            v6 = 1;
            PpmSetProfilePolicySetting(v17, &v18, v16, (__int64)&v15, 4);
            v3 = *((_QWORD *)&v18 + 1);
            v5 = v18;
          }
          else
          {
            PpmProfileStatus |= 0x10u;
          }
        }
        else
        {
          PpmProfileStatus |= 8u;
        }
      }
      else
      {
        PpmProfileStatus |= 4u;
      }
    }
    v4 += 7;
    --v7;
  }
  while ( v7 );
  return v6;
}
