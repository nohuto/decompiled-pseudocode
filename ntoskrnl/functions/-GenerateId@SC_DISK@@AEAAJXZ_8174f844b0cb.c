__int64 __fastcall SC_DISK::GenerateId(SC_DISK *this)
{
  __int64 (__fastcall *v2)(SC_DISK *, __int64, _QWORD, _QWORD, _BYTE *, int); // rax
  __int64 result; // rax
  struct _GUID *v4; // rcx
  _BYTE v5[40]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)this + 16LL);
  memset(v5, 0, sizeof(v5));
  result = v2(this, 2953348LL, 0LL, 0LL, v5, 40);
  v4 = (struct _GUID *)((char *)this + 272);
  if ( (int)result < 0 )
    return SC_ENV::CreateGuid(v4);
  *v4 = *(struct _GUID *)&v5[20];
  return result;
}
