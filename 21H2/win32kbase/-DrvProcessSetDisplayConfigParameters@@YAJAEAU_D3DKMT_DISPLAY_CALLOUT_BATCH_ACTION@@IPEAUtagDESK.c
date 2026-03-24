/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144340
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C0147928 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C001EF30 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C001F020 (DrvQueryDisplayConfig.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *a1,
        __int64 a2,
        struct tagDESKTOP *a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  int v8; // ecx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  _DWORD *v18; // rax
  unsigned int v19; // r12d
  int v20; // esi
  unsigned int v21; // esi
  _DWORD *v22; // rcx
  unsigned int j; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+50h] [rbp-28h] BYREF
  int v27; // [rsp+54h] [rbp-24h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-20h]
  __int64 v29; // [rsp+60h] [rbp-18h]
  _DWORD *i; // [rsp+68h] [rbp-10h]
  unsigned int v31; // [rsp+C0h] [rbp+48h]
  unsigned int v32; // [rsp+C8h] [rbp+50h] BYREF
  struct tagDESKTOP *v33; // [rsp+D0h] [rbp+58h]
  _BYTE *v34; // [rsp+D8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((unsigned int *)a1 + 2);
  v8 = *(char *)a1;
  v9 = 0LL;
  v27 = -1;
  v10 = (v8 >> 31) & 4;
  v11 = (unsigned int)a2;
  v29 = v5;
  v28 = v10;
  if ( (a2 & 0xF) != 0 )
  {
    if ( (a2 & 0x30) == 0 )
      return xxxUserSetDisplayConfig(
               v6,
               (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v5,
               a2,
               v10,
               (__int64)a3,
               0,
               0LL,
               0LL,
               a4,
               (__int64)a5);
    v13 = WdLogNewEntry5_WdError(v10, a2);
    *(_QWORD *)(v13 + 24) = v11;
    *(_QWORD *)(v13 + 32) = a3;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( !v5 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, a2);
    v14[3] = v6;
    v14[4] = v11;
    v14[5] = a3;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v32 = 0;
  v15 = (a2 & 0x20F) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizes(v15, (__int64)&v32);
  if ( (int)result >= 0 )
  {
    v16 = v32;
    v31 = v32;
    v17 = v6 + v32;
    v32 = v17;
    if ( v17 )
    {
      v9 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)PALLOCMEM2(200 * v17, 1936876615LL, 1);
      if ( !v9 )
        return 3221225495LL;
      v17 = v32;
      v16 = v31;
    }
    v26 = v17;
    v18 = (_DWORD *)((unsigned __int64)&v27 & -(__int64)((v15 & 4) != 0));
    for ( i = v18; ; v18 = i )
    {
      v19 = v16;
      v20 = DrvQueryDisplayConfig(v15, &v26, (__int64)v9, v18);
      if ( v20 < 0 )
        break;
      if ( v26 != v31 )
      {
        v20 = -1071774893;
        break;
      }
      v21 = 0;
      if ( (_DWORD)v6 )
      {
        while ( v21 < v19 )
        {
          v22 = (_DWORD *)((char *)v9 + 200 * v21);
          if ( v22[4] == *(_DWORD *)(v5 + 16) && v22[5] == *(_DWORD *)(v5 + 20) )
          {
            if ( v21 < v32 - 1 )
              memmove(v22, v22 + 50, 200LL * (v32 - v21 - 1));
            --v19;
          }
          else
          {
            ++v21;
          }
        }
        memmove((char *)v9 + 200 * v19, (const void *)v5, 200 * v6);
      }
      if ( (v11 & 0x10) != 0 )
      {
        for ( j = 0; j < v32; *(_QWORD *)((char *)v9 + v25 + 8) = 0LL )
        {
          v24 = j++;
          v25 = 200 * v24;
          *(_QWORD *)((char *)v9 + v25) &= 0x8004700000000000uLL;
        }
      }
      v20 = xxxUserSetDisplayConfig(v19 + (unsigned int)v6, v9, v11, v28, (__int64)v33, 0, 0LL, 0LL, v34, (__int64)a5);
      if ( v20 != -1073741772 || (v11 & 0x10) == 0 )
        break;
      v5 = v29;
      v16 = v31;
      LODWORD(v11) = v11 & 0xFFFFEDCF | 0x1220;
    }
    if ( v9 )
      Win32FreePool((__int64)v9);
    return (unsigned int)v20;
  }
  return result;
}
