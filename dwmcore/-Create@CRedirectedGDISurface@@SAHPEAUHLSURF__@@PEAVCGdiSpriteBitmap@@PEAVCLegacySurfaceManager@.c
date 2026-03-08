/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800F195C
 * Callers:
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1800F82A0 (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180129E50 (McTemplateU0xx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  _DWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *inserted; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  signed int LastError; // eax
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  int NewElement; // [rsp+98h] [rbp+48h] BYREF

  *a4 = 0LL;
  v8 = DefaultHeap::AllocClear(0x30uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8[2] = 0;
  *((_QWORD *)v8 + 2) = a3;
  *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable';
  *((_QWORD *)v8 + 3) = a1;
  *((_QWORD *)v8 + 4) = a2;
  LOBYTE(NewElement) = 0;
  Buffer[0] = a1;
  Buffer[1] = v8;
  Buffer[2] = a2;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)a3 + 8), Buffer, 0x18u, (PBOOLEAN)&NewElement);
  if ( !inserted )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  if ( !(_BYTE)NewElement )
  {
    inserted[2] = a2;
    inserted[1] = v9;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 1));
  v11 = v9[3];
  v12 = 0;
  NewElement = 0;
  if ( (unsigned int)DwmHLSurfOpenCompositorRef(v11) )
  {
    *((_BYTE *)v9 + 40) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xx_EventWriteTransfer(v13, &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION, v9[4], v9[3]);
  }
  else
  {
    LastError = GetLastError();
    v12 = LastError;
    if ( LastError > 0 )
    {
      v12 = (unsigned __int16)LastError | 0x80070000;
      NewElement = v12;
    }
    else
    {
      NewElement = LastError;
    }
  }
  TranslateDXGIorD3DErrorInContext(v12, 10, &NewElement);
  v15 = NewElement;
  if ( NewElement < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, NewElement, 0x1Au, 0LL);
    CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v9);
  }
  else
  {
    *a4 = (struct CRedirectedGDISurface *)v9;
  }
  return v15;
}
