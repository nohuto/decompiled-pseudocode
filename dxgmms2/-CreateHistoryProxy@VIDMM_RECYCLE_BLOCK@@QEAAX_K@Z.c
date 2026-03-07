void __fastcall VIDMM_RECYCLE_BLOCK::CreateHistoryProxy(VIDMM_RECYCLE_BLOCK *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  const wchar_t *v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rax

  v4 = operator new(56LL, 0x31316956u, 256LL);
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_BYTE *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 17) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C00767F4);
    v5 = 1059LL;
    WdLogSingleEntry1(6LL, 1059LL);
    v6 = L"Couldn't allocate a history tracking structure for a process heap block";
LABEL_6:
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      v6,
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return;
  }
  v7 = 288 * a2;
  if ( !is_mul_ok(2 * a2, 0x90uLL) )
    v7 = -1LL;
  **((_QWORD **)this + 17) = operator new[](v7, 0x31316956u, 256LL);
  v8 = (_QWORD *)*((_QWORD *)this + 17);
  if ( !*v8 )
  {
    if ( v8 )
      ExFreePoolWithTag(*((PVOID *)this + 17), 0);
    *((_QWORD *)this + 17) = 0LL;
    _InterlockedIncrement(&dword_1C00767F4);
    v5 = 1075LL;
    WdLogSingleEntry1(6LL, 1075LL);
    v6 = L"Couldn't allocate the history arrays for a process heap block";
    goto LABEL_6;
  }
  v8[6] = a2;
  *(_QWORD *)(*((_QWORD *)this + 17) + 24LL) = **((_QWORD **)this + 17) + 144 * a2;
}
