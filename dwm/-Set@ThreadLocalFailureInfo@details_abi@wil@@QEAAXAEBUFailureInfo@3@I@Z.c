/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14000A11C
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x14000A274 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x140002A24 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x1400063A8 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x140008870 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x1400088E4 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x14000A00C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x14000A038 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  unsigned __int16 **v3; // r14
  int v4; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  const char *v9; // rdx
  __int64 v10; // rbp
  const char *v11; // rdx
  SIZE_T v12; // rbp
  SIZE_T *v13; // rdi
  LPVOID v14; // r14
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  char *v17; // rcx
  const char *v18; // rbx
  char *v19; // rax
  unsigned __int16 *v20; // rax
  char *v21; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (unsigned __int16 **)((char *)this + 56);
  v4 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = v4;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 32);
  LOBYTE(v4) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 26) = v4;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 17);
  v7 = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = v7;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), (const unsigned __int16 *)a2);
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), v11) + v10;
  v13 = (SIZE_T *)((char *)this + 72);
  if ( !*((_QWORD *)this + 8) || *v13 < v12 )
  {
    v14 = wil::details::ProcessHeapAlloc(8u, v12);
    if ( v14 )
    {
      v15 = (void *)*((_QWORD *)this + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v15);
      *((_QWORD *)this + 8) = v14;
      *v13 = v12;
    }
    v3 = (unsigned __int16 **)((char *)this + 56);
  }
  v17 = (char *)*((_QWORD *)this + 8);
  if ( v17 )
  {
    v18 = &v17[*v13];
    v19 = wil::details::WriteResultString<char const *>(v17, v18, *((wil::details **)a2 + 7), (char **)this + 2);
    v20 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v19,
                                v18,
                                *((wil::details **)a2 + 16),
                                (char **)this + 4);
    v21 = wil::details::WriteResultString<unsigned short const *>(
            v20,
            (const unsigned __int16 *)v18,
            *((wil::details **)a2 + 3),
            v3);
    memset_0(v21, 0, v18 - v21);
  }
}
