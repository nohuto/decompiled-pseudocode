void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __m128i v3; // xmm6
  char *v4; // r14
  struct CInputSpaceRegion *v5; // rbx
  char *v6; // rsi
  _QWORD *v7; // r10
  __int32 v8; // ebp
  struct CInputSpaceRegion *v9; // rdi
  __int32 v10; // r15d
  __int32 v11; // r12d
  __int32 v12; // r13d
  _QWORD *v13; // rcx
  struct CInputSpaceRegion *v14; // rax
  struct CInputSpaceRegion *v15; // r8
  __int32 v16; // ecx
  int v17; // r9d
  __int32 v18; // ecx
  __int32 v19; // eax
  int v20; // eax
  __int16 v21; // ax
  struct CInputSpace *v22; // rdi
  __int64 v23; // r8
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  __int32 v38; // [rsp+20h] [rbp-98h]
  __m128i v39; // [rsp+28h] [rbp-90h] BYREF
  struct CInputSpaceRegion *v40; // [rsp+38h] [rbp-80h]
  __int32 v41; // [rsp+40h] [rbp-78h]
  __int32 v42; // [rsp+44h] [rbp-74h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  struct CInputSpace *v44; // [rsp+50h] [rbp-68h]
  _QWORD v45[3]; // [rsp+58h] [rbp-60h] BYREF

  v44 = a2;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 675LL);
  v3 = 0LL;
  v39 = 0LL;
  v45[0] = &CInputConfig::slock;
  v4 = (char *)a2 + 1456;
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v6 = (char *)*((_QWORD *)a2 + 182);
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v45[1] = v4;
  while ( 1 )
  {
    v45[2] = v6;
    LODWORD(v40) = v8;
    v13 = v7;
    v42 = v10;
    if ( v6 != v4 )
      v13 = v6 + 16;
    v41 = v11;
    v38 = v12;
    if ( !v13 )
      break;
    v14 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v45);
    v15 = v14;
    v16 = *(_DWORD *)v14;
    v17 = *((_DWORD *)v14 + 4);
    if ( v12 >= *(_DWORD *)v14 )
      v12 = *(_DWORD *)v14;
    v39.m128i_i32[0] = v12;
    v12 = v16;
    if ( v38 < v16 )
      v12 = v38;
    v18 = *((_DWORD *)v14 + 1);
    v19 = *((_DWORD *)v14 + 2);
    if ( v11 >= v18 )
      v11 = v18;
    v39.m128i_i32[1] = v11;
    v11 = v18;
    if ( v41 < v18 )
      v11 = v41;
    if ( v10 <= v19 )
      v10 = v19;
    v39.m128i_i32[2] = v10;
    v10 = v19;
    if ( v42 > v19 )
      v10 = v42;
    v20 = *((_DWORD *)v15 + 3);
    if ( v8 <= v20 )
      v8 = *((_DWORD *)v15 + 3);
    v39.m128i_i32[3] = v8;
    v8 = v20;
    if ( (int)v40 > v20 )
      v8 = (int)v40;
    if ( (v17 & 1) != 0 )
      v9 = v15;
    v7 = 0LL;
    if ( !v5 || (v43 = 0LL, (unsigned int)PtInRect(v15, 0LL)) )
      v5 = v15;
    v21 = *((_WORD *)v15 + 10);
    if ( (unsigned __int16)v21 < 0x60u )
    {
      v21 = *((_WORD *)v15 + 11);
      if ( (unsigned __int16)v21 <= 0x60u )
        v21 = 96;
      *((_WORD *)v15 + 10) = v21;
    }
    if ( *((_WORD *)v15 + 11) == (_WORD)v7 )
      *((_WORD *)v15 + 11) = v21;
    if ( (v17 & 2) != 0 )
    {
      CInputSpaceRegion::PopulatePanelId(v15);
      v7 = 0LL;
    }
    v6 = *(char **)v6;
    v39.m128i_i64[0] = __PAIR64__(v11, v12);
    v39.m128i_i64[1] = __PAIR64__(v8, v10);
    v3 = _mm_loadu_si128(&v39);
  }
  v40 = v9;
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  v22 = v44;
  if ( v40 )
    v5 = v40;
  v23 = 5LL;
  *((_DWORD *)v44 + 10) = 0;
  v24 = (_OWORD *)((char *)v22 + 24);
  v25 = (_OWORD *)((char *)v22 + 736);
  *(__m128i *)((char *)v22 + 24) = v3;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) |= 1u;
    do
    {
      *v25 = *(_OWORD *)v5;
      v25[1] = *((_OWORD *)v5 + 1);
      v25[2] = *((_OWORD *)v5 + 2);
      v25[3] = *((_OWORD *)v5 + 3);
      v25[4] = *((_OWORD *)v5 + 4);
      v25[5] = *((_OWORD *)v5 + 5);
      v25[6] = *((_OWORD *)v5 + 6);
      v25 += 8;
      v26 = *((_OWORD *)v5 + 7);
      v5 = (struct CInputSpaceRegion *)((char *)v5 + 128);
      *(v25 - 1) = v26;
      --v23;
    }
    while ( v23 );
    *v25 = *(_OWORD *)v5;
    v25[1] = *((_OWORD *)v5 + 1);
    v25[2] = *((_OWORD *)v5 + 2);
    v25[3] = *((_OWORD *)v5 + 3);
    *((_QWORD *)v25 + 8) = *((_QWORD *)v5 + 8);
  }
  else
  {
    do
    {
      v27 = v24[1];
      *v25 = *v24;
      v28 = v24[2];
      v25[1] = v27;
      v29 = v24[3];
      v25[2] = v28;
      v30 = v24[4];
      v25[3] = v29;
      v31 = v24[5];
      v25[4] = v30;
      v32 = v24[6];
      v25[5] = v31;
      v33 = v24[7];
      v24 += 8;
      v25[6] = v32;
      v25 += 8;
      *(v25 - 1) = v33;
      --v23;
    }
    while ( v23 );
    v34 = v24[1];
    *v25 = *v24;
    v35 = v24[2];
    v25[1] = v34;
    v36 = v24[3];
    v37 = *((_QWORD *)v24 + 8);
    v25[2] = v35;
    v25[3] = v36;
    *((_QWORD *)v25 + 8) = v37;
    *((_WORD *)v22 + 378) = 96;
  }
  *((_WORD *)v22 + 22) = *((_WORD *)v22 + 378);
}
