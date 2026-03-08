/*
 * XREFs of ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x1802A0964
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180296ED0 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18002D428 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::SetData(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v12; // [rsp+30h] [rbp-18h] BYREF

  v5 = CD3DDevice::Map(
         *(CD3DDevice **)(*(_QWORD *)(a1 + 24) + 80LL),
         *(struct ID3D11Resource **)(a1 + 96),
         a3,
         4LL,
         v11,
         &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4Bu, 0LL);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 104);
    if ( v8 >= *a2 )
      v8 = *a2;
    memcpy_0(v12.pData, *((const void **)a2 + 1), v8);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL) + 560LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 120LL))(v9, *(_QWORD *)(a1 + 96), 0LL);
  }
  return v7;
}
