/*
 * XREFs of ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x180202078
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801FC838 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801F3060 (--0-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

CDrawListEntry *__fastcall CDrawListEntry::CDrawListEntry(CDrawListEntry *this, const struct DrawListEntryParams *a2)
{
  _OWORD *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // xmm0_8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 6) = 1065353216;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 8) = 1065353216;
  *((_DWORD *)this + 9) = 1065353216;
  *((_DWORD *)this + 12) = *(_DWORD *)a2;
  wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(
    (_QWORD *)this + 7,
    *((_QWORD *)a2 + 1));
  v4 = (_OWORD *)*((_QWORD *)a2 + 3);
  if ( v4 )
    *(_OWORD *)((char *)this + 24) = *v4;
  v5 = (__int64 *)*((_QWORD *)a2 + 4);
  if ( v5 )
  {
    v6 = *v5;
    *((_DWORD *)this + 12) |= 0x400u;
    *((_QWORD *)this + 5) = v6;
  }
  return this;
}
