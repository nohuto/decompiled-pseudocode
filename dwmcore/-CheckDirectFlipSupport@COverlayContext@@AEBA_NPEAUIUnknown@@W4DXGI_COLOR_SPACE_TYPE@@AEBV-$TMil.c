__int64 __fastcall COverlayContext::CheckDirectFlipSupport(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax

  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 176LL))(*a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 128LL))(
           v8,
           a2,
           a3,
           a4,
           a5);
}
