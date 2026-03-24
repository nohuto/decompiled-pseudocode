/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E52AC
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E3A58 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0017B38 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E5268 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C00E591C (-HasOpenGlContext@DXGDEVICE@@QEAAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C015D0D4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C01645B8 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0214734 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        PERESOURCE **this,
        struct _ERESOURCE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  DXGADAPTER *v20; // rcx
  bool IsAdapterSessionized; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _BOOL8 v25; // r15
  ERESOURCE_THREAD OwnerThread; // rax
  __int64 v27; // rbx
  unsigned int *v28; // r12
  signed __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  PERESOURCE *v37; // r9
  __int64 v38; // r8
  struct _ERESOURCE *v39; // r10
  struct DXGDEVICE *v40; // rax
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v41; // ebx
  signed __int64 v42; // rbp
  __int64 v43; // r12
  __int64 v44; // r9
  PERESOURCE *v45; // rcx
  __int64 v46; // rdx
  struct DXGDEVICE *v47; // r10
  int v48; // eax
  PERESOURCE *v49; // rcx
  _QWORD *v50; // rax
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r15
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v85[4]; // [rsp+30h] [rbp-38h] BYREF
  signed __int64 i; // [rsp+70h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v54 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v54 + 24) = 1930LL;
    WdLogEvent5_WdAssertion(v54);
  }
  v12 = a5;
  if ( *((_DWORD *)this + 20) < a5 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v27) = -1073741811;
    v74[4] = v12;
    v74[5] = -1073741811LL;
LABEL_100:
    v74[3] = a2;
    goto LABEL_101;
  }
  if ( !a3 || !a4 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v27) = -1073741811;
    v74[4] = a3;
    v74[5] = a4;
    v74[6] = a3;
    v74[7] = -1073741811LL;
    goto LABEL_100;
  }
  v85[0] = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v55 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v55 + 24) = 1964LL;
    WdLogEvent5_WdAssertion(v55);
  }
  v18 = (*(int (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(v85, 0LL, 0LL);
  if ( !v85[0] )
  {
    v52 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    *(_QWORD *)(v52 + 24) = a2;
    *(_QWORD *)(v52 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v52);
    return 3221225506LL;
  }
  v20 = (DXGADAPTER *)this[2];
  LODWORD(i) = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v20, v16, (unsigned int *)&i, 0LL);
  v25 = IsAdapterSessionized;
  if ( IsAdapterSessionized )
  {
    if ( (_DWORD)v18 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      if ( (_DWORD)i == ProcessSessionId )
        goto LABEL_11;
      v60 = WdLogNewEntry5_WdError(v23, v22);
      v61 = (unsigned int)i;
      v62 = v60;
      *(_QWORD *)(v60 + 24) = a2;
      *(_QWORD *)(v60 + 32) = v61;
      v63 = PsGetCurrentProcess();
      *(_QWORD *)(v62 + 40) = (unsigned int)PsGetProcessSessionId(v63);
      *(_QWORD *)(v62 + 48) = -1073741790LL;
      WdLogEvent5_WdError(v62);
      LOBYTE(v64) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v64) )
        return 3221225506LL;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
    }
    else
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v56[5] = v25;
      v56[6] = (unsigned int)i;
      v56[3] = a2;
      v56[4] = 0LL;
      v56[7] = -1073741790LL;
      WdLogEvent5_WdError(v56);
      LOBYTE(v57) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v57) )
        return 3221225506LL;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
    }
LABEL_68:
    __debugbreak();
    return 3221225506LL;
  }
  if ( (_DWORD)v18 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v65[6] = (unsigned int)i;
    v65[3] = a2;
    v65[4] = v18;
    v65[5] = v25;
    v65[7] = -1073741790LL;
    WdLogEvent5_WdWarning(v65);
    LOBYTE(v66) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v66) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
      goto LABEL_68;
    }
    return 3221225506LL;
  }
LABEL_11:
  OwnerThread = a2->OwnerTable[1].OwnerThread;
  if ( !OwnerThread
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(OwnerThread + 2704) + 16LL)) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v67 + 24) = 2055LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v27 = 0LL;
  if ( !(_DWORD)v12 )
  {
LABEL_34:
    if ( DXGDEVICE::HasOpenGlContext((DXGDEVICE *)a2) )
    {
      v79 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v79 + 24) = a2;
      WdLogEvent5_WdEvent(v79);
    }
    if ( !(_DWORD)v12 )
      return 0LL;
    v41 = a6.0;
    v42 = (char *)a3 - a4;
    v43 = v12;
    while ( 1 )
    {
      v44 = *(unsigned int *)a4;
      v45 = this[14];
      v46 = 3968 * v44;
      v47 = (struct DXGDEVICE *)v45[496 * v44 + 86];
      if ( !v47 )
        break;
      v48 = *(_DWORD *)&a4[v42];
      if ( v48 != 4 )
      {
        v53 = (int)v45[(unsigned __int64)v46 / 8 + 87];
        if ( v47 == (struct DXGDEVICE *)a2 )
        {
          if ( v53 != v48 )
          {
            v80 = WdLogNewEntry5_WdAssertion(v45, v46);
            *(_QWORD *)(v80 + 24) = 2311LL;
            WdLogEvent5_WdAssertion(v80);
          }
          goto LABEL_40;
        }
        if ( v53 != 1 || v48 == 1 )
        {
          v81 = WdLogNewEntry5_WdAssertion(v45, v46);
          *(_QWORD *)(v81 + 24) = 2321LL;
          WdLogEvent5_WdAssertion(v81);
          v45 = this[14];
          LODWORD(v44) = *(_DWORD *)a4;
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (ADAPTER_DISPLAY *)this,
          (struct DXGDEVICE *)v45[496 * (unsigned int)v44 + 86],
          v44);
        goto LABEL_51;
      }
LABEL_40:
      if ( *(_DWORD *)&a4[v42] == 4 )
      {
        this[14][496 * *(unsigned int *)a4 + 88] = a2;
      }
      else
      {
        v49 = this[48];
        if ( v49 )
        {
          v83 = (__int64)v49[1] + 2904 * *(unsigned int *)a4;
          *(_QWORD *)(v83 + 576) = a2;
          *(_BYTE *)(v83 + 560) = 1;
          if ( (int)BLTQUEUE::IssueCommand((BLTQUEUE *)v83) >= 0 )
          {
            *(_QWORD *)(v83 + 352) = a2;
            *(_OWORD *)(v83 + 312) = 0LL;
            *(_OWORD *)(v83 + 328) = 0LL;
            *(_DWORD *)(v83 + 936) &= ~4u;
          }
        }
        this[14][496 * *(unsigned int *)a4 + 86] = a2;
        LODWORD(this[14][496 * *(unsigned int *)a4 + 87]) = *(_DWORD *)&a4[v42];
        HIDWORD(this[14][496 * *(unsigned int *)a4 + 87]) = v41;
      }
      this[14][496 * *(unsigned int *)a4 + 89] = (PERESOURCE)a2->ExclusiveWaiters;
      ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, *(_DWORD *)a4);
      v50 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v50[3] = a2;
      v50[4] = *(unsigned int *)a4;
      v50[5] = *(int *)&a4[v42];
      v50[6] = v12;
      WdLogEvent5_WdEvent(v50);
      if ( *(_DWORD *)&a4[v42] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface((DXGADAPTER **)this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v43 )
        return 0LL;
    }
    if ( LODWORD(v45[(unsigned __int64)v46 / 8 + 87]) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v45, v46);
      *(_QWORD *)(v82 + 24) = 2331LL;
      WdLogEvent5_WdAssertion(v82);
    }
LABEL_51:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], *(unsigned int *)a4, 0LL, 0LL, 0, 1);
    goto LABEL_40;
  }
  v28 = (unsigned int *)a4;
  v29 = (char *)a3 - a4;
  for ( i = (char *)a3 - a4; ; v29 = i )
  {
    v30 = *(unsigned int *)((char *)v28 + v29);
    if ( v30 <= 0 )
      goto LABEL_74;
    if ( v30 > 4 )
      goto LABEL_74;
    v23 = *v28;
    if ( *((_DWORD *)this + 20) <= (unsigned int)v23 )
      goto LABEL_74;
    if ( a2[17].Reserved2 != this[2] )
    {
      v68 = WdLogNewEntry5_WdAssertion(v23, v22);
      *(_QWORD *)(v68 + 24) = 2095LL;
      WdLogEvent5_WdAssertion(v68);
      LODWORD(v23) = *v28;
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][496 * (unsigned int)v23]) )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v77 = *(unsigned int *)&a4[4 * v27];
      LODWORD(v27) = -1071774910;
      v75[3] = v77;
      v75[4] = -1071774910LL;
      goto LABEL_89;
    }
    v34 = 0LL;
    if ( !(_DWORD)v27 )
      goto LABEL_22;
    do
    {
      if ( *v28 == *(_DWORD *)&a4[4 * v34] )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
        v74[4] = (unsigned int)v27;
        v74[5] = (unsigned int)v34;
        v74[3] = a2;
        v69 = *(unsigned int *)&a4[4 * v34];
        goto LABEL_76;
      }
      v34 = (unsigned int)(v34 + 1);
    }
    while ( (unsigned int)v34 < (unsigned int)v27 );
    v12 = a5;
LABEL_22:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)this, *v28) )
    {
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v22, v36);
      v75[3] = a2;
      v75[4] = (unsigned int)v27;
      v76 = *(unsigned int *)&a4[4 * v27];
      v27 = -1071774972LL;
      goto LABEL_87;
    }
    v23 = *(unsigned int *)((char *)v28 + i);
    if ( (_DWORD)v23 == 1 && !LODWORD(a2[4].OwnerTable) || (_DWORD)v23 == 3 && LODWORD(a2[4].OwnerTable) )
    {
LABEL_74:
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v74[3] = a2;
      v74[4] = (unsigned int)v27;
      v74[5] = *(unsigned int *)&a4[4 * v27];
      goto LABEL_75;
    }
    v37 = this[14];
    v38 = 496LL * *v28;
    v39 = v37[v38 + 86];
    if ( !v39 )
    {
      if ( LODWORD(v37[v38 + 87]) )
      {
        v73 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v73 + 24) = 2272LL;
        WdLogEvent5_WdAssertion(v73);
      }
      goto LABEL_33;
    }
    v22 = LODWORD(v37[v38 + 87]);
    if ( v39 == a2 )
    {
      if ( (_DWORD)v22 != (_DWORD)v23 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v74[3] = a2;
        v74[4] = *(unsigned int *)&a4[4 * v27];
        v74[5] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
        goto LABEL_75;
      }
      goto LABEL_33;
    }
    if ( (_DWORD)v22 != 1 )
      goto LABEL_90;
    if ( (_DWORD)v23 == 1 && *((_BYTE *)a2->ExclusiveWaiters + 346) && *((_BYTE *)v39->ExclusiveWaiters + 346) )
      break;
    if ( (_DWORD)v23 == 1 )
    {
LABEL_90:
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
      v75[3] = a2;
      v75[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
      v75[5] = *(unsigned int *)&a4[4 * v27];
      v78 = a3[v27];
      LODWORD(v27) = -1071774910;
      v75[7] = -1071774910LL;
      v75[6] = v78;
      goto LABEL_89;
    }
    v40 = (struct DXGDEVICE *)v37[v38 + 88];
    if ( v40 != (struct DXGDEVICE *)a2 )
    {
      if ( !v40 )
        goto LABEL_33;
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
      v75[3] = a2;
      v75[4] = *(unsigned int *)&a4[4 * v27];
      v76 = a3[v27];
      v27 = -1071774910LL;
LABEL_87:
      v75[5] = v76;
      v75[6] = v27;
LABEL_89:
      WdLogEvent5_WdWarning(v75);
      return (unsigned int)v27;
    }
    if ( (_DWORD)v23 != 4 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v74[3] = a2;
      v74[4] = *(unsigned int *)&a4[4 * v27];
      v74[5] = 4LL;
LABEL_75:
      v69 = a3[v27];
LABEL_76:
      LODWORD(v27) = -1073741811;
      v74[6] = v69;
      v74[7] = -1073741811LL;
LABEL_101:
      WdLogEvent5_WdError(v74);
      return (unsigned int)v27;
    }
LABEL_33:
    v27 = (unsigned int)(v27 + 1);
    ++v28;
    if ( (unsigned int)v27 >= (unsigned int)v12 )
      goto LABEL_34;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v38 * 8);
  v70[3] = a2;
  v70[4] = SLODWORD(this[14][496 * *(unsigned int *)&a4[4 * v27] + 87]);
  v70[5] = *(unsigned int *)&a4[4 * v27];
  v71 = a3[v27];
  LODWORD(v27) = -1071774910;
  v70[6] = v71;
  v70[7] = -1071774910LL;
  WdLogEvent5_WdWarning(v70);
  LOBYTE(v72) = 1;
  if ( (unsigned __int8)WdIsDebuggerPresent(v72) )
  {
    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
    __debugbreak();
  }
  return (unsigned int)v27;
}
