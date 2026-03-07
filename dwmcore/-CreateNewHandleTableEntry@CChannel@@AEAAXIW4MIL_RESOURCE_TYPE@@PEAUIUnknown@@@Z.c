char __fastcall CChannel::CreateNewHandleTableEntry(CChannel *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rax
  const char *v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = a2;
  LOBYTE(v8) = CChannel::IsValidHandle(a1, a2);
  if ( (_BYTE)v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD50,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v9);
  v10 = (__int64)(*((_QWORD *)a1 + 3) - *((_QWORD *)a1 + 2)) >> 4;
  if ( v5 > v10 )
  {
    if ( (unsigned int)v5 > (unsigned __int64)((__int64)(*((_QWORD *)a1 + 4) - *((_QWORD *)a1 + 2)) >> 4) )
    {
      LOBYTE(v8) = std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(
                     (char *)a1 + 16,
                     (unsigned int)v5);
    }
    else
    {
      v8 = std::_Uninitialized_value_construct_n<std::allocator<CChannel::HandleTableEntry>>(
             *((_QWORD *)a1 + 3),
             (unsigned int)v5 - v10);
      *((_QWORD *)a1 + 3) = v8;
    }
  }
  v11 = *((_QWORD *)a1 + 2) + 16LL * (unsigned int)(v5 - 1);
  *(_DWORD *)v11 = 1;
  *(_DWORD *)(v11 + 4) = a3;
  v12 = *(_QWORD *)(v11 + 8);
  *(_QWORD *)(v11 + 8) = a4;
  if ( v12 )
    LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  ++*((_QWORD *)a1 + 5);
  return v8;
}
