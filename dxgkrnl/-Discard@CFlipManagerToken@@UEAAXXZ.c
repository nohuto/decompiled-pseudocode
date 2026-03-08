/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0076200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0075634 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 6) = 6;
}
