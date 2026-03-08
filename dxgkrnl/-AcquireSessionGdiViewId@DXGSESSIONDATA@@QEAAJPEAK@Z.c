/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1C035008C
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x1C0218CEC (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  signed __int32 v4; // ecx
  signed __int32 v5; // r14d
  signed __int32 v6; // esi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rax
  void *v11; // rbp
  unsigned int v12; // ebx
  const void *v13; // rdx
  _BYTE v15[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    v5 = v4;
    if ( v4 == -2 )
    {
      v12 = -1073741756;
      WdLogSingleEntry1(2LL, -1073741756LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Exceeded the maximun GDI view ID, returning 0x%I64x.",
        -1073741756LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return v12;
    }
    v6 = v4 + 1;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v4 + 1, v4);
  }
  while ( v4 + 1 != v6 );
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 19088), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v7 = *((_DWORD *)this + 4786);
  if ( *((_DWORD *)this + 4785) + *((_DWORD *)this + 4784) >= v7 )
  {
    if ( v7 )
      v8 = 2 * v7;
    else
      v8 = 16LL;
    *((_DWORD *)this + 4786) = v8;
    v9 = 4 * v8;
    if ( !is_mul_ok(v8, 4uLL) )
      v9 = -1LL;
    v10 = (void *)operator new[](v9, 0x4B677844u, 256LL);
    v11 = v10;
    if ( !v10 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v5, v6);
      WdLogSingleEntry1(6LL, *(unsigned int *)this);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Unable to allocate GDI View ID buffer for session 0x%I64x",
        *(unsigned int *)this,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_16;
    }
    v13 = (const void *)*((_QWORD *)this + 2394);
    if ( v13 )
    {
      memmove(v10, v13, 4LL * (unsigned int)(*((_DWORD *)this + 4785) + *((_DWORD *)this + 4784)));
      operator delete(*((void **)this + 2394));
    }
    *((_QWORD *)this + 2394) = v11;
  }
  *(_DWORD *)(*((_QWORD *)this + 2394) + 4LL * (unsigned int)(*((_DWORD *)this + 4785) + *((_DWORD *)this + 4784))) = v6;
  ++*((_DWORD *)this + 4785);
  v12 = 0;
  *a2 = v6;
LABEL_16:
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return v12;
}
