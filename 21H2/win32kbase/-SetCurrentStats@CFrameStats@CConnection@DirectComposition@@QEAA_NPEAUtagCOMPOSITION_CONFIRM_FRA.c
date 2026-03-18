/*
 * XREFs of ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081A9C
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081570 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     ?TargetStatsCompleted@CFrameStats@CConnection@DirectComposition@@QEBA_NXZ @ 0x1C0081D84 (-TargetStatsCompleted@CFrameStats@CConnection@DirectComposition@@QEBA_NXZ.c)
 *     ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x1C00946B4 (-DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z.c)
 *     ?FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ @ 0x1C0098328 (-FreeTargetPool@CFrameStats@CConnection@DirectComposition@@IEAAXXZ.c)
 *     ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS@@@Z @ 0x1C02134D0 (-RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS@@@Z.c)
 */

bool __fastcall DirectComposition::CConnection::CFrameStats::SetCurrentStats(
        DirectComposition::CConnection::CFrameStats *this,
        struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  unsigned int v4; // eax
  unsigned int i; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  DirectComposition::CConnection *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // eax
  bool result; // al

  DirectComposition::CConnection::CFrameStats::FreeTargetPool(this);
  *((_QWORD *)this + 1) = *(_QWORD *)a2;
  *((_OWORD *)this + 1) = *(_OWORD *)((char *)a2 + 8);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 3);
  v4 = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 1) = v4;
  if ( v4 > 4 )
  {
    v9 = (DirectComposition::CConnection *)*((_QWORD *)a2 + 5);
  }
  else
  {
    for ( i = 0; i < v4; v4 = *((_DWORD *)this + 1) )
    {
      v6 = i++;
      v7 = 104 * v6;
      v8 = *((_QWORD *)a2 + 5);
      *(_OWORD *)((char *)this + v7 + 48) = *(_OWORD *)(v8 + v7);
      *(_OWORD *)((char *)this + v7 + 64) = *(_OWORD *)(v8 + v7 + 16);
      *(_OWORD *)((char *)this + v7 + 80) = *(_OWORD *)(v8 + v7 + 32);
      *(_OWORD *)((char *)this + v7 + 96) = *(_OWORD *)(v8 + v7 + 48);
      *(_OWORD *)((char *)this + v7 + 112) = *(_OWORD *)(v8 + v7 + 64);
      *(_OWORD *)((char *)this + v7 + 128) = *(_OWORD *)(v8 + v7 + 80);
      *(_QWORD *)((char *)this + v7 + 144) = *(_QWORD *)(v8 + v7 + 96);
    }
    v9 = (DirectComposition::CConnection::CFrameStats *)((char *)this + 48);
  }
  v10 = 0;
  *((_QWORD *)this + 5) = v9;
  if ( !v4 )
    goto LABEL_16;
  do
  {
    v9 = (DirectComposition::CConnection *)(104LL * v10);
    v11 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)((char *)v9 + v11 + 40)
      && (v12 = *(_DWORD *)((char *)v9 + v11 + 56)) != 0
      && v12 <= *(_DWORD *)((char *)v9 + v11 + 80) )
    {
      if ( !v10 )
        DirectComposition::CConnection::RetireFrame(
          v9,
          *((_QWORD *)this + 1),
          (const struct tagCOMPOSITION_STATS *)(v11 + 80));
    }
    else
    {
      *(_DWORD *)((char *)v9 + v11 + 80) = 0;
      *(_DWORD *)((char *)v9 + *((_QWORD *)this + 5) + 84) = 0;
      *(_DWORD *)((char *)v9 + *((_QWORD *)this + 5) + 88) = 0;
      *(_QWORD *)((char *)v9 + *((_QWORD *)this + 5) + 96) = 0LL;
    }
    v13 = *((_DWORD *)this + 1);
    ++v10;
  }
  while ( v10 < v13 );
  if ( !v13 || !*(_QWORD *)(*((_QWORD *)this + 5) + 40LL) )
LABEL_16:
    DirectComposition::CConnection::DiscardFrame(v9, *((_QWORD *)this + 1));
  result = DirectComposition::CConnection::CFrameStats::TargetStatsCompleted(this);
  *(_BYTE *)this = result;
  return result;
}
