/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1C01D3C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014CD4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01D3D44 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C01D4104 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C033E84C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(ULONG64 a1)
{
  _DWORD *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  int v6; // ebx
  struct DXGPROCESS *Process; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  void *v11[2]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v12; // [rsp+38h] [rbp-80h]
  _BYTE v13[80]; // [rsp+50h] [rbp-68h] BYREF

  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v2 = (_DWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (_DWORD *)MmUserProbeAddress;
  v3 = (unsigned int)*v2;
  if ( *v2 >= 0x20u )
  {
    if ( *v2 > 0x20u )
      v3 = 32LL;
    v5 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    memmove(v11, v5, v3);
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v13, v11[1], 0x1000u);
    v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v13, 0);
    if ( v6 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v13);
      *(_QWORD *)&v12 = *((_QWORD *)Process + 56);
      v8 = *((_QWORD *)Process + 57);
      *((_QWORD *)&v12 + 1) = v8;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v13);
      v9 = (_QWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v9 = (_QWORD *)MmUserProbeAddress;
      *v9 = v12;
      v10 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v10 = (_QWORD *)MmUserProbeAddress;
      *v10 = v8;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v11[1]);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v13);
      return (unsigned int)v6;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 811LL);
    return 3221225485LL;
  }
}
