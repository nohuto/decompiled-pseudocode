/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x180015980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

LPSTREAM *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(LPSTREAM *this, char a2)
{
  LPSTREAM v4; // rcx
  LPSTREAM v6; // rcx
  IStream *v7; // rcx
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  *this = (LPSTREAM)&CMarshaledInterface::CMarshalStream::`vftable';
  if ( this[2] )
  {
    if ( *((_DWORD *)this + 10) == GetCurrentThreadId() )
    {
      CoReleaseMarshalData(this[2]);
      v6 = this[2];
      if ( v6 )
      {
        this[2] = 0LL;
        (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    else
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
      v7 = this[2];
      this[2] = 0LL;
      CoGetInterfaceAndReleaseStream(v7, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppv);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(this + 4);
  v4 = this[2];
  if ( v4 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
