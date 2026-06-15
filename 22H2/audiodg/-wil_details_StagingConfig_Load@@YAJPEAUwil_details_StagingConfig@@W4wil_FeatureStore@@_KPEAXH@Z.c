/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x140028C58
 * Callers:
 *     ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x140028788 (-wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x140028818 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, int a2, __int64 a3, void *a4)
{
  const struct __WIL__WNF_TYPE_ID *v7; // rdx
  const void *v8; // r8
  int v9; // edi
  __int64 v10; // r13
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  SIZE_T v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned __int64 v17; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v19; // rax
  const struct __WIL__WNF_TYPE_ID *v20; // rdx
  const void *v21; // r8
  const struct __WIL__WNF_TYPE_ID *v22; // r8
  __int64 v23; // r10
  const struct __WIL__WNF_TYPE_ID *v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  __int64 result; // rax
  char *v31; // rdx
  HANDLE v32; // rax
  unsigned int v33; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v35[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF

  LODWORD(v36) = a2;
  *(_QWORD *)v35 = a4;
  memset_0((void *)(a1 + 8), 0, 0x50uLL);
  v9 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = 200LL;
  v11 = 0LL;
  v12 = 0x418A073AA3BC88F5LL;
  v13 = 0LL;
  v14 = -(__int64)(a4 != 0LL) & 0xC8;
  if ( !(_DWORD)v36 )
    v12 = 0x418A073AA3BC7C75LL;
  v37 = v12;
  v33 = a4 != 0LL ? 0xC8 : 0;
  v15 = wil_details_NtQueryWnfStateData(
          (const struct __WIL__WNF_STATE_NAME *)&v37,
          v7,
          v8,
          (unsigned int *)(a1 + 8),
          a4,
          &v33);
  v16 = v15;
  if ( v15 )
    goto LABEL_15;
  v13 = *(char **)v35;
  if ( *(_QWORD *)v35 )
    goto LABEL_15;
  do
  {
    if ( v14 < 0xC8 )
      v14 = 200LL;
    v17 = v14;
    v14 = v33;
    if ( v17 >= v33 )
      v14 = v17;
    if ( v14 < 0x10 )
      v14 = 16LL;
    if ( v11 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
    }
    v19 = GetProcessHeap();
    v11 = (char *)HeapAlloc(v19, 0, v14);
    if ( !v11 )
      return 3221225626LL;
    v33 = v14;
    v15 = wil_details_NtQueryWnfStateData(
            (const struct __WIL__WNF_STATE_NAME *)&v37,
            v20,
            v21,
            (unsigned int *)(a1 + 8),
            v11,
            &v33);
    v16 = v15;
    v13 = v11;
LABEL_15:
    ;
  }
  while ( v15 == -1073741789 );
  if ( v16 || !v13 )
  {
    if ( v11 )
    {
      v32 = GetProcessHeap();
      HeapFree(v32, 0, v11);
    }
    return v16;
  }
  else
  {
    v22 = (const struct __WIL__WNF_TYPE_ID *)v33;
    if ( v33 > 4 )
      *(_BYTE *)(a1 + 12) = *v13;
    if ( (unsigned int)v22 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && *((_WORD *)v13 + 1) >= 0x10u
      && (v23 = *((unsigned __int16 *)v13 + 2),
          v24 = (const struct __WIL__WNF_TYPE_ID *)(*((unsigned __int16 *)v13 + 1)
                                                  + 16LL * *((unsigned __int16 *)v13 + 3)
                                                  + 12 * v23),
          v22 >= v24) )
    {
      v34 = 0;
      v25 = 0;
      if ( (_WORD)v23 )
      {
        v26 = 0x418A073AA3BC90F5LL;
        if ( !(_DWORD)v36 )
          v26 = 0x418A073AA3BC8075LL;
        v36 = v26;
        v35[0] = 0;
        wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v36, v24, v22, &v34, 0LL, v35);
        LODWORD(v22) = v33;
        v25 = v34;
      }
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = v13 + 16;
      *(_QWORD *)(a1 + 40) = &v13[12 * *((unsigned __int16 *)v13 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v25 != 0;
      if ( *v13 == 2 && (unsigned __int8)v13[1] < 2u )
      {
        v27 = 16 * *((unsigned __int16 *)v13 + 3);
        v28 = 3 * *((unsigned __int16 *)v13 + 2);
        v29 = *((unsigned __int16 *)v13 + 1);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v22) = v29 + v27 + 4 * v28;
      }
    }
    else
    {
      v33 = 16;
      *(_OWORD *)v13 = 0LL;
      *(_DWORD *)v13 = 1049090;
      LODWORD(v22) = v33;
      *(_QWORD *)(a1 + 24) = v13;
      v31 = &v13[*((unsigned __int16 *)v13 + 1)];
      *(_QWORD *)(a1 + 32) = v31;
      *(_QWORD *)(a1 + 40) = &v31[12 * *((unsigned __int16 *)v13 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v22;
    if ( v11 )
      v10 = v14;
    *(_QWORD *)(a1 + 56) = v13;
    *(_QWORD *)(a1 + 72) = v10;
    LOBYTE(v9) = v13 == v11;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v9;
  }
  return result;
}
