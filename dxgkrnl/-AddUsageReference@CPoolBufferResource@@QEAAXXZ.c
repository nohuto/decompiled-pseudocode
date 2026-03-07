void __fastcall CPoolBufferResource::AddUsageReference(PRKEVENT *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( !*((_DWORD *)this + 22) )
  {
    KeResetEvent(this[9]);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, PRKEVENT *, _QWORD))(*((_QWORD *)Global + 38069) + 232LL))(
      HIDWORD(this[7][13].Header.WaitListHead.Blink),
      this,
      0LL);
  }
  ++*((_DWORD *)this + 22);
}
