/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02B6200
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v3; // rdi
  void **v4; // rcx
  int v5; // edx
  const wchar_t *v6; // r9
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 i; // rbx
  _BYTE v12[24]; // [rsp+50h] [rbp-18h] BYREF

  v3 = (__int64)this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v4 = *(void ***)(v3 + 344);
  if ( a2 )
  {
    if ( v4 )
    {
      v3 = 8680LL;
      WdLogSingleEntry1(2LL, 8680LL);
      v5 = 0x40000;
      v6 = L"Invalid modes already activated.";
      v7 = -1073740008;
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, v5, -1, (__int64)v6, v3, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_16;
    }
    v8 = 24LL * *(unsigned int *)(v3 + 96);
    if ( !is_mul_ok(*(unsigned int *)(v3 + 96), 0x18uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL);
    *(_QWORD *)(v3 + 344) = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, v3);
      v5 = 262145;
      v6 = L"Adapter 0x%I64x: Out of memory allocating m_pCachedInvalidDisplayModeList";
      v7 = -1073741801;
      goto LABEL_8;
    }
  }
  else if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 96); i = (unsigned int)(i + 1) )
    {
      if ( v4[3 * i + 1] )
      {
        operator delete(v4[3 * i + 1]);
        *(_QWORD *)(*(_QWORD *)(v3 + 344) + 24 * i + 8) = 0LL;
        v4 = *(void ***)(v3 + 344);
      }
    }
    operator delete(v4);
    *(_QWORD *)(v3 + 344) = 0LL;
  }
  v7 = 0;
LABEL_16:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v7;
}
