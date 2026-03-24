/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C017AC54
 * Callers:
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C017B444 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C017DA1C (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0269654 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2)
{
  DXGGLOBAL *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v2 = (DXGGLOBAL *)operator new[](0x4A720uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = DXGGLOBAL::DXGGLOBAL(v2);
  DXGGLOBAL::m_pGlobal = v2;
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    v8 = -1073741801;
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
    return v8;
  }
  result = DXGGLOBAL::Initialize(v2);
  v8 = result;
  if ( (int)result < 0 )
  {
    DXGGLOBAL::DestroyGlobal();
    return v8;
  }
  return result;
}
