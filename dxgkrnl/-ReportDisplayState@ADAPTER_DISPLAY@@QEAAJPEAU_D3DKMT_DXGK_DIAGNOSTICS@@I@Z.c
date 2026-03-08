/*
 * XREFs of ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02BA3C4
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01767E8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ReportDisplayState(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DXGK_DIAGNOSTICS *a2,
        int a3)
{
  unsigned int v5; // ebx
  size_t v6; // r8
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  unsigned int v13; // eax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _DISPLAY_PLANE_CONFIG *v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  DISPLAY_SOURCE *v23; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v25; // rcx
  __int128 v26; // xmm1
  _BYTE v28[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp+10h]

  v5 = -1073741811;
  if ( *(_DWORD *)a2 < 0xFFFFFFFC && *(_DWORD *)a2 + 4 == a3 )
  {
    v6 = (unsigned int)(a3 - 4);
    v7 = 20;
    if ( (unsigned int)v6 >= 0x14 )
    {
      v29 = (unsigned int)v6;
      v5 = 0;
      memset((char *)a2 + 4, 0, v6);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (ADAPTER_DISPLAY *)((char *)this + 608), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
      v8 = 0;
      if ( *((_DWORD *)this + 24) )
      {
        do
        {
          v9 = 4000LL * v8;
          v10 = *((_QWORD *)this + 16);
          if ( *(_BYTE *)(v10 + v9 + 762) )
          {
            v11 = *(_DWORD *)(v10 + v9 + 3760);
            v12 = 0;
            v13 = *(_DWORD *)(v10 + v9 + 3764);
            if ( v13 > v11 )
              v11 = v13;
            if ( v11 )
            {
              do
              {
                LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                              (DISPLAY_SOURCE *)(v9 + *((_QWORD *)this + 16)),
                                              v12);
                v15 = LatestPlaneConfigInternal;
                if ( LatestPlaneConfigInternal )
                {
                  if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
                  {
                    v16 = v7;
                    if ( (unsigned __int64)v7 + 72 <= v29 )
                    {
                      *(_DWORD *)((char *)a2 + v7 + 12) = 0;
                      v7 += 72;
                      *(_DWORD *)((char *)a2 + v16 + 4) = v8;
                      *(_DWORD *)((char *)a2 + v16 + 8) = v12;
                      *(_OWORD *)((char *)a2 + v16 + 20) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 12);
                      *(_OWORD *)((char *)a2 + v16 + 36) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 28);
                      *(_OWORD *)((char *)a2 + v16 + 52) = *(_OWORD *)((char *)LatestPlaneConfigInternal + 44);
                      *(_DWORD *)((char *)a2 + v16 + 68) = *((_DWORD *)LatestPlaneConfigInternal + 15);
                      *(_DWORD *)((char *)a2 + v16 + 72) = *((_DWORD *)LatestPlaneConfigInternal + 16);
                      v17 = *((_DWORD *)LatestPlaneConfigInternal + 18);
                      *(_DWORD *)((char *)a2 + v16 + 16) = 0;
                      if ( !v17 )
                        v17 = 21;
                      *(_DWORD *)((char *)a2 + v16 + 12) = v17;
                      v18 = (*((_DWORD *)v15 + 2) >> 2) & 1;
                      *(_DWORD *)((char *)a2 + v16 + 16) = v18;
                      v19 = v18 | (*((_DWORD *)v15 + 2) >> 4) & 2;
                      *(_DWORD *)((char *)a2 + v16 + 16) = v19;
                      v20 = v19 | (*((_DWORD *)v15 + 2) >> 2) & 4;
                      *(_DWORD *)((char *)a2 + v16 + 16) = v20;
                      *(_DWORD *)((char *)a2 + v16 + 16) = v20 | (2 * (*((_DWORD *)v15 + 2) & 8 | 4));
                      ++*((_DWORD *)a2 + 1);
                    }
                  }
                }
                ++v12;
              }
              while ( v12 < v11 );
            }
          }
          v21 = *((_DWORD *)this + 24);
          ++v8;
        }
        while ( v8 < v21 );
        v22 = 0;
        if ( v21 )
        {
          do
          {
            v23 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4000LL * v22);
            if ( *((_BYTE *)v23 + 762) )
            {
              LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(v23);
              if ( LatestPostCompositionConfigInternal )
              {
                if ( *(_BYTE *)LatestPostCompositionConfigInternal )
                {
                  v25 = v7;
                  if ( (unsigned __int64)v7 + 44 <= v29 )
                  {
                    *(_DWORD *)((char *)a2 + v7 + 4) = v22;
                    v7 += 44;
                    *(_OWORD *)((char *)a2 + v25 + 12) = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 4);
                    v26 = *(_OWORD *)((char *)LatestPostCompositionConfigInternal + 20);
                    *(_DWORD *)((char *)a2 + v25 + 8) = 0;
                    *(_DWORD *)((char *)a2 + v25 + 44) = 1;
                    *(_OWORD *)((char *)a2 + v25 + 28) = v26;
                    ++*((_DWORD *)a2 + 2);
                  }
                }
              }
            }
            ++v22;
          }
          while ( v22 < *((_DWORD *)this + 24) );
        }
      }
      if ( v28[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    }
  }
  return v5;
}
