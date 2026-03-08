/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18002827C
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x180027694 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800280A8 (LoadShaderBody.c)
 *     PrepareSamplers @ 0x180028AEC (PrepareSamplers.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180207A88 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(char a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  char v7; // cl
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = qword_1803E76F8;
    if ( qword_1803E76F8 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1803993F0, 0x1B22BuLL, &qword_1803E76F8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803E76F8;
      goto LABEL_4;
    }
    v8 = 294;
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    v4 = qword_1803E33F8;
    if ( qword_1803E33F8 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1802EB400, 0x2CDEBuLL, &qword_1803E33F8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803E33F8;
      goto LABEL_4;
    }
    v8 = 306;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v8, 0LL);
    return v2;
  }
  if ( a1 != 2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x146u, 0LL);
    return v2;
  }
  v4 = qword_1803E3400;
  if ( !qword_1803E3400 )
  {
    v6 = D3DLoadModule(&unk_1803181F0, 0x20A4FuLL, &qword_1803E3400);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803E3400;
      goto LABEL_4;
    }
    v8 = 318;
    goto LABEL_18;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
