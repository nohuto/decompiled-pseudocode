__int64 __fastcall _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  struct DMMVIDPNTARGETMODESET *v5; // rbx
  DMMVIDPNSOURCEMODE *v6; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v8; // rax
  __int128 v9; // xmm1
  struct DMMVIDPNTARGETMODESET *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 result; // rax

  v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 88));
  v6 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v5 + 18);
  if ( v6 )
  {
    if ( (*v4 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v6);
      if ( *(_DWORD *)(a2 + 96) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 100) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *v4 &= ~0x800000uLL;
    }
    v8 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v5 + 18));
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v8->PrimSurfSize.cx;
    v9 = *(_OWORD *)&v8->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v9;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  v10 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a1 + 96));
  v11 = *((_QWORD *)v10 + 18);
  if ( v11 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v11 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v11 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v11 + 104);
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v11 + 120);
    *(_QWORD *)(a2 + 224) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(a2 + 232) = *(_QWORD *)(v11 + 144);
    *(_DWORD *)(a2 + 240) = *(_DWORD *)(v11 + 160);
    *(_QWORD *)a2 |= 0x801000087uLL;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v10 + 88));
  v12 = *(_DWORD *)(a1 + 116);
  if ( v12 && (unsigned int)(v12 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 132) = v12;
  }
  v13 = *(_DWORD *)(a1 + 112);
  if ( v13 && v13 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v13;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
