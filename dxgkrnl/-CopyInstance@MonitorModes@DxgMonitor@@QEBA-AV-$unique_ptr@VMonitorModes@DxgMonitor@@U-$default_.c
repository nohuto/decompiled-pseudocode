/*
 * XREFs of ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03C7D00
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03C4A88 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C01F9838 (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03C7CA8 (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 */

DxgMonitor::MonitorModes **__fastcall DxgMonitor::MonitorModes::CopyInstance(
        __int64 a1,
        DxgMonitor::MonitorModes **a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorModes *v8; // rax
  DxgMonitor::MonitorModes *v9; // rax
  DxgMonitor::MonitorModes *v10; // rbx
  __int64 i; // rax
  __int64 v12; // rax
  DxgMonitor::MonitorModes *v13; // rcx
  DxgMonitor::MonitorModes **v14; // r8
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rbp
  _QWORD *j; // rax
  _OWORD *v19; // rax
  DxgMonitor::MonitorModes **v20; // rdx
  DxgMonitor::MonitorModes *v21; // rax
  _QWORD *v22; // rdi

  v8 = (DxgMonitor::MonitorModes *)operator new[](0xF8uLL, 0x4D677844u, 256LL);
  if ( v8 && (v9 = DxgMonitor::MonitorModes::MonitorModes(v8, a3, a4), (v10 = v9) != 0LL) )
  {
    *((_BYTE *)v9 + 116) = *(_BYTE *)(a1 + 116);
    *((_DWORD *)v9 + 28) = *(_DWORD *)(a1 + 112);
    for ( i = *(_QWORD *)(a1 + 128); i != a1 + 128; i = *(_QWORD *)(v15 + 96) )
    {
      v15 = i - 96;
      if ( !i )
        v15 = 0LL;
      if ( !v15 )
        break;
      v12 = operator new[](0x78uLL, 0x4D677844u, 256LL);
      if ( !v12 )
      {
LABEL_14:
        WdLogSingleEntry0(6LL);
        *a2 = 0LL;
        DxgMonitor::MonitorModes::~MonitorModes(v10);
        operator delete(v10);
        return a2;
      }
      v13 = (DxgMonitor::MonitorModes *)(v12 + 96);
      *(_OWORD *)v12 = *(_OWORD *)v15;
      *(_OWORD *)(v12 + 16) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)(v12 + 32) = *(_OWORD *)(v15 + 32);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(v15 + 48);
      *(_OWORD *)(v12 + 64) = *(_OWORD *)(v15 + 64);
      *(_OWORD *)(v12 + 80) = *(_OWORD *)(v15 + 80);
      *(_OWORD *)(v12 + 96) = *(_OWORD *)(v15 + 96);
      *(_QWORD *)(v12 + 112) = *(_QWORD *)(v15 + 112);
      v14 = (DxgMonitor::MonitorModes **)*((_QWORD *)v10 + 17);
      if ( *v14 != (DxgMonitor::MonitorModes *)((char *)v10 + 128) )
LABEL_23:
        __fastfail(3u);
      *(_QWORD *)v13 = (char *)v10 + 128;
      *(_QWORD *)(v12 + 104) = v14;
      *v14 = v13;
      *((_QWORD *)v10 + 17) = v13;
      ++*((_DWORD *)v10 + 30);
      if ( v15 == *(_QWORD *)(a1 + 144) )
        *((_QWORD *)v10 + 18) = v12;
    }
    v16 = *(_DWORD *)(a1 + 124);
    v17 = (_QWORD *)(a1 + 176);
    *((_DWORD *)v10 + 31) = v16;
    for ( j = (_QWORD *)*v17; j != v17; j = (_QWORD *)v22[6] )
    {
      v22 = j - 6;
      if ( !j )
        v22 = 0LL;
      if ( !v22 )
        break;
      v19 = (_OWORD *)operator new[](0x40uLL, 0x4D677844u, 256LL);
      if ( !v19 )
        goto LABEL_14;
      *v19 = *(_OWORD *)v22;
      v19[1] = *((_OWORD *)v22 + 1);
      v19[2] = *((_OWORD *)v22 + 2);
      v19[3] = *((_OWORD *)v22 + 3);
      v20 = (DxgMonitor::MonitorModes **)*((_QWORD *)v10 + 23);
      v21 = (DxgMonitor::MonitorModes *)(v19 + 3);
      if ( *v20 != (DxgMonitor::MonitorModes *)((char *)v10 + 176) )
        goto LABEL_23;
      *(_QWORD *)v21 = (char *)v10 + 176;
      *((_QWORD *)v21 + 1) = v20;
      *v20 = v21;
      *((_QWORD *)v10 + 23) = v21;
      ++*((_DWORD *)v10 + 42);
    }
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
