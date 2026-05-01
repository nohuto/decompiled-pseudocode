/*
 * XREFs of ?Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x180499300
 * Callers:
 *     ??$FindEx@VCTempAppVisualFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByApplication@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180498E30 (--$FindEx@VCTempAppVisualFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UITemporaryAppVisu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UITemporaryAppVisual@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@Details@12@@Z @ 0x180498DEC (--$As@UITemporaryAppVisual@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIT.c)
 */

__int64 __fastcall CTempAppVisualFinderByApplication::Compare(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v7[0] = 0LL;
  v4 = -1;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ITemporaryAppVisual>(a2, v7) >= 0 )
  {
    v9 = 0LL;
    v5 = v7[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, &v9) >= 0 && v9 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 104LL))(v9, *a1, &v8);
      v4 = ((_DWORD)v8 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  return v4;
}
