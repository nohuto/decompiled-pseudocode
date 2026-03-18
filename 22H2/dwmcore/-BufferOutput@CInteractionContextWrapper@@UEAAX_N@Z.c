/*
 * XREFs of ?BufferOutput@CInteractionContextWrapper@@UEAAX_N@Z @ 0x180283FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CInteractionContextWrapper::BufferOutput(CInteractionContextWrapper *this, char a2)
{
  if ( *((_BYTE *)this + 528) != a2 )
  {
    *((_BYTE *)this + 528) = a2;
    if ( a2 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 152LL))(this);
  }
}
