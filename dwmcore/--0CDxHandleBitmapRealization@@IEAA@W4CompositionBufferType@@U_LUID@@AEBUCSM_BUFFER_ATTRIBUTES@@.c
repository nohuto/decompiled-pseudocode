__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rdi
  _QWORD *v12; // r9
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  int *v16; // rax
  int v17; // ecx
  __int64 v19; // [rsp+28h] [rbp-20h]

  v9 = a1 + 16;
  if ( a9 )
  {
    *(_QWORD *)v9 = &CDxHandleBitmapRealization::`vbtable';
    *(_QWORD *)(a1 + 328) = &CDxHandleBitmapRealization::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 368) = &CDxHandleBitmapRealization::`vbtable'{for `ISwapChainRealization'};
    *(_QWORD *)(a1 + 448) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 472) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
    *(_QWORD *)(a1 + 496) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  }
  v19 = a8;
  CBitmapRealization::CBitmapRealization();
  CDeviceResource::CDeviceResource((CDeviceResource *)(a1 + 320));
  *v12 = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 360) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 4LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 8LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 12LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 16LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 20LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 4LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 4LL) - 392;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 8LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 8LL) - 408;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 12LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 12LL) - 424;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 16LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 16LL) - 448;
  v13 = *(int *)(*(_QWORD *)v9 + 20LL);
  v14 = a7;
  v15 = (unsigned int)(v13 - 472);
  *(_DWORD *)(v13 + a1 + 12) = v15;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_BYTE *)(a1 + 392) = v14;
  *(_BYTE *)(a1 + 393) = 1;
  LOBYTE(v15) = *(_BYTE *)(a4 + 136) & 1;
  v16 = (int *)CBitmapRealization::CalcDisplayRestriction(&a7, v15, *(_QWORD *)(a4 + 8), v12, a5, v19);
  v17 = *v16;
  *(_DWORD *)(a1 + 280) = *v16;
  if ( v17 != DisplayId::None && v17 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 108);
  return a1;
}
