/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C006E458
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C006DCF4 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C006D170 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C006EDEC (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     PtInRect @ 0x1C006FD0C (PtInRect.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  struct CInputSpaceRegion *v3; // rbx
  struct CInputSpaceRegion *v4; // r14
  struct CInputSpace *v5; // rdi
  int v6; // r12d
  int v7; // r13d
  struct CInputSpaceRegion *v8; // rax
  int v9; // r9d
  struct CInputSpaceRegion *v10; // rcx
  int v11; // r8d
  int v12; // eax
  int v13; // r8d
  __int16 v14; // dx
  unsigned __int16 v15; // ax
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // [rsp+20h] [rbp-50h]
  __int128 v31; // [rsp+28h] [rbp-48h]
  _QWORD v33[3]; // [rsp+48h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 657LL);
  v31 = 0LL;
  v33[0] = &CInputConfig::slock;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = (struct CInputSpace *)*((_QWORD *)a2 + 178);
  v6 = 0;
  v7 = 0;
  v30 = 0LL;
  v33[1] = (char *)a2 + 1424;
  while ( 1 )
  {
    v33[2] = v5;
    if ( v5 == (struct CInputSpace *)((char *)a2 + 1424) || v5 == (struct CInputSpace *)-16LL )
      break;
    v8 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v33);
    v9 = v30;
    v10 = v8;
    v11 = HIDWORD(v30);
    v12 = *(_DWORD *)v8;
    if ( (int)v30 >= v12 )
      v9 = v12;
    LODWORD(v30) = v9;
    LODWORD(v31) = v9;
    if ( SHIDWORD(v30) >= *((_DWORD *)v10 + 1) )
      v11 = *((_DWORD *)v10 + 1);
    HIDWORD(v30) = v11;
    DWORD1(v31) = v11;
    v13 = *((_DWORD *)v10 + 4);
    if ( v7 <= *((_DWORD *)v10 + 2) )
      v7 = *((_DWORD *)v10 + 2);
    DWORD2(v31) = v7;
    if ( v6 <= *((_DWORD *)v10 + 3) )
      v6 = *((_DWORD *)v10 + 3);
    HIDWORD(v31) = v6;
    if ( (v13 & 1) != 0 )
      v4 = v10;
    if ( !v3 || (unsigned int)PtInRect(v10, 0LL) )
      v3 = v10;
    v14 = *((_WORD *)v10 + 10);
    v15 = *((_WORD *)v10 + 11);
    if ( (unsigned __int16)v14 < 0x60u )
    {
      if ( v15 <= 0x60u )
        v14 = 96;
      else
        v14 = *((_WORD *)v10 + 11);
      *((_WORD *)v10 + 10) = v14;
    }
    if ( !v15 )
      *((_WORD *)v10 + 11) = v14;
    if ( (v13 & 2) != 0 )
      CInputSpaceRegion::PopulatePanelId(v10);
    v5 = *(struct CInputSpace **)v5;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 10) = 0;
  v16 = (_OWORD *)((char *)a2 + 24);
  v17 = (_OWORD *)((char *)a2 + 720);
  *(_OWORD *)((char *)a2 + 24) = v31;
  if ( v4 )
    v3 = v4;
  v18 = 5LL;
  if ( v3 )
  {
    *((_DWORD *)v3 + 4) |= 1u;
    do
    {
      *v17 = *(_OWORD *)v3;
      v17[1] = *((_OWORD *)v3 + 1);
      v17[2] = *((_OWORD *)v3 + 2);
      v17[3] = *((_OWORD *)v3 + 3);
      v17[4] = *((_OWORD *)v3 + 4);
      v17[5] = *((_OWORD *)v3 + 5);
      v17[6] = *((_OWORD *)v3 + 6);
      v17 += 8;
      v19 = *((_OWORD *)v3 + 7);
      v3 = (struct CInputSpaceRegion *)((char *)v3 + 128);
      *(v17 - 1) = v19;
      --v18;
    }
    while ( v18 );
    *v17 = *(_OWORD *)v3;
    v17[1] = *((_OWORD *)v3 + 1);
    v17[2] = *((_OWORD *)v3 + 2);
    v20 = *((_QWORD *)v3 + 6);
  }
  else
  {
    do
    {
      v21 = v16[1];
      *v17 = *v16;
      v22 = v16[2];
      v17[1] = v21;
      v23 = v16[3];
      v17[2] = v22;
      v24 = v16[4];
      v17[3] = v23;
      v25 = v16[5];
      v17[4] = v24;
      v26 = v16[6];
      v17[5] = v25;
      v27 = v16[7];
      v16 += 8;
      v17[6] = v26;
      v17 += 8;
      *(v17 - 1) = v27;
      --v18;
    }
    while ( v18 );
    v28 = v16[1];
    *v17 = *v16;
    v29 = v16[2];
    v20 = *((_QWORD *)v16 + 6);
    v17[1] = v28;
    v17[2] = v29;
  }
  *((_QWORD *)v17 + 6) = v20;
}
