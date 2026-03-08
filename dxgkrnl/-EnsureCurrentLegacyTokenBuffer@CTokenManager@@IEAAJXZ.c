/*
 * XREFs of ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C001BB08
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001B9FC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0017684 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::EnsureCurrentLegacyTokenBuffer(CTokenManager *this)
{
  __int64 result; // rax
  _QWORD *v2; // r8
  CTokenManager *v3; // rdx
  __int64 v4; // r10

  result = 0LL;
  if ( !*((_QWORD *)this + 24) )
  {
    v2 = (_QWORD *)((char *)this + 168);
    v3 = (CTokenManager *)*((_QWORD *)this + 21);
    if ( v3 == (CTokenManager *)((char *)this + 168) )
    {
      return CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 24);
    }
    else
    {
      if ( *((_QWORD **)v3 + 1) != v2 || (v4 = *(_QWORD *)v3, *(CTokenManager **)(*(_QWORD *)v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      *(_QWORD *)(v4 + 8) = v2;
      --*((_DWORD *)this + 46);
      *((_QWORD *)this + 24) = v3;
    }
  }
  return result;
}
