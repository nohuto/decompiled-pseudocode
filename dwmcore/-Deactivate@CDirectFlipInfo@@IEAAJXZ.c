__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = *((_BYTE *)this + 125);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 248LL))(
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    a3);
  result = 0LL;
  *((_DWORD *)this + 12) = 2;
  *((_BYTE *)this + 124) = 0;
  return result;
}
