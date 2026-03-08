/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C0010184
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C001459C (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  struct CInputSpaceRegion *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD **v15; // r15
  _QWORD *v16; // rdi
  _QWORD *v17; // rcx
  struct CInputSpaceRegion *v18; // rax
  int v19; // edx
  struct _ERESOURCE *v20; // rcx
  _QWORD v22[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 607LL);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 2);
  v10 = 0;
  v11 = *(_DWORD *)a4;
  v12 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v23 = HIDWORD(v9);
  if ( v11 )
  {
    v13 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v14 = 216LL * v10;
      if ( *(_DWORD *)(v14 + v13 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v14 + v13 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v10 >= v11 )
        goto LABEL_8;
    }
    v9 = *(_QWORD *)(v14 + v13 + 16);
    v12 = *(_DWORD *)(v14 + v13 + 24);
    v23 = HIDWORD(v9);
  }
LABEL_8:
  v15 = (_QWORD **)((char *)a3 + 1456);
  v22[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v16 = *v15;
  v22[1] = v15;
  while ( 1 )
  {
    v17 = 0LL;
    v22[2] = v16;
    if ( v16 != v15 )
      v17 = v16 + 2;
    if ( !v17 )
      break;
    v18 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v22);
    v19 = *((_DWORD *)v18 + 6);
    if ( *((_DWORD *)a2 + 4) == v19
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v18 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v18 + 8) )
    {
      v20 = CInputConfig::slock;
      *a5 = v18;
      ExReleaseResourceLite(v20);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v9 == v19 && __PAIR64__(v12, v23) == *(_QWORD *)((char *)v18 + 28) )
      v8 = v18;
    v16 = (_QWORD *)*v16;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    *a5 = v8;
    return 1;
  }
  return 0;
}
