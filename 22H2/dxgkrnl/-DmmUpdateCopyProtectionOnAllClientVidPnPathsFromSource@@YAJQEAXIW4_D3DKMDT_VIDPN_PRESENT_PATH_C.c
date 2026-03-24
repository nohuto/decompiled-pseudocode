/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00EC44C
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EC3E0 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E0C0 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E110 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143F60 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02E9A60 (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  DMMVIDPNTOPOLOGY *v16; // rbp
  unsigned __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int updated; // eax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v46; // [rsp+28h] [rbp-40h]
  __int64 v47; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v48; // [rsp+70h] [rbp+8h] BYREF
  int v49; // [rsp+88h] [rbp+20h]

  v49 = a4;
  v4 = 0;
  v5 = a3;
  v6 = (unsigned int)a2;
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v28 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v28);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v29);
  }
  v10 = *((_QWORD *)a1 + 337);
  if ( !v10 )
  {
    v28 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v28 + 24) = a1;
    goto LABEL_22;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, v11);
    v12 = *(_QWORD *)(v11 + 88);
    v45 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v45, v13);
    if ( v45 )
    {
      v16 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      v17 = 0LL;
      v46 = (DMMVIDPNTOPOLOGY *)(v45 + 96);
      while ( 1 )
      {
        v48 = -1;
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v16, v6, v17, &v48);
        v21 = v18;
        if ( v18 < 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
          v44[3] = v17;
          v44[4] = v6;
          v44[5] = v16;
          v44[6] = v21;
          goto LABEL_42;
        }
        if ( v48 == -1 )
          goto LABEL_19;
        Path = DMMVIDPNTOPOLOGY::FindPath(v16, v6, v48);
        if ( !Path )
        {
          v32 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v32);
        }
        v25 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v25 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v23, v22);
          WdLogEvent5_WdAssertion(v33);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v25 + 104) && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, 2LL) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, (unsigned int)v5) )
        {
          v43 = WdLogNewEntry5_WdWarning(v35, v34, v36);
          WdLogEvent5_WdWarning(v43);
          goto LABEL_40;
        }
        v37 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (unsigned int)v5);
        v21 = v37;
        if ( v37 == -1071774970 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v42[3] = v5;
          v42[4] = v6;
          v42[5] = v48;
          v42[6] = a1;
          WdLogEvent5_WdDmmEvent(v42);
LABEL_40:
          LODWORD(v21) = -1071774970;
          goto LABEL_42;
        }
        if ( v37 < 0 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
          v41[3] = v5;
          v41[4] = v6;
          v41[5] = v48;
          v41[6] = v21;
          WdLogEvent5_WdError(v41);
          goto LABEL_42;
        }
        *((_DWORD *)Path + 44) = v49;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v21) = updated;
        if ( updated < 0 )
          goto LABEL_42;
LABEL_18:
        v16 = v46;
        ++v17;
      }
    }
    v31 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v31 + 24) = a1;
    WdLogEvent5_WdError(v31);
    LODWORD(v21) = -1071774884;
LABEL_42:
    v4 = v21;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v45, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40), v26);
    return v4;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v30 + 24) = a1;
    WdLogEvent5_WdError(v30);
    return 3223192373LL;
  }
}
