void __fastcall BLTQUEUE::Cleanup(BLTQUEUE *this)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx

  if ( *((_QWORD *)this + 76) )
  {
    *((_QWORD *)this + 78) = KeGetCurrentThread();
    *((_BYTE *)this + 572) = 1;
    KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
    ZwWaitForSingleObject(*((HANDLE *)this + 76), 0, 0LL);
    ZwClose(*((HANDLE *)this + 76));
    v2 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
    *((_QWORD *)this + 78) = 0LL;
    *((_QWORD *)this + 76) = 0LL;
    *((_QWORD *)this + 77) = 0LL;
    (**v2)(v2, 0LL);
    *((_QWORD *)this + 16) = 0LL;
    BLTQUEUE::SetIndirectSwapChainHandles(this, 0LL);
  }
}
