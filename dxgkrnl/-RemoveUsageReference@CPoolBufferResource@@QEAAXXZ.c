void __fastcall CPoolBufferResource::RemoveUsageReference(CPoolBufferResource *this)
{
  int v1; // eax
  int v3; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8

  v1 = *((_DWORD *)this + 22);
  if ( v1 )
  {
    v3 = v1 - 1;
    *((_DWORD *)this + 22) = v3;
    if ( !v3 )
    {
      KeSetEvent(*((PRKEVENT *)this + 9), 1, 0);
      Global = DXGGLOBAL::GetGlobal();
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(_QWORD, CPoolBufferResource *, __int64))(*((_QWORD *)Global + 38069) + 232LL))(
        *(unsigned int *)(*((_QWORD *)this + 7) + 332LL),
        this,
        v5);
    }
  }
}
