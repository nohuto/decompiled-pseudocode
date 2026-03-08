/*
 * XREFs of ?DiscardPreviousFrames@CCompositionFrameCollection@@UEAAX_K@Z @ 0x1C0011EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrameCollection::DiscardPreviousFrames(
        CCompositionFrameCollection *this,
        unsigned __int64 a2)
{
  char *v2; // rbx
  char *v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  char *v8; // r15

  v2 = (char *)this + 32;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  v5 = (char *)*((_QWORD *)this + 3);
  v6 = (char *)this + 16;
  if ( v5 != v6 )
  {
    do
    {
      if ( (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v5 - 2) + 72LL))((_QWORD *)v5 - 2) >= a2 )
        break;
      v7 = *(_QWORD *)v5;
      v8 = (char *)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(char **)v8 != v5 )
        __fastfail(3u);
      *(_QWORD *)v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v5 - 2) + 8LL))((_QWORD *)v5 - 2);
      v5 = v8;
    }
    while ( v8 != v6 );
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
}
