/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1C03C8688
 * Callers:
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C03C7F38 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001E4F4 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C001F54C (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateDefaultMonitorProfileForWDDMv1_0(DxgMonitor::MonitorModes *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r15
  const wchar_t *v5; // r13
  unsigned __int16 v6; // dx
  ULONG v7; // r8d
  unsigned __int16 v8; // cx
  int VideoModeDescriptor; // eax
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // edx
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int128 v17; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v18; // [rsp+40h] [rbp-78h] BYREF

  WdLogSingleEntry1(7LL, this);
  if ( *((_DWORD *)this + 30) )
    WdLogSingleEntry0(1LL);
  v2 = (_QWORD *)((char *)this + 128);
  if ( (_QWORD *)*v2 != v2 )
    WdLogSingleEntry0(1LL);
  v3 = 0LL;
  *(_QWORD *)&v17 = 0x800000008LL;
  *((_QWORD *)&v17 + 1) = 8LL;
  while ( 2 )
  {
    v4 = 0LL;
    v5 = L"<FHKU";
    do
    {
      v6 = word_1C0115B70[2 * v3 + 1];
      v7 = *v5;
      v8 = word_1C0115B70[2 * v3];
      memset(&v18, 0, sizeof(v18));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(v8, v6, v7, 1u, 0, &v18);
      v10 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        WdLogSingleEntry4(2LL, word_1C0115B70[2 * v3], word_1C0115B70[2 * v3 + 1], aFhku[v4], VideoModeDescriptor);
        goto LABEL_20;
      }
      v11 = operator new[](0x78uLL, 0x4D677844u, 256LL);
      v12 = v11;
      if ( !v11 )
      {
        WdLogSingleEntry0(2LL);
        v10 = -1073741801;
        goto LABEL_20;
      }
      v13 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v13 + 1;
      *(_DWORD *)v11 = v13;
      v10 = ConvertVideoSignalInfo(&v18, (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 8));
      if ( v10 < 0 )
        WdLogSingleEntry0(1LL);
      *(_DWORD *)(v12 + 64) = 2;
      *(_DWORD *)(v12 + 84) = 1;
      *(_DWORD *)(v12 + 88) = 2;
      *(_OWORD *)(v12 + 68) = v17;
      *(_DWORD *)(v12 + 112) = 5;
      v14 = (_QWORD *)(v12 + 96);
      v15 = (_QWORD *)*((_QWORD *)this + 17);
      if ( (_QWORD *)*v15 != v2 )
        __fastfail(3u);
      *v14 = v2;
      v14[1] = v15;
      ++v5;
      *v15 = v14;
      *((_QWORD *)this + 17) = v14;
      ++*((_DWORD *)this + 30);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < 5 );
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 < 0x10 )
      continue;
    break;
  }
  if ( *((DxgMonitor::MonitorModes **)this + 22) != (DxgMonitor::MonitorModes *)((char *)this + 176) )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)this + 28) = 3;
LABEL_20:
  *((_BYTE *)this + 116) = v10 >= 0;
  return (unsigned int)v10;
}
