/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEC7C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C03A6C1C (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C0068A3C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, _QWORD *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int8 v9; // si
  DMMVIDEOPRESENTTARGETSET *v10; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v5 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v5 = *((_QWORD *)this + 5);
    v6 = 28 * v5;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 28 * v5 + 4);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 40);
      v10 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
      if ( v10 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (DMMVIDEOPRESENTTARGETSET *)((char *)v10 - 8); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v12 = a2[4];
          v13 = 28LL * v9;
          *(_DWORD *)(v13 + v12 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v13 + v12 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v13 + v12 + 12) = *((_DWORD *)i + 25);
          *(_DWORD *)(v13 + v12 + 16) = *((_DWORD *)i + 26);
          *(_BYTE *)(v13 + v12 + 20) = *((_BYTE *)i + 108);
          *(_DWORD *)(v13 + v12 + 24) = *((_DWORD *)i + 30);
          *(_DWORD *)(v13 + v12 + 28) = *((_DWORD *)i + 21);
          ++v9;
        }
      }
      if ( v9 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6 + 4, this, v7);
      return v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
