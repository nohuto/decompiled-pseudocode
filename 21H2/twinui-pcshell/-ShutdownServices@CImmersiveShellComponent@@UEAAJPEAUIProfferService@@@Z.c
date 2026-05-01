/*
 * XREFs of ?ShutdownServices@CImmersiveShellComponent@@UEAAJPEAUIProfferService@@@Z @ 0x1801B1290
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellComponent::ShutdownServices(
        CImmersiveShellComponent *this,
        struct IProfferService *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v5 = v2 - 1;
    v6 = 32 * v2;
    do
    {
      v7 = *((_QWORD *)this + 3);
      v8 = *(_QWORD *)(v6 + v7 - 16);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v7 = *((_QWORD *)this + 3);
      }
      ((void (__fastcall *)(struct IProfferService *, _QWORD))a2->lpVtbl->RevokeService)(
        a2,
        *(unsigned int *)(v6 + v7 - 8));
      v9 = *((_QWORD *)this + 4);
      if ( v5 < v9 )
      {
        if ( v5 != v9 - 1 )
        {
          memmove_0(
            (void *)(v6 + *((_QWORD *)this + 3) - 32LL),
            (const void *)(v6 + *((_QWORD *)this + 3)),
            32 * (v9 - v5) - 32);
          v9 = *((_QWORD *)this + 4);
        }
        *((_QWORD *)this + 4) = v9 - 1;
      }
      v6 -= 32LL;
      --v5;
      --v2;
    }
    while ( v2 );
  }
  return (*(__int64 (__fastcall **)(CImmersiveShellComponent *, struct IProfferService *))(*(_QWORD *)this + 88LL))(
           this,
           a2);
}
