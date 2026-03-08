/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3E44
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C01C3D50 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E4780 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0009408 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01AFADC (DxgkReleaseSessionModeChangeLock.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01BE528 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C17B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03B6674 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C03B7170 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, DWORD a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int active; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // r8
  __int16 v16; // ax
  unsigned int i; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  _BYTE v21[16]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v22[64]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp+17h]
  unsigned __int8 v24; // [rsp+D8h] [rbp+7Fh] BYREF

  v21[0] = 0;
  v6 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v21, 1);
  LODWORD(v7) = v6;
  if ( v6 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v22, 8u, 0);
    if ( (*((_DWORD *)this + 21) & 1) == 0 )
    {
      active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v22, 1);
      v7 = active;
      if ( active >= 0 )
      {
        if ( active == 255 )
          goto LABEL_5;
        if ( v23 )
          v10 = *(_WORD *)(v23 + 20);
        else
          v10 = 0;
        v11 = *((_QWORD *)this + 8);
        if ( v11 )
          LOWORD(v11) = *(_WORD *)(v11 + 20);
        if ( v10 <= (unsigned __int16)v11 )
          WdLogSingleEntry0(1LL);
        v12 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)v22, a2, a3);
        v7 = v12;
        if ( v12 >= 0 )
        {
          v24 = 0;
          CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v22, &v24);
          if ( !v24 )
            WdLogSingleEntry0(1LL);
          v13 = *((_QWORD *)this + 8);
          if ( v13 )
            v14 = *(_WORD *)(v13 + 20);
          else
            v14 = 0;
          v15 = v23;
          if ( v23 )
            v16 = *(_WORD *)(v23 + 20);
          else
            v16 = 0;
          if ( v14 != v16 )
          {
            WdLogSingleEntry0(1LL);
            v15 = v23;
          }
          for ( i = 0;
                i < *(_DWORD *)(v15 + 40);
                *(_DWORD *)(*(_QWORD *)(v15 + 48) + v19 + 80) &= ~*(_DWORD *)(*(_QWORD *)(v15 + 48) + 340 * v18 + 232) )
          {
            v18 = i++;
            v19 = 340 * v18;
            *(_DWORD *)(*(_QWORD *)(v15 + 48) + v19 + 84) &= ~*(_DWORD *)(*(_QWORD *)(v15 + 48) + 340 * v18 + 232);
          }
          v20 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v22);
          v7 = v20;
          if ( v20 >= 0 )
            goto LABEL_6;
        }
      }
      WdLogSingleEntry1(2LL, v7);
      goto LABEL_6;
    }
LABEL_5:
    LODWORD(v7) = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
LABEL_6:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v22);
    goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, v6);
LABEL_7:
  if ( v21[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v7;
}
