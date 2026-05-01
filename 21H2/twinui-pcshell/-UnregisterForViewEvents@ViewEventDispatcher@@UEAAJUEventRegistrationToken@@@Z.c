/*
 * XREFs of ?UnregisterForViewEvents@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180318AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 */

__int64 __fastcall ViewEventDispatcher::UnregisterForViewEvents(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  RTL_SRWLOCK *v2; // r14
  PVOID Ptr; // rdx
  void *v6; // rsi
  char v7; // bp
  char *v8; // rcx
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  Ptr = this[41].Ptr;
  v6 = 0LL;
  v7 = 1;
  if ( Ptr )
  {
    v8 = (char *)this[40].Ptr;
    while ( *(_QWORD *)(*(_QWORD *)v8 + 40LL) != a2.value )
    {
      v6 = (char *)v6 + 1;
      v8 += 8;
      if ( v6 >= Ptr )
        goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v11, (__int64 *)this[40].Ptr + (_QWORD)v6);
    if ( v6 < this[41].Ptr )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this[40].Ptr + (_QWORD)v6);
      v9 = this[41].Ptr;
      if ( v6 != v9 - 1 )
      {
        memmove_0(
          (char *)this[40].Ptr + 8 * (_QWORD)v6,
          (char *)this[40].Ptr + 8 * (_QWORD)v6 + 8,
          8 * (v9 - (_BYTE *)v6) - 8);
        v9 = this[41].Ptr;
      }
      this[41].Ptr = v9 - 1;
    }
    if ( v11 )
      v7 = 0;
  }
LABEL_12:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7 != 0 ? 0x80070490 : 0;
}
