__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        int a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v6; // rax
  const char *v7; // r9
  struct Microsoft::BamoImpl::ConnectionIndirector *v8; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v14, this[12]);
  if ( *((_DWORD *)this + 58) >= 0xAu )
  {
    this[28] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)this[28] + 66);
  }
  else
  {
    v6 = (struct Microsoft::BamoImpl::ConnectionIndirector *)operator new(0x218uLL);
    v8 = v6;
    if ( !v6 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x9CC,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v7);
    memset_0(v6, 0, 0x218uLL);
    v9 = this[28];
    if ( v9 )
    {
      *((_QWORD *)v8 + 66) = *((_QWORD *)v9 + 66);
      *((_QWORD *)this[28] + 66) = v8;
      this[28] = v8;
    }
    else
    {
      this[28] = v8;
      *((_QWORD *)v8 + 66) = v8;
    }
    ++*((_DWORD *)this + 58);
  }
  v10 = 0;
  v11 = 16LL;
  do
  {
    ++v10;
    *(_QWORD *)((char *)this[28] + v11) = 0LL;
    v11 += 8LL;
  }
  while ( v10 < 0x40 );
  *((_WORD *)this[28] + 6) = RtlCaptureStackBackTrace(a3 + 1, 0x40u, (PVOID *)this[28] + 2, 0LL);
  *(_DWORD *)this[28] = a2;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this[28] + 4));
  ++*((_DWORD *)this + 59);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v14);
  return a2;
}
