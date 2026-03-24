/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801AB0C0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800737D0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180155438 (-Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800368F8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18004584C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1801AACF0 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(__int64 this, int a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // r9d
  int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // ebp
  __int64 *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r9d
  int v24; // edi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v33; // [rsp+78h] [rbp+10h] BYREF

  v33 = a2;
  v5 = this;
  if ( (_BYTE)a3 )
  {
    if ( a4 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        (__int64 **)(this + 400),
        (__int64)v31,
        a3,
        &v33);
      return;
    }
    v6 = *(unsigned int *)(this + 164);
    v7 = 0LL;
    if ( !*(_DWORD *)(32 * (v6 + 6) + v5) )
      goto LABEL_48;
    while ( 1 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(32LL * (unsigned int)v6 + v5 + 168) + 8 * v7);
      v31[0] = v8;
      if ( !v8
        || v8[42] != a2
        || !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 56LL))(v8, 58LL)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 90LL)
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v31[0] + 56LL))(v31[0], 110LL) )
      {
        goto LABEL_18;
      }
      v10 = (_QWORD *)(v5 + 296);
      v11 = *(_DWORD *)(v5 + 320);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
        break;
      if ( v12 > *(_DWORD *)(v5 + 316) )
      {
        v14 = DynArrayImpl<1>::AddMultipleAndSet(v5 + 296, 8u, (__int64)v10, v31);
        v13 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
        goto LABEL_16;
      }
      *(_QWORD *)(*v10 + 8LL * *(unsigned int *)(v5 + 320)) = v31[0];
      *(_DWORD *)(v5 + 320) = v12;
LABEL_17:
      *(_QWORD *)(*(_QWORD *)(32LL * *(unsigned int *)(v5 + 164) + v5 + 168) + 8 * v7) = 0LL;
LABEL_18:
      v7 = (unsigned int)(v7 + 1);
      LODWORD(v6) = *(_DWORD *)(v5 + 164);
      if ( (unsigned int)v7 >= *(_DWORD *)(32 * ((unsigned int)v6 + 6LL) + v5) )
        goto LABEL_48;
    }
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_16:
    if ( v13 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
    goto LABEL_17;
  }
  v16 = *(_DWORD *)(this + 320);
  if ( !v16 )
    goto LABEL_48;
  v17 = 0;
  v18 = (__int64 *)(this + 296);
  v19 = 0LL;
  do
  {
    v20 = *(_QWORD *)(v19 + *v18);
    v31[0] = v20;
    if ( v20 && *(_DWORD *)(v20 + 168) == a2 )
    {
      v21 = v5 + 32LL * *(unsigned int *)(v5 + 164);
      v22 = *(_DWORD *)(v21 + 192);
      v23 = v22 + 1;
      if ( v22 + 1 >= v22 )
      {
        if ( v23 <= *(_DWORD *)(v21 + 188) )
        {
          this = *(unsigned int *)(v21 + 192);
          *(_QWORD *)(*(_QWORD *)(v21 + 168) + 8 * this) = v20;
          *(_DWORD *)(v21 + 192) = v23;
LABEL_32:
          *(_QWORD *)(v19 + *v18) = 0LL;
          goto LABEL_33;
        }
        v25 = DynArrayImpl<1>::AddMultipleAndSet(v21 + 168, 8u, v21, v31);
        v24 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v25, 0xC0u, 0LL);
      }
      else
      {
        v24 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v24 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v24, retaddr);
      goto LABEL_32;
    }
LABEL_33:
    ++v17;
    v19 += 8LL;
  }
  while ( v17 < v16 );
  v26 = 0LL;
  v27 = v16 - 1;
  if ( v16 != 1 )
  {
    do
    {
      v28 = *v18;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v28 + 8 * v26);
        if ( !v29 || (unsigned int)v26 >= (unsigned int)v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
      }
      while ( 1 )
      {
        v30 = *(_QWORD *)(v28 + 8 * v27);
        if ( v30 || (unsigned int)v26 >= (unsigned int)v27 )
          break;
        v27 = (unsigned int)(v27 - 1);
      }
      if ( !v29 && v30 )
      {
        *(_QWORD *)(v28 + 8 * v26) = v30;
        *(_QWORD *)(*v18 + 8 * v27) = 0LL;
      }
    }
    while ( (unsigned int)v26 < (unsigned int)v27 );
  }
  *(_DWORD *)(v5 + 320) = v27;
  DynArrayImpl<1>::ShrinkToSize((__int64)v18, 8u);
LABEL_48:
  *(_BYTE *)(v5 + 416) |= 8u;
}
