void __fastcall CFlipExBuffer::DisableCascadedSignaling(CFlipExBuffer *this)
{
  char *v1; // rdi
  __int64 v3; // rcx

  *((_DWORD *)this + 159) = 0;
  v1 = (char *)this + 680;
  *((_QWORD *)this + 88) = 0LL;
  v3 = *((_QWORD *)this + 85);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)v3 + 40LL))(
      v3,
      *((_QWORD *)this + 80),
      *((unsigned int *)this + 162),
      *((_QWORD *)this + 83),
      *((_DWORD *)this + 168),
      *((_DWORD *)this + 164));
    *((_QWORD *)this + 80) = 0LL;
    *((_DWORD *)this + 162) = 0;
    *((_QWORD *)this + 83) = 0LL;
    *((_DWORD *)this + 168) = 0;
    *((_DWORD *)this + 164) = 0;
    ReleaseInterface<IAdapter>(v1);
  }
}
