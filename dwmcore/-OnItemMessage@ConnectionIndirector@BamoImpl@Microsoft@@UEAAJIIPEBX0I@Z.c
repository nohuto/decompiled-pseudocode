__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        int a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  _DWORD *i; // rax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v15,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v10 = *((_QWORD *)this + 2);
  for ( i = *(_DWORD **)(v10 + 192); ; ++i )
  {
    if ( i == *(_DWORD **)(v10 + 200) )
    {
      *(_DWORD *)(v10 + 32) = a2;
      v12 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 32LL))(a4, a5, a6);
      *(_DWORD *)(v10 + 32) = 0;
      v13 = v12;
      goto LABEL_4;
    }
    if ( *i == a3 )
      break;
  }
  v13 = 0;
LABEL_4:
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v15);
  return v13;
}
