/*
 * XREFs of ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18043EEC0
 * Callers:
 *     ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18043EF90 (-QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CopyToViewValueSetBase::QueryService(
        CopyToViewValueSetBase *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v7 = *(_QWORD *)&a2->Data1 - 0x40AAF578E1380B20LL;
  if ( *(_QWORD *)&a2->Data1 == 0x40AAF578E1380B20LL )
    v7 = *(_QWORD *)a2->Data4 - 0x36081BD12BA27DBBLL;
  if ( !v7 && *((_QWORD *)this + 8) )
    return (**((__int64 (__fastcall ***)(char *, const struct _GUID *, void **))this - 1))((char *)this - 8, a3, a4);
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
      v9,
      &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
      &v11);
    v9 = v11;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9 )
    v10 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v9 + 24LL))(
            v9,
            a2,
            a3,
            a4);
  else
    v10 = -2147467263;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  return v10;
}
