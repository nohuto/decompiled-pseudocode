/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020A3AC (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C020B268 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 * Callees:
 *     _lambda_89d8f36525411427859098b7e7b99cc4_::operator() @ 0x1C0209408 (_lambda_89d8f36525411427859098b7e7b99cc4_--operator().c)
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A9F8 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r12d
  __m128i *v12; // rax
  int v13; // esi
  __int32 v14; // r14d
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm0_8
  int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rbx
  __int128 *v21; // rax
  int v22; // edi
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // r14d
  __int64 v26; // rcx
  int v27; // edx
  int v28; // eax
  int v29; // esi
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int128 *v32; // rax
  int v33; // edi
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // esi
  __int64 v37; // rcx
  int v38; // eax
  int v39; // edi
  int v40; // eax
  _QWORD v42[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v43; // [rsp+30h] [rbp-30h]
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF
  __int128 v45; // [rsp+50h] [rbp-10h] BYREF
  __int64 v46; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v47; // [rsp+A8h] [rbp+48h] BYREF

  v46 = a1;
  v42[0] = 0LL;
  v47 = (unsigned __int64)&v46;
  v8 = 0;
  lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v44, a2);
  v43 = v44;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v9);
  if ( a4 )
  {
    v12 = (__m128i *)lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v44, a4);
    v13 = HIDWORD(v43);
    v14 = DWORD1(v43);
    v15 = *v12;
    v16 = _mm_srli_si128(*v12, 8).m128i_u64[0];
    if ( SHIDWORD(v16) > SHIDWORD(v43) )
      v13 = HIDWORD(v16);
    HIDWORD(v43) = v13;
    if ( v15.m128i_i32[1] < SDWORD1(v43) )
      v14 = v15.m128i_i32[1];
    DWORD1(v43) = v14;
  }
  else
  {
    v13 = HIDWORD(v43);
    v14 = DWORD1(v43);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v8;
    v17 = a5;
    v18 = *(_QWORD *)(v46 + 232);
    while ( 1 )
    {
      v44 = *lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v45, v18);
      if ( IsDockTargetActive(v46, 0) && (int)v44 <= v17 && v17 < SDWORD2(v44) )
        break;
      v20 = *(_QWORD *)(v18 + 96);
      if ( v20 == gpDispInfo + 144LL )
        v20 = *(_QWORD *)(gpDispInfo + 144LL);
      v18 = v20 - 96;
      if ( v18 == *(_QWORD *)(v19 + 232) )
        return v8;
    }
    v42[0] = v18;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v18 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      v22 = DWORD1(v44);
      DWORD1(v43) = DWORD1(v44);
    }
    else
    {
      v42[0] = a2;
      v21 = lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v45, a2);
      v19 = v46;
      v18 = a2;
      v43 = *v21;
      v13 = HIDWORD(v43);
      v22 = DWORD1(v43);
    }
    v23 = *(_QWORD *)(v19 + 16);
    v24 = *(_DWORD *)(v19 + 40);
    v25 = *(_DWORD *)(v19 + 48);
    LODWORD(v43) = v24;
    v26 = *(_QWORD *)(v23 + 40);
    DWORD2(v43) = v25;
    if ( (*(_DWORD *)(v26 + 288) & 0xF) != 2 && v18 != *(_QWORD *)(v19 + 208) )
    {
      v47 = v24;
      LogicalToPhysicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v19 + 208);
      PhysicalToLogicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v42);
      LODWORD(v43) = (__int16)v47;
      LODWORD(v47) = v25;
      LogicalToPhysicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v46 + 208);
      PhysicalToLogicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v42);
      v19 = v46;
      DWORD2(v43) = (__int16)v47;
    }
    v27 = *(_DWORD *)(v19 + 108);
    if ( v13 - v22 < v27 )
      DWORD1(v43) = v13 - v27;
    v28 = *(_DWORD *)(v19 + 116);
    if ( v13 - v22 >= v28 )
      DWORD1(v43) = v13 - v28;
  }
  else
  {
    v29 = a5;
    v30 = *(_QWORD *)(v46 + 232);
    while ( 1 )
    {
      v44 = *lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v45, v30);
      if ( IsDockTargetActive(v46, 3) && (int)v44 <= v29 && v29 < SDWORD2(v44) )
        break;
      v31 = *(_QWORD *)(v30 + 96);
      if ( v31 == gpDispInfo + 144LL )
        v31 = *(_QWORD *)(gpDispInfo + 144LL);
      v30 = v31 - 96;
      if ( v30 == *(_QWORD *)(v19 + 232) )
        return v8;
    }
    v42[0] = v30;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v30 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      v33 = HIDWORD(v44);
      HIDWORD(v43) = HIDWORD(v44);
    }
    else
    {
      v42[0] = a2;
      v32 = lambda_89d8f36525411427859098b7e7b99cc4_::operator()((__int64 **)&v47, &v45, a2);
      v19 = v46;
      v30 = a2;
      v43 = *v32;
      v33 = HIDWORD(v43);
      v14 = DWORD1(v43);
    }
    v34 = *(_QWORD *)(v19 + 16);
    v35 = *(_DWORD *)(v19 + 40);
    v36 = *(_DWORD *)(v19 + 48);
    LODWORD(v43) = v35;
    v37 = *(_QWORD *)(v34 + 40);
    DWORD2(v43) = v36;
    if ( (*(_DWORD *)(v37 + 288) & 0xF) != 2 && v30 != *(_QWORD *)(v19 + 208) )
    {
      v47 = v35;
      LogicalToPhysicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v19 + 208);
      PhysicalToLogicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v42);
      LODWORD(v43) = (__int16)v47;
      LODWORD(v47) = v36;
      LogicalToPhysicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v46 + 208);
      PhysicalToLogicalDPIPoint(&v47, &v47, CurrentThreadDpiAwarenessContext, v42);
      v19 = v46;
      DWORD2(v43) = (__int16)v47;
    }
    v38 = *(_DWORD *)(v19 + 108);
    v39 = v33 - v14;
    if ( v39 < v38 )
      HIDWORD(v43) = v14 + v38;
    v40 = *(_DWORD *)(v19 + 116);
    if ( v39 >= v40 )
      HIDWORD(v43) = v14 + v40;
  }
  v8 = 1;
  if ( (*(_DWORD *)(v19 + 200) & 0x2000000) != 0 )
    *(_OWORD *)(v19 + 72) = v43;
  else
    *(_OWORD *)(v19 + 40) = v43;
  return v8;
}
