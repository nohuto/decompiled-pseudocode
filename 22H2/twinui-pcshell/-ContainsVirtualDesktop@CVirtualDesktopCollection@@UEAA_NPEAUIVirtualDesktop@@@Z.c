/*
 * XREFs of ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x180047B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop(CVirtualDesktopCollection *this, struct IUnknown *a2)
{
  struct IUnknown *v2; // rbx
  char v4; // si
  __int64 v5; // rdi
  char v6; // di
  struct IUnknown *v8; // [rsp+50h] [rbp+18h]

  v2 = a2;
  v4 = 0;
  if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 5)) )
  {
    v2 = v8;
  }
  else
  {
    if ( v2 )
      ((void (__fastcall *)(struct IUnknown *))v2->lpVtbl->AddRef)(v2);
    v4 = 1;
    v5 = 0LL;
    if ( !*((_QWORD *)this + 7) )
      goto LABEL_12;
    while ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(*((_QWORD *)this + 6) + 8 * v5), v2) )
    {
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 7) )
        goto LABEL_12;
    }
    if ( v5 == -1 )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_8;
    }
  }
  v6 = 1;
LABEL_8:
  if ( (v4 & 1) != 0 && v2 )
    ((void (__fastcall *)(struct IUnknown *))v2->lpVtbl->Release)(v2);
  return v6;
}
