bool __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this)
{
  unsigned int v1; // r15d
  unsigned int v3; // r14d
  int v4; // r13d
  unsigned int v5; // ebp
  struct _KTHREAD *v6; // rbx
  char v7; // r12
  __int64 v8; // rsi
  struct _KTHREAD *v9; // r14
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  char *v11; // r13
  unsigned int v12; // edx
  int v13; // eax
  unsigned __int8 v14; // r8
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct _KTHREAD *v16; // rcx
  unsigned __int8 v17; // dl
  bool v18; // zf
  int v20; // [rsp+90h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+10h]
  struct _DISPLAY_PLANE_CONFIG *v22; // [rsp+A0h] [rbp+18h]

  v1 = 0;
  if ( this[79] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 10428LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10428LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = 0;
  v21 = 0;
  v4 = 0;
  v20 = 0;
  v5 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  do
  {
    v6 = this[16];
    v7 = 0;
    v8 = 4000LL * v5;
    if ( !*(_DWORD *)((char *)v6 + v8 + 3764) )
      goto LABEL_16;
    while ( 1 )
    {
      v9 = v6;
      if ( !*((_BYTE *)v6 + v8 + v1 + 2904) )
        goto LABEL_12;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((struct _KTHREAD *)((char *)v6 + v8), v1);
      v6 = this[16];
      v22 = LatestPlaneConfigInternal;
      v11 = (char *)v6 + 4000 * v5 + 80 * v1;
      v12 = *((_DWORD *)v11 + 732);
      if ( LatestPlaneConfigInternal )
        break;
      if ( (v12 & 1) != 0 )
        goto LABEL_14;
      v9 = this[16];
LABEL_12:
      ++v1;
      v6 = v9;
      if ( v1 >= *(_DWORD *)((char *)v9 + v8 + 3764) )
        goto LABEL_15;
    }
    v13 = (v12 >> 4) & 1;
    v14 = v13 | 2;
    v9 = this[16];
    if ( (v12 & 0x20) == 0 )
      v14 = v13;
    if ( PlaneConfigsMatch(
           v22,
           v12 & 1,
           v14,
           (const struct tagRECT *)(v11 + 2932),
           (const struct tagRECT *)(v11 + 2948),
           (const struct tagRECT *)(v11 + 2964),
           *((enum _D3DDDI_ROTATION *)v11 + 745),
           (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)((v12 >> 2) & 1),
           *((enum D3DDDI_COLOR_SPACE_TYPE *)v11 + 746),
           *((_DWORD *)v11 + 747)) )
    {
      goto LABEL_12;
    }
LABEL_14:
    v7 = 1;
LABEL_15:
    v3 = v21;
    v4 = v20;
LABEL_16:
    v1 = 0;
    if ( *((_BYTE *)v6 + v8 + 3720) )
    {
      if ( v7 )
        goto LABEL_24;
      LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v6 + v8));
      v16 = this[16];
      v17 = *((_BYTE *)v16 + v8 + 3724);
      if ( !LatestPostCompositionConfigInternal )
      {
        v18 = v17 == 0;
        goto LABEL_23;
      }
      if ( !PostCompositionConfigsMatch(
              LatestPostCompositionConfigInternal,
              v17,
              (const struct tagRECT *)((char *)v16 + v8 + 3728),
              (const struct tagRECT *)((char *)v16 + v8 + 3744)) )
      {
LABEL_24:
        v4 |= 1 << v5;
        ++v3;
        v20 = v4;
        v21 = v3;
      }
    }
    else
    {
      v18 = v7 == 0;
LABEL_23:
      if ( !v18 )
        goto LABEL_24;
    }
    ++v5;
  }
  while ( v5 < *((_DWORD *)this + 24) );
  if ( v3 > 1 )
    return !ADAPTER_DISPLAY::AreSourcesSyncLocked((ADAPTER_DISPLAY *)this, v4);
  return 0;
}
