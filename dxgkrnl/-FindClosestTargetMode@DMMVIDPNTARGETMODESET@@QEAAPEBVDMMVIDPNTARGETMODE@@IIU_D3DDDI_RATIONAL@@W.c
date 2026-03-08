/*
 * XREFs of ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C006973C
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03B0840 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00027F0 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindClosestTargetMode(
        DMMVIDPNTARGETMODESET *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DDDI_RATIONAL a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  __int64 v8; // r12
  DMMVIDPNTARGETMODESET *v9; // rbx
  unsigned int v10; // ebp
  struct DMMVIDPNTARGETMODE *v11; // rdi
  unsigned int v12; // esi
  unsigned int v14; // r14d
  struct DMMVIDPNTARGETMODE *NextMode; // rbx
  unsigned int v16; // esi
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // ebx
  unsigned int v23; // eax
  struct _D3DDDI_RATIONAL v25; // [rsp+78h] [rbp+20h] BYREF

  v25 = a4;
  v8 = a2;
  v9 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  v10 = -1;
  v11 = 0LL;
  v12 = a3;
  v14 = -1;
  if ( v9 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    goto LABEL_23;
  NextMode = (DMMVIDPNTARGETMODESET *)((char *)v9 - 8);
  if ( !NextMode )
    goto LABEL_23;
  do
  {
    if ( (!a7 || *((_DWORD *)NextMode + 21) == (_DWORD)v8 && *((_DWORD *)NextMode + 22) == v12)
      && (!a8 || (int)(*((_DWORD *)NextMode + 30) << 29) >> 29 == a5) )
    {
      v16 = DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL);
      v17 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)((char *)NextMode + 92),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)NextMode + 30) << 29) >> 29),
              0LL);
      if ( v17 <= v16 )
        v18 = v16 - v17;
      else
        v18 = v17 - v16;
      v19 = *((_DWORD *)NextMode + 22) * *((_DWORD *)NextMode + 21);
      v12 = a3;
      v20 = v19 - a3 * v8;
      if ( v19 <= a3 * (unsigned int)v8 )
        v20 = a3 * v8 - v19;
      if ( v18 < v10 )
      {
        v10 = v18;
LABEL_17:
        v11 = NextMode;
        v14 = v20;
        goto LABEL_18;
      }
      if ( v18 == v10 && v20 < v14 )
        goto LABEL_17;
    }
LABEL_18:
    NextMode = DMMVIDPNTARGETMODESET::GetNextMode(this, NextMode);
  }
  while ( NextMode );
  if ( !v11 )
  {
LABEL_23:
    v23 = DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL);
    WdLogSingleEntry4(7LL, v8, v12, v23, this);
    return v11;
  }
  if ( a6 )
  {
    v21 = DmmMapVSyncFromRationalToInteger(
            (const struct _D3DDDI_RATIONAL *)((char *)v11 + 92),
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)v11 + 30) << 29) >> 29),
            0LL);
    if ( v21 != DmmMapVSyncFromRationalToInteger(&v25, a5, 0LL) )
      return 0LL;
  }
  return v11;
}
