/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0174180
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0072080 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  int v6; // r8d
  struct PDEV *v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int v14; // ecx
  __int32 v15; // esi
  __int32 v16; // eax
  unsigned int v17; // ebx
  struct _LUID *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  struct PDEV *v21; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v22[6]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  LODWORD(v4) = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v7 = gppdevList;
  if ( gppdevList )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 10);
      v21 = v7;
      if ( (v8 & 1) == 0 )
        goto LABEL_25;
      if ( (v8 & 0x400) != 0 )
        goto LABEL_25;
      v9 = *((_QWORD *)v7 + 319);
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v9 + 160) & 0x800000) == 0 )
        goto LABEL_25;
      memset(v23, 0, sizeof(v23));
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _DWORD *))qword_1C02968D8)(
              a1,
              *(_QWORD *)(v9 + 240),
              *(unsigned int *)(v9 + 256),
              v23);
      v4 = v10;
      if ( v10 < 0 )
        break;
      memset(v22, 0, sizeof(v22));
      v22[0] = *(__m128i *)((char *)v7 + 2424);
      v22[1] = *(__m128i *)((char *)v7 + 2440);
      v22[2] = *(__m128i *)((char *)v7 + 2456);
      v22[3] = *(__m128i *)((char *)v7 + 2472);
      v22[4] = *(__m128i *)((char *)v7 + 2488);
      v22[5] = *(__m128i *)((char *)v7 + 2504);
      if ( v23[2] != _mm_srli_si128(*v22, 8).m128i_i32[1] )
      {
        v11 = 0;
        v12 = &DesktopScaleFactorCutoffs;
        do
        {
          if ( *v12 > v23[2] )
            break;
          ++v11;
          ++v12;
        }
        while ( (__int64)v12 < (__int64)&dword_1C026711C );
        v13 = &DesktopScaleFactorCutoffs;
        v14 = 0;
        do
        {
          if ( *v13 > v22[0].m128i_i32[3] )
            break;
          ++v14;
          ++v13;
        }
        while ( (__int64)v13 < (__int64)&dword_1C026711C );
        v15 = v11 - v14;
        v16 = v15;
        if ( v22[5].m128i_i32[0] > v15 )
          v16 = v22[5].m128i_i32[0];
        if ( v16 >= v22[5].m128i_i32[2] )
        {
          v15 = v22[5].m128i_i32[2];
        }
        else if ( v22[5].m128i_i32[0] > v15 )
        {
          v15 = v22[5].m128i_i32[0];
        }
        v17 = *(_DWORD *)(*((_QWORD *)v7 + 319) + 256LL);
        v18 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21);
        v19 = ((__int64 (__fastcall *)(struct _LUID *, _QWORD, _QWORD, __m128i *))qword_1C02968C0)(
                v18,
                v17,
                (unsigned int)v15,
                v22);
        v4 = v19;
        if ( v19 < 0 )
          break;
        *a2 = 1;
      }
LABEL_25:
      v7 = *(struct PDEV **)v7;
      if ( !v7 )
        goto LABEL_26;
    }
    WdLogSingleEntry3(
      2LL,
      v4,
      *(_QWORD *)(*((_QWORD *)v7 + 319) + 240LL),
      *(unsigned int *)(*((_QWORD *)v7 + 319) + 256LL));
    goto LABEL_25;
  }
LABEL_26:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v6);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v20);
  }
  return (unsigned int)v4;
}
