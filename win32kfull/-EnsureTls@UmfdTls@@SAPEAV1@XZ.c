struct UmfdTls *UmfdTls::EnsureTls(void)
{
  struct UmfdTls *result; // rax
  struct UmfdTls *v1; // rbx

  result = (struct UmfdTls *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = result;
  if ( result )
  {
    if ( !*((_QWORD *)result + 44) )
      *((_QWORD *)result + 44) = UmfdTls::Create();
    return (struct UmfdTls *)*((_QWORD *)v1 + 44);
  }
  return result;
}
