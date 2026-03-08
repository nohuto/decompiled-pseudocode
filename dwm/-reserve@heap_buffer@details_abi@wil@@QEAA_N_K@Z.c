/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140002964
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140002934 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x140002398 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x140002A24 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s @ 0x140002A9C (memcpy_s.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x14000896C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x140008AB8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  char *v6; // rax
  char *v7; // rsi
  rsize_t v9; // r14
  void *v10; // rdx
  wil::details *v11; // rcx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v12);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v6 = (char *)wil::details::ProcessHeapAlloc(0, v4, v5);
    v7 = v6;
    if ( !v6 )
    {
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
      return 0;
    }
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v6, v4, *(const void *const *)this, v9);
    v11 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v11 )
      wil::details::FreeProcessHeap(v11, v10);
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v9];
    *((_QWORD *)this + 2) = &v7[v4];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  return 1;
}
