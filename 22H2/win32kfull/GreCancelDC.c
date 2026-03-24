/*
 * XREFs of GreCancelDC @ 0x1C029F410
 * Callers:
 *     NtGdiCancelDC @ 0x1C02ADC60 (NtGdiCancelDC.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0137884 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C016C520 (--0DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreCancelDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v11[7]; // [rsp+20h] [rbp-38h] BYREF

  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  DCOBJA::DCOBJA((DCOBJA *)v11);
  v5 = 1;
  LOBYTE(v6) = 1;
  v7 = (__int64 *)HmgShareLockCheck(a1, v6);
  v11[0] = v7;
  if ( v7 )
  {
    v8 = v7[62];
    if ( v8 )
      *(_DWORD *)(v8 + 112) |= 0x40000000u;
  }
  else
  {
    v5 = 0;
  }
  DCOBJA::~DCOBJA(v11);
  GreReleaseHmgrSemaphore(v9);
  return v5;
}
