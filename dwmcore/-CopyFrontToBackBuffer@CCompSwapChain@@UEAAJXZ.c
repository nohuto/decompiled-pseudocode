/*
 * XREFs of ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18029AAA0
 * Callers:
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x18029B470 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18001891C (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800414FC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047B80 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompSwapChain::CopyFrontToBackBuffer(CCompSwapChain *this)
{
  _DWORD *v2; // rbx
  int v3; // eax
  __int64 v4; // r8
  int v5; // eax
  int v6; // ebx
  ULONG v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  FastRegion::Internal::CRgnData *v12; // rcx
  int RectangleCount; // eax
  _BYTE v15[8]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-41h]
  _DWORD *v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+70h] [rbp-29h]
  FastRegion::Internal::CRgnData *v20; // [rsp+80h] [rbp-19h] BYREF
  int v21; // [rsp+88h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+D0h] [rbp+37h] BYREF
  const void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v2 = (_DWORD *)((char *)this + 160);
  if ( **((_DWORD **)this + 30) || *v2 == 3 && **((_DWORD **)this + 39) )
  {
    v21 = 0;
    v20 = (FastRegion::Internal::CRgnData *)&v21;
    v3 = FastRegion::CRegion::Copy((int **)&v20, (int **)this + 30);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT(v3, retaddr);
    if ( *v2 == 3 )
    {
      v5 = FastRegion::CRegion::Union(&v20, (const struct FastRegion::Internal::CRgnData **)this + 39);
      if ( v5 < 0 )
        ModuleFailFastForHRESULT(v5, retaddr);
    }
    v6 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        v4,
        1u,
        &v22);
    FastRegion::Internal::CRgnData::BeginIterator(v20, (struct FastRegion::CRegion::Iterator *)v15);
    while ( (unsigned __int64)v17 < v16 )
    {
      v7 = v17[2];
      v8 = 2 * v19;
      HIDWORD(v22.Ptr) = *v17;
      v22.Reserved = v7;
      v9 = *(_DWORD *)(v18 + 4 * v8);
      v10 = *((_QWORD *)this + 13);
      v22.Size = *(_DWORD *)(v18 + 4 * v8 + 4);
      v11 = *((_QWORD *)this + 9);
      LODWORD(v22.Ptr) = v9;
      CD3DDevice::CopySubresourceRegion(v11, *((_QWORD *)this + 14), 0, (int *)&v22, v10, 0, v9, SHIDWORD(v22.Ptr), 0);
      v12 = (FastRegion::Internal::CRgnData *)((v22.Reserved - HIDWORD(v22.Ptr)) * (v22.Size - LODWORD(v22.Ptr)));
      v6 += (int)v12;
      FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)v15);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)&v20);
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v6);
    }
    FastRegion::CRegion::FreeMemory((void **)&v20);
  }
  return 0LL;
}
