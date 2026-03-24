/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1406D4040
 * Callers:
 *     PsRestoreImpersonation @ 0x140653BD0 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // rsi
  _KPROCESS *v7; // r14
  int v8; // eax
  bool v9; // dl
  BOOL v10; // ecx
  unsigned __int64 v11; // rax
  __int16 v12; // r8
  signed __int32 v14[8]; // [rsp+0h] [rbp-98h] BYREF
  char v15; // [rsp+20h] [rbp-78h]
  bool v16; // [rsp+21h] [rbp-77h]
  _DWORD *v17; // [rsp+28h] [rbp-70h]
  _KPROCESS *v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  _OWORD v20[3]; // [rsp+48h] [rbp-50h] BYREF

  v19 = a1;
  memset(v20, 0, sizeof(v20));
  v6 = *(_DWORD **)(a1 + 240);
  v17 = v6;
  if ( v6 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v7 = *(_KPROCESS **)(a1 + 544);
    v18 = v7;
    if ( *(_KPROCESS **)(a2 + 184) == v7 )
    {
      v15 = 0;
    }
    else
    {
      KiStackAttachProcess(v7, 0LL, (__int64)v20, a4);
      v15 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1272)) )
    {
      do
      {
        v8 = *(_DWORD *)(a1 + 1296) & 8;
        v9 = v8 != 0;
        v16 = v8 != 0;
        v10 = v8 != 0;
        v6[1511] = v10;
        v6[1530] = 0;
        v11 = v7[1].AffinityPadding[10];
        if ( v11 )
        {
          v12 = *(_WORD *)(v11 + 8);
          if ( v12 == 332 || v12 == 452 )
          {
            v6[3047] = v10;
            v6[3057] = 0;
          }
        }
        _InterlockedOr(v14, 0);
      }
      while ( v9 != ((*(_DWORD *)(a1 + 1296) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1272));
    }
    if ( v15 )
      KiUnstackDetachProcess((__int64)v20, 0);
  }
  return 0LL;
}
