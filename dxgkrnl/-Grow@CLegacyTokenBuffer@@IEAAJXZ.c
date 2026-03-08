/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0077B74
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0017FA0 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C001BB44 (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Grow(CLegacyTokenBuffer *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  CLegacyTokenBuffer **v4; // rdx

  v2 = -1073741801;
  v3 = operator new[](0x818uLL, 0x62744D54u, 256LL);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 2068) = 0;
    *(_QWORD *)(v3 + 8) = v3;
    *(_QWORD *)v3 = v3;
    v4 = (CLegacyTokenBuffer **)*((_QWORD *)this + 3);
    if ( *v4 != (CLegacyTokenBuffer *)((char *)this + 16) )
      __fastfail(3u);
    *(_QWORD *)v3 = (char *)this + 16;
    v2 = 0;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = (CLegacyTokenBuffer *)v3;
    *((_QWORD *)this + 3) = v3;
    *((_QWORD *)this + 262) = v3 + 20;
    *((_QWORD *)this + 261) = v3;
    *((_DWORD *)this + 526) = 2048;
  }
  return v2;
}
