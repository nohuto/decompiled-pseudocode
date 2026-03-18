/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A0138
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003C178 (PtInRect.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C00A093C (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C00A1A54 (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __m128i v6; // xmm6
  struct CInputSpaceRegion *v7; // rbp
  CInputSpaceRegion *v8; // rbx
  signed int v9; // r8d
  char *v10; // r11
  unsigned int v11; // r9d
  __int16 v12; // si
  struct CInputSpace *v13; // r14
  signed int v14; // r12d
  signed int v15; // r13d
  char *v16; // rcx
  int v17; // r13d
  int v18; // r12d
  struct CInputSpaceRegion *v19; // rax
  CInputSpaceRegion *v20; // rcx
  int v21; // r10d
  __int16 v22; // dx
  unsigned __int16 v23; // ax
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // r8
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rax
  __m128i v39; // [rsp+20h] [rbp-88h] BYREF
  int v40; // [rsp+30h] [rbp-78h]
  int v41; // [rsp+34h] [rbp-74h]
  int v42; // [rsp+38h] [rbp-70h]
  unsigned int v43; // [rsp+3Ch] [rbp-6Ch]
  __int64 v44; // [rsp+40h] [rbp-68h]
  _QWORD v45[3]; // [rsp+48h] [rbp-60h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v6 = 0LL;
  v39 = 0LL;
  v45[0] = &CInputConfig::slock;
  v7 = 0LL;
  v8 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 96;
  v13 = (struct CInputSpace *)*((_QWORD *)a2 + 182);
  v14 = 0;
  v15 = 0;
  v45[1] = (char *)a2 + 1456;
  while ( 1 )
  {
    v41 = v14;
    v40 = v15;
    v16 = v10;
    v45[2] = v13;
    if ( v13 != (struct CInputSpace *)((char *)a2 + 1456) )
      v16 = (char *)v13 + 16;
    v17 = v9;
    v18 = v11;
    if ( !v16 )
      break;
    v19 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v45);
    v20 = v19;
    v11 = *(_DWORD *)v19;
    v9 = *((_DWORD *)v19 + 1);
    v21 = *((_DWORD *)v19 + 4);
    if ( v18 < *(_DWORD *)v19 )
      v11 = v18;
    v14 = *((_DWORD *)v19 + 3);
    v43 = v11;
    if ( v17 < v9 )
      v9 = v17;
    v15 = *((_DWORD *)v19 + 2);
    v42 = v9;
    if ( v40 > v15 )
      v15 = v40;
    if ( v41 > v14 )
      v14 = v41;
    if ( (v21 & 1) != 0 )
      v7 = v19;
    v10 = 0LL;
    if ( !v8 || (v44 = 0LL, PtInRect(v19, 0LL)) )
      v8 = v20;
    v22 = *((_WORD *)v20 + 10);
    v23 = *((_WORD *)v20 + 11);
    if ( (unsigned __int16)v22 < 0x60u )
    {
      if ( v23 <= 0x60u )
        v22 = 96;
      else
        v22 = *((_WORD *)v20 + 11);
      *((_WORD *)v20 + 10) = v22;
    }
    if ( !v23 )
      *((_WORD *)v20 + 11) = v22;
    if ( (v21 & 2) != 0 )
    {
      CInputSpaceRegion::PopulatePanelId(v20);
      v9 = v42;
      v10 = 0LL;
      v11 = v43;
    }
    v13 = *(struct CInputSpace **)v13;
    v39.m128i_i64[0] = __PAIR64__(v9, v11);
    v39.m128i_i64[1] = __PAIR64__(v14, v15);
    v6 = _mm_loadu_si128(&v39);
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  v24 = (_OWORD *)((char *)a2 + 24);
  *((_DWORD *)a2 + 10) = 0;
  *(__m128i *)((char *)a2 + 24) = v6;
  if ( v7 )
    v8 = v7;
  v25 = (_OWORD *)((char *)a2 + 736);
  v26 = 5LL;
  if ( v8 )
  {
    *((_DWORD *)v8 + 4) |= 1u;
    do
    {
      *v25 = *(_OWORD *)v8;
      v25[1] = *((_OWORD *)v8 + 1);
      v25[2] = *((_OWORD *)v8 + 2);
      v25[3] = *((_OWORD *)v8 + 3);
      v25[4] = *((_OWORD *)v8 + 4);
      v25[5] = *((_OWORD *)v8 + 5);
      v25[6] = *((_OWORD *)v8 + 6);
      v25 += 8;
      v27 = *((_OWORD *)v8 + 7);
      v8 = (CInputSpaceRegion *)((char *)v8 + 128);
      *(v25 - 1) = v27;
      --v26;
    }
    while ( v26 );
    *v25 = *(_OWORD *)v8;
    v25[1] = *((_OWORD *)v8 + 1);
    v25[2] = *((_OWORD *)v8 + 2);
    v25[3] = *((_OWORD *)v8 + 3);
    *((_QWORD *)v25 + 8) = *((_QWORD *)v8 + 8);
    v12 = *((_WORD *)a2 + 378);
  }
  else
  {
    do
    {
      v28 = v24[1];
      *v25 = *v24;
      v29 = v24[2];
      v25[1] = v28;
      v30 = v24[3];
      v25[2] = v29;
      v31 = v24[4];
      v25[3] = v30;
      v32 = v24[5];
      v25[4] = v31;
      v33 = v24[6];
      v25[5] = v32;
      v34 = v24[7];
      v24 += 8;
      v25[6] = v33;
      v25 += 8;
      *(v25 - 1) = v34;
      --v26;
    }
    while ( v26 );
    v35 = v24[1];
    *v25 = *v24;
    v36 = v24[2];
    v25[1] = v35;
    v37 = v24[3];
    v38 = *((_QWORD *)v24 + 8);
    v25[2] = v36;
    v25[3] = v37;
    *((_QWORD *)v25 + 8) = v38;
    *((_WORD *)a2 + 378) = 96;
  }
  *((_WORD *)a2 + 22) = v12;
}
