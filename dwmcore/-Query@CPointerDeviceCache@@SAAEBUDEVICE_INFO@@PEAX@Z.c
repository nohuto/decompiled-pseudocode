/*
 * XREFs of ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801A3BE4
 * Callers:
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801A3D00 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180281D94 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180281E74 (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180281FF4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$_Find_lower_bound@PEAX@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@AEBQEAX@Z @ 0x18012980E (--$_Find_lower_bound@PEAX@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocat.c)
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x1801A3AC0 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Query(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r10
  __int64 v3; // rax
  __int64 *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v8; // [rsp+20h] [rbp-49h] BYREF
  __int64 v9; // [rsp+28h] [rbp-41h]
  _BYTE v10[16]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h]
  __int128 v12; // [rsp+48h] [rbp-21h]
  __int128 v13; // [rsp+58h] [rbp-11h]
  __int128 v14; // [rsp+68h] [rbp-1h]
  __int128 v15; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v16; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v17; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  v8 = a1;
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Find_lower_bound<void *>(
    a1,
    (__int64)v10,
    (unsigned __int64 *)&v8);
  v3 = v11;
  if ( *(_BYTE *)(v11 + 25) || v2 < *(_QWORD *)(v11 + 32) )
    v3 = CPointerDeviceCache::s_deviceCache;
  if ( v3 == (_QWORD)CPointerDeviceCache::s_deviceCache )
  {
    LOBYTE(v18) = 1;
    *((_QWORD *)&v17 + 1) = v2;
    if ( !v2
      || !(unsigned int)GetPointerDeviceRects(v2, &v16, &v15)
      || !(unsigned int)GetPointerDeviceOrientation(v8, &v17) )
    {
      LOBYTE(v18) = 0;
    }
    v12 = v15;
    v13 = v16;
    v14 = v17;
    v9 = v18;
    v4 = (__int64 *)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
                      (_QWORD *)v1,
                      (__int64)v10,
                      (unsigned __int64 *)&v8);
    v5 = v13;
    v1 = *v4;
    *(_OWORD *)(v1 + 40) = v12;
    v6 = v14;
    *(_OWORD *)(v1 + 56) = v5;
    *(_OWORD *)(v1 + 72) = v6;
    *(_QWORD *)(v1 + 88) = v9;
  }
  return (const struct DEVICE_INFO *)(*(_QWORD *)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
                                                   (_QWORD *)v1,
                                                   (__int64)v10,
                                                   (unsigned __int64 *)&v8)
                                    + 40LL);
}
