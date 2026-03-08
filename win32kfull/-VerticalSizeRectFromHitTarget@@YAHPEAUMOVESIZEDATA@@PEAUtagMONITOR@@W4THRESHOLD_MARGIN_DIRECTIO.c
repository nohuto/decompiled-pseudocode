/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01EC3A8
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01EBD54 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator() @ 0x1C01E9FC4 (_lambda_55b845ca2123bba9cc6e2775260ddcb2_--operator().c)
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EB3F8 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, LONG a5)
{
  unsigned int v7; // esi
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  unsigned int CurrentThreadDpiAwarenessContext; // r13d
  LONG v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rbx
  struct tagRECT *v17; // rax
  LONG top; // edi
  __int64 v19; // rax
  unsigned int v20; // edx
  LONG v21; // r15d
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // eax
  LONG v25; // r12d
  __int64 v26; // rbx
  __int64 v27; // rbx
  struct tagRECT *v28; // rax
  LONG bottom; // edi
  __int64 v30; // rax
  unsigned int v31; // edx
  LONG v32; // r15d
  __int64 v33; // rcx
  int v34; // edi
  int v35; // eax
  int v36; // eax
  _QWORD v38[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v39; // [rsp+50h] [rbp-30h]
  struct tagRECT v40; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v41; // [rsp+70h] [rbp-10h] BYREF
  __int64 v42; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v43; // [rsp+D8h] [rbp+58h] BYREF

  v42 = a1;
  v43 = (unsigned __int64)&v42;
  v38[0] = 0LL;
  v7 = 0;
  lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v43, &v40, a2);
  v39 = v40;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
  if ( a3 )
  {
    if ( a3 != 3 )
      return v7;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        16,
        5,
        1,
        16,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    v13 = a5;
    v14 = *(_QWORD *)(v42 + 232);
    while ( 1 )
    {
      v40 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v43, &v41, v14);
      if ( IsDockTargetActive(v42, 0) && v40.left <= v13 && v13 < v40.right )
        break;
      v16 = *(_QWORD *)(v14 + 96);
      if ( v16 == gpDispInfo + 144LL )
        v16 = *(_QWORD *)(gpDispInfo + 144LL);
      v14 = v16 - 96;
      if ( v14 == *(_QWORD *)(v15 + 232) )
        return v7;
    }
    v38[0] = v14;
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v14 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      top = v40.top;
      v39.top = v40.top;
    }
    else
    {
      v38[0] = a2;
      v17 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v43, &v41, a2);
      v15 = v42;
      v14 = a2;
      v39 = *v17;
      top = v39.top;
    }
    v19 = *(_QWORD *)(v15 + 16);
    v20 = *(_DWORD *)(v15 + 40);
    v21 = *(_DWORD *)(v15 + 48);
    v39.left = v20;
    v22 = *(_QWORD *)(v19 + 40);
    v39.right = v21;
    if ( (*(_DWORD *)(v22 + 288) & 0xF) != 2 && v14 != *(_QWORD *)(v15 + 208) )
    {
      v43 = v20;
      LogicalToPhysicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v15 + 208);
      PhysicalToLogicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v38);
      v39.left = (__int16)v43;
      LODWORD(v43) = v21;
      LogicalToPhysicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v42 + 208);
      PhysicalToLogicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v38);
      v15 = v42;
      v39.right = (__int16)v43;
    }
    v23 = *(_DWORD *)(v15 + 108);
    if ( v39.bottom - top < v23 )
      v39.top = v39.bottom - v23;
    v24 = *(_DWORD *)(v15 + 116);
    if ( v39.bottom - top >= v24 )
      v39.top = v39.bottom - v24;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        v11,
        5,
        1,
        15,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    v25 = a5;
    v26 = *(_QWORD *)(v42 + 232);
    while ( 1 )
    {
      v40 = *lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v43, &v41, v26);
      if ( IsDockTargetActive(v42, 3) && v40.left <= v25 && v25 < v40.right )
        break;
      v27 = *(_QWORD *)(v26 + 96);
      if ( v27 == gpDispInfo + 144LL )
        v27 = *(_QWORD *)(gpDispInfo + 144LL);
      v26 = v27 - 96;
      if ( v26 == *(_QWORD *)(v15 + 232) )
        return v7;
    }
    v38[0] = v26;
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 40LL) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v26 + 40) + 60LL) == *(_WORD *)(*(_QWORD *)(a2 + 40) + 60LL) )
    {
      bottom = v40.bottom;
      v39.bottom = v40.bottom;
    }
    else
    {
      v38[0] = a2;
      v28 = lambda_55b845ca2123bba9cc6e2775260ddcb2_::operator()((__int64 **)&v43, &v41, a2);
      v15 = v42;
      v26 = a2;
      v39 = *v28;
      bottom = v39.bottom;
    }
    v30 = *(_QWORD *)(v15 + 16);
    v31 = *(_DWORD *)(v15 + 40);
    v32 = *(_DWORD *)(v15 + 48);
    v39.left = v31;
    v33 = *(_QWORD *)(v30 + 40);
    v39.right = v32;
    if ( (*(_DWORD *)(v33 + 288) & 0xF) != 2 && v26 != *(_QWORD *)(v15 + 208) )
    {
      v43 = v31;
      LogicalToPhysicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v15 + 208);
      PhysicalToLogicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v38);
      v39.left = (__int16)v43;
      LODWORD(v43) = v32;
      LogicalToPhysicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v42 + 208);
      PhysicalToLogicalDPIPoint(&v43, &v43, CurrentThreadDpiAwarenessContext, v38);
      v15 = v42;
      v39.right = (__int16)v43;
    }
    v34 = bottom - v39.top;
    v35 = *(_DWORD *)(v15 + 108);
    if ( v34 < v35 )
      v39.bottom = v39.top + v35;
    v36 = *(_DWORD *)(v15 + 116);
    if ( v34 >= v36 )
      v39.bottom = v39.top + v36;
  }
  if ( (*(_DWORD *)(v15 + 200) & 0x1000000) != 0 )
    *(struct tagRECT *)(v15 + 72) = v39;
  else
    *(struct tagRECT *)(v15 + 40) = v39;
  return v7;
}
