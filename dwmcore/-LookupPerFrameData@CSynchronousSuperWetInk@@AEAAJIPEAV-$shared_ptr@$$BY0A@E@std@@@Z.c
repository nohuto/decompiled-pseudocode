/*
 * XREFs of ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x180250494
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x18024FFB0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0px_EventWriteTransfer @ 0x18022B6EC (McTemplateU0px_EventWriteTransfer.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x18024F910 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ??4?$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z @ 0x18024FE0C (--4-$shared_ptr@$$BY0A@E@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x18024FECC (-CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ.c)
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x180250A64 (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::LookupPerFrameData(
        CSynchronousSuperWetInk *this,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbp
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 i; // rdx
  __int64 j; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _BYTE v22[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-38h]
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0px_EventWriteTransfer((__int64)this, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA, this, a2);
  v6 = (std::_Ref_count_base *)a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (_QWORD *)((char *)this + 248);
  v8 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v8 && *v8 == v4 )
  {
    std::shared_ptr<unsigned char [0]>::operator=(a3, (_QWORD *)this + 31);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0px_EventWriteTransfer(v9, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_REUSE, this, v4);
    goto LABEL_53;
  }
  v10 = (__int64 *)((char *)this + 224);
  v24 = v4;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
    (__int64 *)this + 28,
    (__int64)v22,
    &v24);
  v12 = (_QWORD *)v23;
  if ( *(_BYTE *)(v23 + 25) || v4 < *(_QWORD *)(v23 + 32) )
  {
    v12 = (_QWORD *)*v10;
  }
  else if ( v23 != *v10 )
  {
    goto LABEL_18;
  }
  CSynchronousSuperWetInk::PullNewPerFrameData(this, v4, (bool *)&v24);
  if ( (_BYTE)v24 )
  {
    v24 = v4;
    std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
      (__int64 *)this + 28,
      (__int64)v22,
      &v24);
    v12 = (_QWORD *)v23;
    if ( *(_BYTE *)(v23 + 25) || v4 < *(_QWORD *)(v23 + 32) )
      v12 = (_QWORD *)*v10;
  }
LABEL_18:
  if ( *((_QWORD *)this + 29) )
  {
    v14 = (__int64 *)*v10;
    if ( v12 != (_QWORD *)*v10 )
    {
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, v12 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v15,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_FOUND_ON_NEW,
          this,
          v4);
      goto LABEL_52;
    }
    v11 = v14[1];
    v16 = *v10;
    while ( !*(_BYTE *)(v11 + 25) )
    {
      if ( v4 >= *(_QWORD *)(v11 + 32) )
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
      else
      {
        v16 = v11;
        v11 = *(_QWORD *)v11;
      }
    }
    v17 = *v14;
    if ( v16 != v17 )
    {
      if ( *(_BYTE *)(v16 + 25) )
      {
        i = *(_QWORD *)(v16 + 16);
      }
      else
      {
        i = *(_QWORD *)v16;
        if ( *(_BYTE *)(*(_QWORD *)v16 + 25LL) )
        {
          for ( i = *(_QWORD *)(v16 + 8); !*(_BYTE *)(i + 25) && v16 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v16 = i;
          if ( *(_BYTE *)(v16 + 25) )
            i = v16;
        }
        else
        {
          for ( j = *(_QWORD *)(i + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
            i = j;
        }
      }
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, (_QWORD *)(i + 40));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v20,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NON_EXACT,
          this,
          v4);
      goto LABEL_52;
    }
    if ( !*v7 )
    {
      std::shared_ptr<unsigned char [0]>::operator=((_QWORD *)this + 31, (_QWORD *)(v17 + 40));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0px_EventWriteTransfer(
          v21,
          &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_USE_FIRST,
          this,
          v4);
      goto LABEL_52;
    }
LABEL_50:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0px_EventWriteTransfer(
        v11,
        &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_FILLED_NOT_FOUND_REUSE,
        this,
        v4);
LABEL_52:
    std::shared_ptr<unsigned char [0]>::operator=(a3, (_QWORD *)this + 31);
LABEL_53:
    CSynchronousSuperWetInk::CleanupOldPerFrameData(this);
    return 0LL;
  }
  if ( *v7 )
    goto LABEL_50;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0q_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      7LL);
  return 2147942487LL;
}
