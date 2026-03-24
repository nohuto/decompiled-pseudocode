/*
 * XREFs of ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z @ 0x18005199C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180052640 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18005070C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180050800 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetConstantBuffer(
        CRenderingTechnique *this,
        struct CD3DDevice *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  int updated; // eax
  unsigned int v12; // ecx
  CMILPoolResource *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( *((_DWORD *)this + 14) || *((_DWORD *)this + 62) )
  {
    v14 = 0LL;
    v6 = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
           (_QWORD *)this + 2,
           a2,
           &v14);
    v10 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, 0x148u, 0LL);
      return v10;
    }
    updated = CRenderingTechnique::UpdateConstantBuffers(this, v7, v9);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, 0x14Au, 0LL);
      return v10;
    }
    v5 = (struct ID3D11Buffer *)*((_QWORD *)v14 + 14);
  }
  *a3 = v5;
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v5->lpVtbl->AddRef)(v5);
  return 0;
}
