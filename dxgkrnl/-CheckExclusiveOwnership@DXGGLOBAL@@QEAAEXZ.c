/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C0221EB6
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C0222190 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C0220466 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 */

char __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rdi
  char v3; // si
  _QWORD *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  ADAPTER_DISPLAY *v7; // r11
  char v9[8]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-71h]
  char v11; // [rsp+38h] [rbp-69h]
  _BYTE v12[24]; // [rsp+40h] [rbp-61h] BYREF
  _BYTE v13[144]; // [rsp+58h] [rbp-49h] BYREF

  v1 = (_QWORD **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v2 = *v1;
  v3 = 1;
  while ( 1 )
  {
    do
    {
      if ( v2 == v1 || !v2 )
      {
        v3 = 0;
        goto LABEL_20;
      }
      v4 = v2;
      v2 = (_QWORD *)*v2;
      _m_prefetchw(v4 + 3);
      v5 = v4[3];
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64(v4 + 3, v5 + 1, v5);
        if ( v6 == v5 )
        {
          LOBYTE(v5) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v5 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, (struct DXGADAPTER *const)v4, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
    if ( v4[365] )
      break;
LABEL_14:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  }
  v10 = v4;
  v11 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *((_DWORD *)v4 + 50) != 1
    || !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)v4[365], D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE)
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(v7, D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI) )
  {
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    goto LABEL_14;
  }
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
LABEL_20:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v3;
}
