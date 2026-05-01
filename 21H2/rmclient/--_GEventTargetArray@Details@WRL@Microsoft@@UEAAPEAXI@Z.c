/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180008D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180009D50 (--3@YAXPEAX@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // rdi
  __int64 *i; // rsi

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = (void *)(v4 - 8);
    v6 = *(_QWORD *)(v4 - 8);
    for ( i = (__int64 *)(v4 + 8 * v6); v6; --v6 )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(--i);
    operator delete(v5);
  }
  operator delete(*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
