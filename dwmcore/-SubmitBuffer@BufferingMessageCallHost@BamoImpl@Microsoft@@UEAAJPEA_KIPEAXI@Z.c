__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        __int64 a3,
        void *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r14
  const char *v8; // r9
  struct Microsoft::BamoImpl::BufferStream *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // ecx
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  _BYTE *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2[1];
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v19);
  v9 = v19;
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      233LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v8);
  v10 = operator new(0x50uLL);
  v11 = v10;
  if ( v10 )
  {
    v12 = a5;
    *v10 = a4;
    v13 = (_QWORD *)((char *)this + 32);
    v10[2] = v5;
    v14 = v10 + 3;
    v10[3] = 0LL;
    v10[4] = 0LL;
    v10[5] = 0LL;
    v10[7] = 0LL;
    v10[8] = 0LL;
    v10[9] = 0LL;
    *((_DWORD *)v10 + 2) = v12;
    *((_BYTE *)v10 + 48) = 0;
    v19 = (struct Microsoft::BamoImpl::BufferStream *)v10;
    if ( v10 + 3 != (_QWORD *)((char *)this + 32) )
    {
      std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v10 + 3);
      *v14 = *v13;
      v14[1] = *((_QWORD *)this + 5);
      v14[2] = *((_QWORD *)this + 6);
      *v13 = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
    }
    v15 = (_QWORD *)((char *)this + 64);
    if ( v11 + 7 != (_QWORD *)((char *)this + 64) )
    {
      std::vector<wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>>::_Tidy(v11 + 7);
      v11[7] = *v15;
      v11[8] = *((_QWORD *)this + 9);
      v11[9] = *((_QWORD *)this + 10);
      *v15 = 0LL;
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_BYTE *)v11 + 48) = *((_BYTE *)this + 56);
    *((_BYTE *)this + 56) = 0;
    v16 = (_BYTE *)*((_QWORD *)v9 + 1);
    if ( v16 == *((_BYTE **)v9 + 2) )
    {
      std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Emplace_reallocate<Microsoft::BamoImpl::RemoteCallBuffer * const &>(
        (const void **)v9,
        v16,
        &v19);
    }
    else
    {
      *(_QWORD *)v16 = v11;
      *((_QWORD *)v9 + 1) += 8LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
