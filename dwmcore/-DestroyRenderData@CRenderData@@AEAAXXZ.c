void __fastcall CRenderData::DestroyRenderData(CRenderData *this)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rbx

  if ( *((_DWORD *)this + 40) )
  {
    v2 = 0LL;
    v3 = *((unsigned int *)this + 40);
    do
    {
      v4 = *((_QWORD *)this + 17);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v2 + v4));
      *(_QWORD *)(v2 + v4) = 0LL;
      v2 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 40) = 0;
  CDataStreamWriter::Reset((struct _LIST_ENTRY *)((char *)this + 72));
  *((_BYTE *)this + 297) = 1;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>>>(*((void **)this + 21));
  *((_QWORD *)this + 22) = *((_QWORD *)this + 21);
}
