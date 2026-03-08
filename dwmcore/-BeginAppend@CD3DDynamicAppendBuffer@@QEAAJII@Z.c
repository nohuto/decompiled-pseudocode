/*
 * XREFs of ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180207638
 * Callers:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180072D80 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 * Callees:
 *     ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18002D428 (-Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::BeginAppend(CD3DDynamicAppendBuffer *this, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v6; // r15d
  unsigned int v7; // edx
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct D3D11_MAPPED_SUBRESOURCE v15; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_DWORD *)this + 10) - *((_DWORD *)this + 9);
  v6 = a3 * a2;
  v7 = (a2 - *((_DWORD *)this + 9) % a2) % a2;
  v8 = v7 + v6;
  v9 = v7;
  v10 = CD3DDevice::Map(
          *(CD3DDevice **)this,
          *((struct ID3D11Resource **)this + 1),
          a3,
          5 - (unsigned int)(v4 < v8),
          v14,
          &v15);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6Cu, 0LL);
  }
  else
  {
    *((_QWORD *)this + 3) = v15.pData;
    *((_DWORD *)this + 8) = a2;
    if ( v4 >= v8 )
      *((_DWORD *)this + 9) += v9;
    else
      *((_DWORD *)this + 9) = 0;
  }
  return v12;
}
