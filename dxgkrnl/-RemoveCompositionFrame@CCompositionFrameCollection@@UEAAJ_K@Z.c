/*
 * XREFs of ?RemoveCompositionFrame@CCompositionFrameCollection@@UEAAJ_K@Z @ 0x1C0010C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrameCollection::RemoveCompositionFrame(CCompositionFrameCollection *this, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  char *v8; // rcx

  v4 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  *((_BYTE *)this + 40) = 1;
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v5 != (_QWORD *)((char *)this + 16) )
  {
    while ( (*(__int64 (__fastcall **)(_QWORD *))(*(v5 - 2) + 72LL))(v5 - 2) != a2 )
    {
      v5 = (_QWORD *)v5[1];
      if ( v5 == (_QWORD *)((char *)this + 16) )
        goto LABEL_6;
    }
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    (*(void (__fastcall **)(_QWORD *))(*(v5 - 2) + 8LL))(v5 - 2);
    v4 = 0;
  }
LABEL_6:
  v8 = (char *)this + 32;
  if ( *((_BYTE *)this + 40) )
    ExReleasePushLockExclusiveEx(v8, 0LL);
  else
    ExReleasePushLockSharedEx(v8, 0LL);
  return v4;
}
