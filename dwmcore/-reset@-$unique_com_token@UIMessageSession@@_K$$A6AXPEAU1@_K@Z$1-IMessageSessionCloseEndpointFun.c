void __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        wil::details **a1,
        wil::details *a2,
        unsigned __int64 a3)
{
  struct IMessageSession *v5; // rdx
  wil::details *v6; // rdi

  v5 = a1[1];
  if ( v5 )
    wil::details::IMessageSessionCloseEndpointFunction(*a1, v5, a3);
  a1[1] = 0LL;
  v6 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v6 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
