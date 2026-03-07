__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        __int64 a4)
{
  __int64 v6; // rax
  struct DMMVIDEOPRESENTSOURCESET *v7; // rbx
  DMMVIDEOPRESENTSOURCE *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _QWORD *v16; // rax
  DMMVIDEOPRESENTSOURCE *v17; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v18; // [rsp+38h] [rbp+10h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v7 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = (DMMVIDEOPRESENTSOURCE *)operator new[](0x88uLL, 0x4E506456u, 256LL);
      if ( v8 )
        v8 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v8, v7, a2->Id);
      v17 = v8;
      if ( v8 )
      {
        v17 = 0LL;
        v18 = v8;
        v9 = DMMVIDEOPRESENTSOURCESET::AddSource(v7, &v18);
        v14 = v9;
        if ( v9 >= 0 )
        {
          auto_ptr<DMMVIDEOPRESENTSOURCE>::~auto_ptr<DMMVIDEOPRESENTSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v17);
          return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v7, a2);
        }
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        v16[3] = 0LL;
        v16[4] = v7;
        v16[5] = v14;
      }
      else
      {
        WdLogSingleEntry1(6LL, v7);
        LODWORD(v14) = -1073741801;
      }
      auto_ptr<DMMVIDEOPRESENTSOURCE>::~auto_ptr<DMMVIDEOPRESENTSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v17);
      return (unsigned int)v14;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      return 3223192341LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    return 3223192324LL;
  }
}
