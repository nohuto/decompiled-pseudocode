/*
 * XREFs of ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180011074
 * Callers:
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180010F90 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180299118 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CD2DSharedBuffer>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 2;
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 2));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 48LL))(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        --*v3;
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 40LL))(v1, 1LL);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
