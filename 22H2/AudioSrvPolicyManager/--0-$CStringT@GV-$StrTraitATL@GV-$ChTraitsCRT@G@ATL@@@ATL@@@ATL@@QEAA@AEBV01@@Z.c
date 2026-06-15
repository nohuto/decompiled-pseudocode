/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000F150
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000B210 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000B460 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000C840 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000D0F8 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x1800147A0 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026030 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$shared_ptr@VDuckingDescriptor@@@std@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x18002B104 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$shared_ptr@V.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x180032EA0 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180034200 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000F0A8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000F0C0 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1,
        const void **a2)
{
  const void *v2; // rbp
  volatile signed __int32 *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v6; // rsi

  v2 = *a2;
  v4 = (volatile signed __int32 *)((char *)*a2 - 24);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
  if ( *((int *)v4 + 4) >= 0 && v5 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
  {
    _InterlockedIncrement(v4 + 4);
  }
  else
  {
    v6 = v4 + 2;
    v4 = (volatile signed __int32 *)(**v5)(v5, *((unsigned int *)v4 + 2), 2LL);
    if ( !v4 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *((_DWORD *)v4 + 2) = *v6;
    ATL::CSimpleStringT<unsigned short,0>::CopyChars((void *)(v4 + 6), *v6 + 1, v2, *v6 + 1);
  }
  *a1 = v4 + 6;
  return a1;
}
