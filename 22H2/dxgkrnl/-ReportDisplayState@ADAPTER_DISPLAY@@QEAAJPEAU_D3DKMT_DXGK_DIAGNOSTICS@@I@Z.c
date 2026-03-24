/*
 * XREFs of ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C0214B1C
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C015F6C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C015FA00 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ReportDisplayState(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DXGK_DIAGNOSTICS *a2,
        int a3)
{
  unsigned int v5; // ebx
  size_t v6; // r8
  unsigned int v7; // r14d
  char *v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ebp
  DISPLAY_SOURCE *v24; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm1
  _BYTE v29[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp+10h]

  v5 = -1073741811;
  if ( *(_DWORD *)a2 < 0xFFFFFFFC && *(_DWORD *)a2 + 4 == a3 )
  {
    v6 = (unsigned int)(a3 - 4);
    v7 = 20;
    if ( (unsigned int)v6 >= 0x14 )
    {
      v8 = (char *)a2 + 4;
      v9 = (unsigned int)v6;
      v30 = (unsigned int)v6;
      v5 = 0;
      memset((char *)a2 + 4, 0, v6);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (ADAPTER_DISPLAY *)((char *)this + 520), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
      v11 = *((_DWORD *)this + 20);
      v12 = 0;
      if ( v11 )
      {
        do
        {
          v13 = *((_QWORD *)this + 14);
          v14 = 3968LL * v12;
          if ( *(_BYTE *)(v13 + v14 + 722) )
          {
            v15 = 0;
            v16 = *(_DWORD *)(v13 + v14 + 3740);
            if ( v16 <= *(_DWORD *)(v13 + v14 + 3736) )
              v16 = *(_DWORD *)(v13 + v14 + 3736);
            if ( v16 )
            {
              do
              {
                LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                              (DISPLAY_SOURCE *)(v14 + *((_QWORD *)this + 14)),
                                              v15);
                v18 = LatestPlaneConfigInternal;
                if ( LatestPlaneConfigInternal )
                {
                  if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
                  {
                    v19 = v7;
                    if ( (unsigned __int64)v7 + 72 <= v30 )
                    {
                      *(_DWORD *)((char *)a2 + v7 + 12) = 0;
                      v7 += 72;
                      *(_DWORD *)((char *)a2 + v19 + 4) = v12;
                      *(_DWORD *)((char *)a2 + v19 + 8) = v15;
                      *(_OWORD *)((char *)a2 + v19 + 20) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
                      *(_OWORD *)((char *)a2 + v19 + 36) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
                      *(_OWORD *)((char *)a2 + v19 + 52) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
                      *(_DWORD *)((char *)a2 + v19 + 68) = *((_DWORD *)LatestPlaneConfigInternal + 15);
                      *(_DWORD *)((char *)a2 + v19 + 72) = *((_DWORD *)LatestPlaneConfigInternal + 16);
                      v20 = *((_DWORD *)LatestPlaneConfigInternal + 18);
                      *(_DWORD *)((char *)a2 + v19 + 16) = 0;
                      if ( !v20 )
                        v20 = 21;
                      *(_DWORD *)((char *)a2 + v19 + 12) = v20;
                      v21 = (*((_DWORD *)v18 + 2) >> 2) & 1;
                      *(_DWORD *)((char *)a2 + v19 + 16) = v21;
                      v22 = v21 | (*((_DWORD *)v18 + 2) >> 4) & 2;
                      *(_DWORD *)((char *)a2 + v19 + 16) = v22;
                      v10 = v22 | (*((_DWORD *)v18 + 2) >> 2) & 4u;
                      *(_DWORD *)((char *)a2 + v19 + 16) = v10;
                      *(_DWORD *)((char *)a2 + v19 + 16) = v10 | (2 * (*((_DWORD *)v18 + 2) & 8 | 4));
                      ++*((_DWORD *)a2 + 1);
                    }
                  }
                }
                ++v15;
              }
              while ( v15 < v16 );
            }
          }
          v11 = *((_DWORD *)this + 20);
          ++v12;
        }
        while ( v12 < v11 );
        v9 = v30;
        v8 = (char *)a2 + 4;
      }
      v23 = 0;
      if ( v11 )
      {
        do
        {
          v24 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968LL * v23);
          if ( *((_BYTE *)v24 + 722) )
          {
            LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v24);
            v10 = (__int64)LatestPostCompositionConfigInternal;
            if ( LatestPostCompositionConfigInternal )
            {
              if ( *(_BYTE *)LatestPostCompositionConfigInternal )
              {
                v26 = v7;
                if ( (unsigned __int64)v7 + 44 <= v9 )
                {
                  *(_DWORD *)((char *)a2 + v7 + 4) = v23;
                  v7 += 44;
                  *(_OWORD *)((char *)a2 + v26 + 12) = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 4);
                  v27 = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 20);
                  *(_DWORD *)((char *)a2 + v26 + 8) = 0;
                  *(_DWORD *)((char *)a2 + v26 + 44) = 1;
                  *(_OWORD *)((char *)a2 + v26 + 28) = v27;
                  ++*((_DWORD *)v8 + 1);
                }
              }
            }
          }
          ++v23;
        }
        while ( v23 < *((_DWORD *)this + 20) );
      }
      if ( v29[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v10);
    }
  }
  return v5;
}
