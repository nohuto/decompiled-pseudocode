__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 *i; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  int v17; // ecx
  signed int v18; // esi
  __int32 v19; // eax
  unsigned int v20; // ebx
  struct _LUID *v21; // rax
  int v22; // eax
  struct _ERESOURCE *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v27[6]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v6 + 8), 16);
  for ( i = *(__int64 **)(v6 + 6080); i; i = (__int64 *)*i )
  {
    v8 = i[5] & 0x401;
    v26 = i;
    if ( v8 == 1 )
    {
      v9 = i[319];
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
      {
        memset(v28, 0, sizeof(v28));
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, v10);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(DxgkWin32kInterface + 632))(
                a1,
                *(_QWORD *)(i[319] + 232),
                *(unsigned int *)(i[319] + 248),
                v28);
        v4 = v13;
        if ( v13 < 0 )
          goto LABEL_23;
        memset(v27, 0, sizeof(v27));
        v27[0] = *(__m128i *)(i + 303);
        v27[1] = *(__m128i *)(i + 305);
        v27[2] = *(__m128i *)(i + 307);
        v27[3] = *(__m128i *)(i + 309);
        v27[4] = *(__m128i *)(i + 311);
        v27[5] = *(__m128i *)(i + 313);
        if ( v28[2] == _mm_srli_si128(*v27, 8).m128i_i32[1] )
          continue;
        v14 = 0;
        v15 = &DesktopScaleFactorCutoffs;
        do
        {
          if ( *v15 > v28[2] )
            break;
          ++v14;
          ++v15;
        }
        while ( (__int64)v15 < (__int64)&dword_1C02A150C );
        v16 = &DesktopScaleFactorCutoffs;
        v17 = 0;
        do
        {
          if ( *v16 > v27[0].m128i_i32[3] )
            break;
          ++v17;
          ++v16;
        }
        while ( (__int64)v16 < (__int64)&dword_1C02A150C );
        v18 = v14 - v17;
        v19 = v18;
        if ( v27[5].m128i_i32[0] > v18 )
          v19 = v27[5].m128i_i32[0];
        if ( v19 >= v27[5].m128i_i32[2] )
        {
          v18 = v27[5].m128i_i32[2];
        }
        else if ( v27[5].m128i_i32[0] > v18 )
        {
          v18 = v27[5].m128i_i32[0];
        }
        v20 = *(_DWORD *)(i[319] + 248);
        v21 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v26);
        v22 = SetScaleFactorOverride(v21, v20, v18, (struct _DPI_INFORMATION *)v27);
        v4 = v22;
        if ( v22 < 0 )
LABEL_23:
          WdLogSingleEntry3(2LL, v4, *(_QWORD *)(i[319] + 232), *(unsigned int *)(i[319] + 248));
        else
          *a2 = 1;
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v6 + 8));
  v23 = *(struct _ERESOURCE **)(v6 + 8);
  if ( v23 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v23);
    PsLeavePriorityRegion(v25, v24);
  }
  return (unsigned int)v4;
}
