/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x1800C9638
 * Callers:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAI@Z @ 0x1800C9300 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

const void *__fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  int v1; // esi
  __int128 v2; // xmm0
  char v3; // di
  int v4; // r14d
  unsigned int v5; // r15d
  __int64 v7; // rcx
  const void *result; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-60h]
  __int128 Buf1; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-38h]
  __int128 Buf2; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]

  v1 = 0;
  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  v4 = 0;
  v13 = 0;
  v10 = 0LL;
  v5 = 0;
  Buf1 = 0LL;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 913);
    if ( v5 >= (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)this + 914) - v7) >> 5)) )
      break;
    v9 = *(_QWORD *)(224LL * v5 + v7 + 16);
    Buf2 = 0LL;
    v15 = 0LL;
    v16 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 392LL))(v9, &Buf2) )
    {
      if ( v3 && memcmp_0(&Buf1, &Buf2, 0x1CuLL) )
        goto LABEL_4;
      v2 = Buf2;
      v4 = 1;
      v1 = v16;
      v3 = 1;
      v10 = Buf2;
      v13 = v16;
      Buf1 = Buf2;
      v12 = v15;
    }
    else
    {
      v2 = v10;
    }
    ++v5;
  }
  if ( !v3 )
  {
LABEL_4:
    *((_DWORD *)this + 3) = 0;
    result = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 10) = 0;
    return result;
  }
  if ( *((_DWORD *)this + 3) == v4 )
  {
    if ( !memcmp_0(&Buf1, (char *)this + 16, 0x1CuLL) )
      return 0LL;
    v2 = v10;
  }
  *((_OWORD *)this + 1) = v2;
  result = (char *)this + 16;
  *((_DWORD *)this + 3) = v4;
  *((_QWORD *)this + 4) = v12;
  *((_DWORD *)this + 10) = v1;
  return result;
}
