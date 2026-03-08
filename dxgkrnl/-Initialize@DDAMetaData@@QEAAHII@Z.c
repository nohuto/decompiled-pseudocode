/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C032D758
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C032D884 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01DC800 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rbx

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v2 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
  v3 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v2, 0x124u, 0);
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 4) = v3;
  if ( !v3 || !*v3 )
    return 0LL;
  v4 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v4, 0x60u, 0);
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 6) = v5;
  if ( !v5 || !*v5 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    WdLogSingleEntry1(2LL, 262LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not get Win32k functions!!",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  return 1LL;
}
