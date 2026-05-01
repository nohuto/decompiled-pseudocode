/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180002FF8
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800034B0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x180003D3C (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180003DCC (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     memset_0 @ 0x180006B56 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180006B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // rbx
  int v3; // ebp
  HANDLE ProcessHeap; // rax
  _WORD *v7; // rdi
  HANDLE v8; // rax
  _WORD *v9; // rax
  _DWORD *v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  signed __int32 v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  SIZE_T v27; // rdi
  HANDLE v28; // rax
  LPVOID v29; // rsi
  HANDLE v30; // rax
  HANDLE v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rax

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_39;
  if ( v3 )
  {
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 8u, 0x190uLL);
    v2 = v7;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v8 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _WORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v8, v7);
    }
    *((_QWORD *)this + 3) = v7;
    if ( v7 )
    {
      v9 = v7 + 200;
      *((_DWORD *)this + 8) = 5;
      do
      {
        *v7 = 80;
        v7 += 40;
      }
      while ( v7 != v9 );
      v2 = (_WORD *)*((_QWORD *)this + 3);
    }
  }
  if ( v2 )
  {
LABEL_39:
    if ( !v3 || (v10 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v10) )
    {
LABEL_16:
      v12 = 1LL;
      v13 = (volatile signed __int32 *)*((_QWORD *)this + 1);
      *((_WORD *)this + 17) = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
      v14 = _InterlockedExchangeAdd(v13, 1u);
      v15 = -1LL;
      v16 = *((_QWORD *)this + 3) + 80LL * *((unsigned __int16 *)this + 17);
      *(_DWORD *)(v16 + 4) = v14 + 1;
      v17 = v16 + 16;
      v18 = v16 + 32;
      *(_DWORD *)(v16 + 8) = *((_DWORD *)a2 + 1);
      v19 = v16 + 56;
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_WORD *)(v16 + 24) = *((_WORD *)a2 + 28);
      *(_BYTE *)(v16 + 26) = *(_BYTE *)a2;
      *(_QWORD *)(v16 + 32) = 0LL;
      *(_QWORD *)(v16 + 40) = *((_QWORD *)a2 + 16);
      *(_QWORD *)(v16 + 48) = *((_QWORD *)a2 + 17);
      *(_QWORD *)(v16 + 56) = 0LL;
      v20 = *((_QWORD *)a2 + 6);
      if ( v20 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( *(_BYTE *)(v20 + v22) );
        v21 = v22 + 1;
      }
      else
      {
        v21 = 1LL;
      }
      v23 = *((_QWORD *)a2 + 15);
      if ( v23 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( *(_BYTE *)(v23 + v24) );
        v12 = v24 + 1;
      }
      v25 = *((_QWORD *)a2 + 2);
      if ( v25 )
      {
        do
          ++v15;
        while ( *(_WORD *)(v25 + 2 * v15) );
        v26 = 2 * v15 + 2;
      }
      else
      {
        v26 = 2LL;
      }
      v27 = v21 + v26 + v12;
      if ( !*(_QWORD *)(v16 + 64) || *(_QWORD *)(v16 + 72) < v27 )
      {
        v28 = GetProcessHeap();
        v29 = HeapAlloc(v28, 8u, v27);
        if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
        {
          v30 = GetProcessHeap();
          ((void (__fastcall *)(HANDLE, LPVOID))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v30, v29);
        }
        if ( v29 )
        {
          v31 = GetProcessHeap();
          HeapFree(v31, 0, *(LPVOID *)(v16 + 64));
          *(_QWORD *)(v16 + 64) = v29;
          *(_QWORD *)(v16 + 72) = v27;
        }
      }
      v32 = *(_QWORD *)(v16 + 64);
      if ( v32 )
      {
        v33 = v32 + *(_QWORD *)(v16 + 72);
        v34 = wil::details::WriteResultString<char const *>(v32, v33, *((_QWORD *)a2 + 6), v17);
        v35 = wil::details::WriteResultString<char const *>(v34, v33, *((_QWORD *)a2 + 15), v18);
        v36 = (void *)wil::details::WriteResultString<wchar_t const *>(v35, v33, *((_QWORD *)a2 + 2), v19);
        memset_0(v36, 0, v33 - (_QWORD)v36);
      }
    }
    else
    {
      v11 = v2 + 4;
      while ( *(v11 - 1) <= *((_DWORD *)this + 4) || *v11 != *((_DWORD *)a2 + 1) )
      {
        v11 += 20;
        if ( v11 - 2 == v10 )
          goto LABEL_16;
      }
    }
  }
}
