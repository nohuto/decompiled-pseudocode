char __fastcall DirectComposition::CApplicationChannel::EmitDeletionCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rax
  char result; // al

  for ( i = (_QWORD *)*((_QWORD *)this + 54); ; i = (_QWORD *)*((_QWORD *)this + 54) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 54) = i[1];
    v5 = *i;
    i[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v5 + 32))(i, a2) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*i + 16LL))(i) )
      ++*((_DWORD *)*a2 + 28);
    (*(void (__fastcall **)(_QWORD *, __int64))(*i + 72LL))(i, 1LL);
  }
  i[1] = *((_QWORD *)this + 54);
  result = 0;
  *((_QWORD *)this + 54) = i;
  return result;
}
