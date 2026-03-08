/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180010F90
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180010CC4 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x18001102C (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180011074 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        unsigned __int64 a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  unsigned int v8; // edi
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  _DWORD *v11; // rbx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v9 = CD2DSharedBuffer::operator new(a1);
  v11 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable';
    *((_QWORD *)v9 + 2) = a1;
    v9[6] = a2;
    *((_QWORD *)v9 + 4) = a3;
    if ( a3 )
      CMILRefCountImpl::AddReference((struct CSharedSection *)((char *)a3 + 8));
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 2));
    v13[0] = 0LL;
    *a4 = (struct ID2D1PrivateCompositorBuffer *)v11;
  }
  else
  {
    v13[0] = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x3Du, 0LL);
  }
  ReleaseInterface<CD2DSharedBuffer>(v13);
  return v8;
}
