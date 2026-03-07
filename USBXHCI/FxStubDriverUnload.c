void __fastcall FxStubDriverUnload(struct _WDF_BIND_INFO *a1)
{
  if ( qword_1C0064A48 && qword_1C0064A48 != FxStubDriverUnload )
    qword_1C0064A48();
  FxStubDriverUnloadCommon(a1);
}
