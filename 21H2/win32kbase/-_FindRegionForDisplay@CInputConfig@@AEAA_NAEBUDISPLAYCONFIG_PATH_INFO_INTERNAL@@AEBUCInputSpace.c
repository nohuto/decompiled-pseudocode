/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1C006D3C0
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C006DA90 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C006EDEC (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // r10
  _QWORD **v15; // r15
  _QWORD *v16; // rdi
  struct CInputSpaceRegion *v17; // rax
  int v18; // edx
  struct _ERESOURCE *v19; // rcx
  _QWORD v21[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+74h] [rbp+Ch]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 589LL);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 2);
  v10 = 0;
  v11 = *(_DWORD *)a4;
  v12 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v22 = HIDWORD(v9);
  if ( v11 )
  {
    v13 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v14 = 200LL * v10;
      if ( *(_DWORD *)(v14 + v13 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v14 + v13 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v10 >= v11 )
        goto LABEL_8;
    }
    v9 = *(_QWORD *)(200LL * v10 + v13 + 16);
    v12 = *(_DWORD *)(200LL * v10 + v13 + 24);
    v22 = HIDWORD(v9);
  }
LABEL_8:
  v15 = (_QWORD **)((char *)a3 + 1424);
  v21[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v16 = *v15;
  v21[1] = v15;
  while ( 1 )
  {
    v21[2] = v16;
    if ( v16 == v15 || v16 == (_QWORD *)-16LL )
      break;
    v17 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v21);
    v18 = *((_DWORD *)v17 + 6);
    if ( *((_DWORD *)a2 + 4) == v18
      && *((_DWORD *)a2 + 5) == *((_DWORD *)v17 + 7)
      && *((_DWORD *)a2 + 6) == *((_DWORD *)v17 + 8) )
    {
      v19 = CInputConfig::slock;
      *a5 = v17;
      ExReleaseResourceLite(v19);
      KeLeaveCriticalRegion();
      return 1;
    }
    if ( (_DWORD)v9 == v18 && __PAIR64__(v12, v22) == *(_QWORD *)((char *)v17 + 28) )
      v8 = v17;
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
