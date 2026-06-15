/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x140028584
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1400282C0 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x14001541C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s @ 0x140029158 (memcpy_s.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B100 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  char *v4; // rax
  char *v5; // rsi
  rsize_t v6; // r14
  void *v7; // rdx
  wil::details *v8; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_6:
    LOBYTE(v4) = 1;
    return (char)v4;
  }
  v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  v4 = (char *)wil::details::ProcessHeapAlloc(0, v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v4, v3, *(const void *const *)this, v6);
    v8 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v5;
    if ( v8 )
      wil::details::FreeProcessHeap(v8, v7);
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 1) = &v5[v6];
    *((_QWORD *)this + 2) = &v5[v3];
    goto LABEL_6;
  }
  return (char)v4;
}
