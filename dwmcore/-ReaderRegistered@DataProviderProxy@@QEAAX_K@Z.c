void __fastcall DataProviderProxy::ReaderRegistered(DataProviderProxy *this, __int64 a2)
{
  char *v2; // rbx

  ++*((_DWORD *)this + 16);
  v2 = (char *)this + 8;
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 88LL))(
    (char *)this + 8,
    *((unsigned int *)this + 16));
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 24LL))(v2, a2);
}
