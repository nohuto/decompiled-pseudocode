void __fastcall CTokenQueue::AddToken(CTokenQueue *this, struct CToken *a2)
{
  CTokenQueue **v2; // rsi
  CTokenQueue *v3; // rax

  *((_DWORD *)this + 6) = 0;
  v2 = (CTokenQueue **)((char *)a2 + 8);
  v3 = *(CTokenQueue **)this;
  if ( *(CTokenQueue **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v2 = v3;
  *((_QWORD *)a2 + 2) = this;
  *((_QWORD *)v3 + 1) = v2;
  *(_QWORD *)this = v2;
  if ( *((_DWORD *)a2 + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 104LL))(a2) )
      *((_QWORD *)this + 2) = a2;
    if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 96LL))(a2)
      && (*v2 == this || (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)*v2 - 1) + 88LL))((__int64)*v2 - 8)) )
    {
      (*(void (__fastcall **)(struct CToken *))(*(_QWORD *)a2 + 80LL))(a2);
    }
  }
}
