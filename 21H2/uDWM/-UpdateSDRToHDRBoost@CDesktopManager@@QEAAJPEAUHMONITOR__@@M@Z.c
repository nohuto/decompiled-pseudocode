/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x180087824
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180037F80 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x1800395C4 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  __int64 v5; // rcx
  int AllDisplaysNoRef; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]
  unsigned int v18; // [rsp+48h] [rbp-20h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v5 = *((_QWORD *)this + 21);
  v15 = 0LL;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v5, (__int64)&v15);
  v7 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    v8 = 0LL;
    if ( v18 )
    {
      v9 = v15;
      while ( 1 )
      {
        v10 = (unsigned int)v8;
        if ( *(HMONITOR *)(*(_QWORD *)(v15 + 8 * v8) + 16LL) == a2 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v18 )
          goto LABEL_14;
      }
      if ( (unsigned int)IsHDRDisplay(a2) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v10) + 8LL);
        if ( v11 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
          v7 = v12;
          if ( v12 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
            v7 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x444u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x43Au);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x42Fu);
  }
LABEL_14:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v15);
  return v7;
}
