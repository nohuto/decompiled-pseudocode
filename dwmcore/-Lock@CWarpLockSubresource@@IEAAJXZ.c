__int64 __fastcall CWarpLockSubresource::Lock(CWarpLockSubresource *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h]

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), 2013265920LL);
  v2 = *((_DWORD *)this + 8);
  v3 = *((_QWORD *)this + 2);
  v8[3] = 0;
  v8[0] = 13;
  v8[1] = v2;
  v8[2] = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 24LL))(v3, v8);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x5Au, 0LL);
  else
    *(_OWORD *)((char *)this + 40) = v9;
  return v6;
}
