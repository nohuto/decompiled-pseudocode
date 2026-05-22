/*
 * XREFs of ??0EdgyProcessor@@QEAA@XZ @ 0x180177CB4
 * Callers:
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x180177E04 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18003027C (-Get@EdgyConnection@@SAPEAV1@XZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x180034484 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::EdgyProcessor(EdgyProcessor *this)
{
  struct EdgyConnection *v2; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *(_QWORD *)this = &EdgyProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &EdgyProcessor::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 4) = 1;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  v2 = EdgyConnection::Get();
  *((_QWORD *)this + 13) = v2;
  if ( v2 )
    (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
  QpcTimeConverter::QpcTimeConverter((EdgyProcessor *)((char *)this + 112));
  if ( !*((_QWORD *)this + 13) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      18LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v3);
    __debugbreak();
  }
  return this;
}
