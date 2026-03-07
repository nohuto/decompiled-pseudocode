__int64 __fastcall KernelDriver::SetTargetAdjustedColorimetry(KernelDriver *this, struct _DXGK_COLORIMETRY *a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int128 v10; // xmm2
  bool v11; // cc
  __int64 result; // rax
  DXGK_STANDARD_COLORIMETRY_FLAGS v13; // r8d
  __int128 v14; // xmm1
  __int64 v15; // rcx
  __int128 v16; // xmm2
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  DXGK_STANDARD_COLORIMETRY_FLAGS v20; // [rsp+50h] [rbp-10h]

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
  {
    WdLogSingleEntry1(2LL, -1073741632LL);
    return 3221225664LL;
  }
  v5 = *(_QWORD *)(v2 + 16);
  v6 = *(_OWORD *)&a2->RedPoint.cx;
  v7 = *((unsigned int *)this + 8);
  v8 = *(_OWORD *)&a2->BluePoint.cx;
  v9 = *(_QWORD *)(v5 + 216);
  v10 = *(_OWORD *)&a2->MinLuminance;
  v11 = *(_DWORD *)(v5 + 2820) < 2500;
  v20.0 = (struct _DXGK_STANDARD_COLORIMETRY_FLAGS::$EB80654863EB95CBD7331D8F81564556)a2->StandardColorimetryFlags;
  v17 = v6;
  v18 = v8;
  v19 = v10;
  if ( v11 )
    return DpiSetTargetAdjustedColorimetry(v9, v7, &v17);
  result = DpiSetTargetAdjustedColorimetry2(v9, v7, (__int64)&v17);
  if ( (_DWORD)result == -1073741637 )
  {
    v13.0 = (struct _DXGK_STANDARD_COLORIMETRY_FLAGS::$EB80654863EB95CBD7331D8F81564556)a2->StandardColorimetryFlags;
    v14 = *(_OWORD *)&a2->BluePoint.cx;
    v15 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    v16 = *(_OWORD *)&a2->MinLuminance;
    v7 = *((unsigned int *)this + 8);
    v17 = *(_OWORD *)&a2->RedPoint.cx;
    v9 = *(_QWORD *)(v15 + 216);
    v18 = v14;
    v19 = v16;
    v20.0 = v13.0;
    return DpiSetTargetAdjustedColorimetry(v9, v7, &v17);
  }
  return result;
}
