/*
 * XREFs of ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x18017F290
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x18017F154 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017F7D4 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x18017FCBC (-IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z.c)
 */

__int64 __fastcall InputRedirectionProcessor::DisableInputRedirection(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rbx
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // ebx
  int v17[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  v8 = 0;
  while ( v5 != *(_QWORD *)(a1 + 80) )
  {
    if ( (a5 & *(_DWORD *)v5) != 0 )
    {
      v9 = *(_QWORD *)(v5 + 8);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v5 + 8);
        v11 = *(_OWORD *)(a3 + 16);
        *(_OWORD *)v17 = *(_OWORD *)a3;
        v12 = *(_QWORD *)(a3 + 32);
        v18 = v11;
        v19 = v12;
        if ( (unsigned __int8)InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(v10, v17, a2) )
        {
          std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(a1 + 72, &v21, v5);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          goto LABEL_9;
        }
      }
      break;
    }
    v5 += 16LL;
  }
  v8 = -2147024891;
LABEL_9:
  if ( !*(_DWORD *)a4 )
    return 0LL;
  v13 = *(_OWORD *)(a4 + 16);
  *(_OWORD *)v17 = *(_OWORD *)a4;
  v19 = *(_QWORD *)(a4 + 32);
  v18 = v13;
  v14 = InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, (__int64)v17, v8);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\"
             "inputredirectionprocessor.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
