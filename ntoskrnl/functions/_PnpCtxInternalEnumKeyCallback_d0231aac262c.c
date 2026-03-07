__int64 __fastcall PnpCtxInternalEnumKeyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a4 + 8))(
           *(_QWORD *)a4,
           a2,
           a3,
           *(_QWORD *)(a4 + 16));
}
