/*
 * XREFs of ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0181BB8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018156C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FB38C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001A070 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(DXGMONITOR *this)
{
  int v2; // ebx
  _QWORD *ChildDescriptor; // rax
  __int64 v4; // rdi
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // xmm1_8
  DXGMONITOR *v14; // rax
  DXGMONITOR **v15; // r8
  _QWORD *i; // rcx
  _QWORD *v17; // rax
  __int128 Source1; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  v2 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL)
                                + 64LL),
                      *((_DWORD *)this + 11));
  v21 = 0LL;
  Source1 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( ChildDescriptor )
  {
    v4 = ChildDescriptor[13];
    if ( v4 && RtlCompareMemory(&Source1, (const void *)(v4 + 8), 0x38uLL) != 56 )
    {
      v2 = 0;
      Source1 = *(_OWORD *)(v4 + 8);
      v19 = *(_OWORD *)(v4 + 24);
      v20 = *(_OWORD *)(v4 + 40);
      v21 = *(_QWORD *)(v4 + 56);
    }
    if ( v2 >= 0 )
    {
      v6 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v10 = v6;
      if ( v6 )
      {
        v12 = (_QWORD *)((char *)this + 216);
        *(_DWORD *)v6 = (*((_DWORD *)this + 53))++;
        *(_OWORD *)(v6 + 8) = Source1;
        *(_OWORD *)(v6 + 24) = v19;
        *(_OWORD *)(v6 + 40) = v20;
        v13 = v21;
        *((_DWORD *)v6 + 17) = 8;
        *((_DWORD *)v6 + 18) = 8;
        *(_QWORD *)(v6 + 76) = 8LL;
        v14 = (DXGMONITOR *)(v6 + 96);
        *((_QWORD *)v10 + 7) = v13;
        *((_DWORD *)v10 + 16) = 2;
        *((_DWORD *)v10 + 21) = 5;
        *((_DWORD *)v10 + 22) = 1;
        v15 = (DXGMONITOR **)*((_QWORD *)this + 28);
        if ( *v15 != (DXGMONITOR *)((char *)this + 216) )
          __fastfail(3u);
        *(_QWORD *)v14 = v12;
        *((_QWORD *)v10 + 13) = v15;
        *v15 = v14;
        *((_QWORD *)this + 28) = v14;
        ++*((_DWORD *)this + 52);
        *((_QWORD *)this + 29) = v10;
        for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)v17[12] )
        {
          v17 = i - 12;
          if ( !i )
            v17 = 0LL;
          if ( !v17 )
            break;
          if ( *((_DWORD *)v17 + 21) == 2 && *((_DWORD *)v17 + 22) == 1 )
          {
            *((_DWORD *)v17 + 22) = 2;
            return (unsigned int)v2;
          }
        }
      }
      else
      {
        v11 = WdLogNewEntry5_WdLowResource(0LL, v7, v8, v9);
        WdLogEvent5_WdLowResource(v11);
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
