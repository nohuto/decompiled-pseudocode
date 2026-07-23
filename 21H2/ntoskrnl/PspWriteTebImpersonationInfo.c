/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1406500A0
 * Callers:
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     PsRestoreImpersonation @ 0x14071D920 (PsRestoreImpersonation.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _KPROCESS *v5; // r14
  int v6; // eax
  bool v7; // dl
  BOOL v8; // ecx
  unsigned __int64 v9; // rax
  __int16 v10; // r8
  signed __int32 v12[8]; // [rsp+0h] [rbp-98h] BYREF
  char v13; // [rsp+20h] [rbp-78h]
  bool v14; // [rsp+21h] [rbp-77h]
  _DWORD *v15; // [rsp+28h] [rbp-70h]
  _KPROCESS *v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  _OWORD v18[3]; // [rsp+48h] [rbp-50h] BYREF

  v17 = a1;
  memset(v18, 0, sizeof(v18));
  v4 = *(_DWORD **)(a1 + 240);
  v15 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v16 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v13 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0, (__int64)v18);
      v13 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1272)) )
    {
      do
      {
        v6 = *(_DWORD *)(a1 + 1296) & 8;
        v7 = v6 != 0;
        v14 = v6 != 0;
        v8 = v6 != 0;
        v4[1511] = v8;
        v4[1530] = 0;
        v9 = v5[1].AffinityPadding[10];
        if ( v9 )
        {
          v10 = *(_WORD *)(v9 + 8);
          if ( v10 == 332 || v10 == 452 )
          {
            v4[3047] = v8;
            v4[3057] = 0;
          }
        }
        _InterlockedOr(v12, 0);
      }
      while ( v7 != ((*(_DWORD *)(a1 + 1296) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1272));
    }
    if ( v13 )
      KiUnstackDetachProcess((__int64)v18, 0LL);
  }
  return 0LL;
}
