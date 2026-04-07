/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BA70
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x18009BC60 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020250 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x18009B494 (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18009B50C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009B814 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     McTemplateU0dddd_EtwEventWriteTransfer @ 0x18009BCB8 (McTemplateU0dddd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  float v5; // xmm6_4
  bool v6; // zf
  char v7; // al
  float v8; // xmm1_4
  __int64 v9; // rax
  const struct tagRECT *v10; // rdx
  float v11; // xmm3_4
  LONG v12; // eax
  signed int v13; // r8d
  int v14; // edx
  CAnimatedGlassSheet *v15; // rcx
  LONG v16; // eax
  signed int v17; // r8d
  int v18; // edx
  CAnimatedGlassSheet *v19; // rcx
  LONG v20; // eax
  signed int v21; // r8d
  int v22; // edx
  CAnimatedGlassSheet *v23; // rcx
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rax
  char v27; // al
  struct tagRECT v29; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 56);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 72) )
    {
      v5 = *((float *)this + 111);
      v6 = (*(_DWORD *)(v3 + 8))-- == 1;
      v7 = CDesktopManager::s_fTimelineDirty;
      v8 = *((float *)this + 111);
      if ( v6 )
        v7 = 1;
      *((_QWORD *)this + 56) = 0LL;
      CDesktopManager::s_fTimelineDirty = v7;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) <= 0.0000011920929
        && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmGlassSheetFadeOut_End,
          a3,
          1LL,
          (__int64)&v29);
      }
    }
    else
    {
      v5 = *(double *)(v3 + 48);
    }
    CVisual::SetOpacity(this, v5);
  }
  v9 = *((_QWORD *)this + 54);
  if ( v9 )
  {
    v10 = (const struct tagRECT *)((char *)this + 416);
    if ( *(_BYTE *)(v9 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, v10);
      v26 = *((_QWORD *)this + 54);
      if ( v26 )
      {
        v6 = (*(_DWORD *)(v26 + 8))-- == 1;
        v27 = CDesktopManager::s_fTimelineDirty;
        if ( v6 )
          v27 = 1;
        *((_QWORD *)this + 54) = 0LL;
        CDesktopManager::s_fTimelineDirty = v27;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0dddd_EtwEventWriteTransfer(
          v25,
          v24,
          *((_DWORD *)this + 100),
          *((_DWORD *)this + 101),
          *((_DWORD *)this + 102),
          *((_DWORD *)this + 103));
    }
    else
    {
      v11 = *(double *)(v9 + 48);
      v12 = CAnimatedGlassSheet::InterpolateValueLinear(this, *((_DWORD *)this + 96), v10->left, v11);
      v13 = *((_DWORD *)this + 105);
      v14 = *((_DWORD *)this + 97);
      v29.left = v12;
      v16 = CAnimatedGlassSheet::InterpolateValueLinear(v15, v14, v13, v11);
      v17 = *((_DWORD *)this + 106);
      v18 = *((_DWORD *)this + 98);
      v29.top = v16;
      v20 = CAnimatedGlassSheet::InterpolateValueLinear(v19, v18, v17, v11);
      v21 = *((_DWORD *)this + 107);
      v22 = *((_DWORD *)this + 99);
      v29.right = v20;
      v29.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v23, v22, v21, v11);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v29);
    }
  }
  if ( !*((_QWORD *)this + 54) && !*((_QWORD *)this + 56) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
