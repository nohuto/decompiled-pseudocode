/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AB9B0
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, _QWORD *a2)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // r14
  char v10; // al
  _QWORD *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v5 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v5 = *(_QWORD *)(a1 + 40);
    v6 = 96 * v5 + 8;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      v10 = *(_BYTE *)(a1 + 40);
      v11 = (_QWORD *)(a1 + 24);
      *(_BYTE *)a2[4] = v10;
      v12 = a2[4] + 8LL;
      if ( (_QWORD *)*v11 != v11 )
      {
        v13 = *v11 - 8LL;
        if ( *v11 != 8LL )
        {
          do
          {
            *(_DWORD *)v12 = *(_DWORD *)(v13 + 48);
            *(_OWORD *)(v12 + 4) = *(_OWORD *)(v13 + 52);
            *(_OWORD *)(v12 + 20) = *(_OWORD *)(v13 + 68);
            *(_QWORD *)(v12 + 36) = *(_QWORD *)(v13 + 84);
            *(_DWORD *)(v12 + 44) = *(_DWORD *)(v13 + 92);
            *(_DWORD *)(v12 + 48) = *(_DWORD *)(v13 + 96);
            *(_DWORD *)(v12 + 52) = *(_DWORD *)(v13 + 100);
            *(_DWORD *)(v12 + 56) = *(_DWORD *)(v13 + 104);
            *(_QWORD *)(v12 + 64) = *(_QWORD *)(v13 + 112);
            *(_DWORD *)(v12 + 92) = *(_DWORD *)(v13 + 140);
            *(_OWORD *)(v12 + 72) = *(_OWORD *)(v13 + 120);
            *(_DWORD *)(v12 + 88) = *(_DWORD *)(v13 + 136);
            v12 += 96LL;
            v14 = *(_QWORD **)(v13 + 8);
            v13 = (__int64)(v14 - 1);
            if ( v14 == v11 )
              v13 = 0LL;
            ++v9;
          }
          while ( v13 );
        }
      }
      if ( v9 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      if ( v9 )
      {
        if ( v6 != v12 - a2[4] )
          WdLogSingleEntry0(1LL);
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6, a1, v7);
      return v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
