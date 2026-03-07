__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rdi
  void (__fastcall *v4)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *); // rbx
  struct IMessageCallSendHost *SendHost; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)a2 + 3) != *((_QWORD *)this + 2) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19D,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
      (const char *)0x87B20819LL,
      v8);
  Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
  if ( !Stub )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)Stub + 4) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    Stub = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)Stub + 5);
  }
  while ( Stub );
  if ( !Stub )
LABEL_5:
    Stub = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(this, a2);
  if ( !*((_BYTE *)Stub + 56) )
  {
    *((_BYTE *)Stub + 56) = 1;
    *((_BYTE *)Stub + 59) = 1;
    v4 = *(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct IMessageCallSendHost *, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 64LL);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)Stub + 4));
    v4(this, SendHost, Stub);
    v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)Stub + 48LL))(Stub);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BC,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v6,
        v8);
  }
  ++*((_DWORD *)Stub + 4);
  *((_BYTE *)Stub + 60) = 1;
  return *((unsigned int *)this + 6);
}
