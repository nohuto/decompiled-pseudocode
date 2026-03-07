__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::CancelBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  const char *v9; // r9
  struct Microsoft::BamoImpl::BufferStream *v10; // rbx
  unsigned int v11; // r10d
  void ***v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v15; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v15);
  v10 = v15;
  v11 = 0;
  if ( !v15 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      281LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v9);
  v12 = *(void ****)v15;
  if ( *(_QWORD *)v15 == *((_QWORD *)v15 + 1) )
LABEL_6:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      300LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
      v9);
  while ( **v12 != a4 )
  {
    ++v11;
    if ( ++v12 == *((void ****)v15 + 1) )
      goto LABEL_6;
  }
  memmove_0(
    (void *)(*(_QWORD *)v15 + 8LL * v11),
    (const void *)(*(_QWORD *)v15 + 8LL * v11 + 8),
    *((_QWORD *)v15 + 1) - (*(_QWORD *)v15 + 8LL * v11 + 8));
  *((_QWORD *)v10 + 1) -= 8LL;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, void *, unsigned int))(**((_QWORD **)this + 1)
                                                                                             + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}
