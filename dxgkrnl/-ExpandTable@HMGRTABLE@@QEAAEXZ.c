/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C01CAA80
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  unsigned __int8 (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  unsigned __int64 v5; // rax
  void *v6; // rax
  void *v7; // rsi
  unsigned int v8; // r8d
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned __int8 result; // al

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    WdLogSingleEntry1(1LL, 63LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeCount == 0 || m_pEntryTable[m_FreeHandleListTail].NextFreeIndex == HMGRTABLE_INVALID_INDEX",
      63LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 4);
  v3 = v2 + g_HmgrTableSizeIncrement;
  if ( v2 + g_HmgrTableSizeIncrement < v2 )
    return 0;
  if ( v3 > 0xFFFFFF )
    return 0;
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( !(**v4)(v4, v3) )
      return 0;
  }
  v5 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v5 = -1LL;
  v6 = (void *)operator new[](v5, 0x4B677844u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)this, 16LL * *((unsigned int *)this + 4));
    operator delete(*(void **)this);
    v8 = *((_DWORD *)this + 4);
    *(_QWORD *)this = v7;
    v9 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
    if ( v8 < v3 )
    {
      v10 = 16LL * v8;
      do
      {
        v10 += 16LL;
        *(_DWORD *)(v10 + *(_QWORD *)this - 16) = ++v8;
        *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
        *(_DWORD *)(*(_QWORD *)this + v10 - 8) = *(_DWORD *)(*(_QWORD *)this + v10 - 8) & 0xFFFFFF9F | 0x20;
        *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
      }
      while ( v8 < v3 );
    }
    *(_DWORD *)(*(_QWORD *)this + 16LL * (v8 - 1)) = -16777216;
    if ( *((_DWORD *)this + 5) )
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
    else
      *((_DWORD *)this + 3) = 127;
    if ( v8 != v3 )
    {
      WdLogSingleEntry1(1LL, 130LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TableIndex == NewTableSize", 130LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_DWORD *)this + 4) = v3;
    result = 1;
    *((_DWORD *)this + 5) = v9;
  }
  else
  {
    operator delete(0LL);
    return 0;
  }
  return result;
}
