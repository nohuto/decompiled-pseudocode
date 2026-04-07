/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18007F79C
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x18007F8F0 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18002EE58 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18007D900 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18007D97C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18007F4E0 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18007F50C (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // r14
  int v4; // eax
  char **v5; // r15
  unsigned __int16 **v6; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rdx
  SIZE_T v14; // rdi
  LPVOID v15; // rbp
  HANDLE ProcessHeap; // rax
  char *v17; // rcx
  const char *v18; // rbx
  char *v19; // rax
  unsigned __int16 *v20; // rax
  char *v21; // rax

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 16);
  v4 = *((_DWORD *)a2 + 1);
  v5 = (char **)((char *)this + 32);
  *((_QWORD *)this + 2) = 0LL;
  v6 = (unsigned __int16 **)((char *)this + 56);
  *((_DWORD *)this + 2) = v4;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 28);
  LOBYTE(v4) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 26) = v4;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 16);
  v9 = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = v9;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), (const unsigned __int16 *)a2);
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v13) + v12;
  if ( !*((_QWORD *)this + 8) || *((_QWORD *)this + 9) < v14 )
  {
    v15 = wil::details::ProcessHeapAlloc(8u, v14);
    if ( v15 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)this + 8));
      *((_QWORD *)this + 8) = v15;
      *((_QWORD *)this + 9) = v14;
    }
  }
  v17 = (char *)*((_QWORD *)this + 8);
  if ( v17 )
  {
    v18 = &v17[*((_QWORD *)this + 9)];
    v19 = wil::details::WriteResultString<char const *>(v17, v18, *((wil::details **)a2 + 6), v3);
    v20 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(v19, v18, *((wil::details **)a2 + 15), v5);
    v21 = wil::details::WriteResultString<unsigned short const *>(
            v20,
            (const unsigned __int16 *)v18,
            *((wil::details **)a2 + 2),
            v6);
    memset_0(v21, 0, v18 - v21);
  }
}
