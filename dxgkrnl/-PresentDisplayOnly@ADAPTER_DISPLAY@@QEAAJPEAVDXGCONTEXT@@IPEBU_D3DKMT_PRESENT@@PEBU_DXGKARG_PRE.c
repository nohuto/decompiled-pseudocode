__int64 __fastcall ADAPTER_DISPLAY::PresentDisplayOnly(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        struct tagRECT *a7)
{
  D3DKMT_PRESENT_RGNS **p_pPresentRegions; // rbx
  D3DKMT_PRESENT_RGNS *v8; // rdi
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]

  p_pPresentRegions = &a4->pPresentRegions;
  v8 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_DWORD *)this + 114) )
  {
    LODWORD(v12) = 0;
    v8 = *p_pPresentRegions;
    LODWORD(v11) = 1;
    *((_QWORD *)&v12 + 1) = 0LL;
    *((_QWORD *)&v11 + 1) = a7;
    *p_pPresentRegions = (D3DKMT_PRESENT_RGNS *)&v11;
  }
  result = BLTQUEUE::Present((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 2920LL * a3), a2, a4, a5, a6);
  if ( *((_DWORD *)this + 114) )
    *p_pPresentRegions = v8;
  return result;
}
