__int64 *__fastcall CD3DDevice::CUnpinResource::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v5 = *a1;
    *a1 = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = a1[1];
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 184LL))(v6);
    v7 = a2[1];
    a2[1] = 0LL;
    v8 = a1[1];
    a1[1] = v7;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    a1[2] = a2[2];
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 7);
  }
  return a1;
}
