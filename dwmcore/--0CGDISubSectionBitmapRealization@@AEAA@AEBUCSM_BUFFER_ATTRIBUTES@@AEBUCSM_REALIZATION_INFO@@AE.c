__int64 __fastcall CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
        __int64 a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        const struct CSM_SYSMEM_SECTION_INFO *a4,
        __int64 a5,
        __int128 *a6,
        _OWORD *a7)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 result; // rax
  bool v14; // [rsp+20h] [rbp-18h]

  *(_QWORD *)(a1 + 16) = &CGDISubSectionBitmapRealization::`vbtable'{for `CSectionBitmapRealization'};
  *(_QWORD *)(a1 + 328) = &CGDISubSectionBitmapRealization::`vbtable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 400) = &CGDISubSectionBitmapRealization::`vbtable'{for `IGDIBitmapRealization'};
  *(_QWORD *)(a1 + 504) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 528) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  CGDISectionBitmapRealization::CGDISectionBitmapRealization((CGDISectionBitmapRealization *)a1, a2, a3, a4, v14, 0);
  *(_QWORD *)a1 = &CGDISubSectionBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 320) = &CGDISubSectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 336) = &CGDISubSectionBitmapRealization::`vftable'{for `IPixelColor'};
  *(_QWORD *)(a1 + 392) = &CGDISubSectionBitmapRealization::`vftable'{for `IGDIBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CGDISubSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CGDISubSectionBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CGDISubSectionBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CGDISubSectionBitmapRealization::`vftable'{for `CBitmapRealization'};
  v8 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v8 + a1 + 12) = v8 - 448;
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 464;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 480;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 504;
  *(_OWORD *)(a1 + 424) = *a7;
  v12 = *a6;
  *(_QWORD *)(a1 + 376) = a5;
  result = a1;
  *(_OWORD *)(a1 + 440) = v12;
  return result;
}
