/*
 * XREFs of ExpPrepareToWakeFastResourceExclusive @ 0x140410920
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140410F34 (ExpReleaseFastResourceExclusiveSlow.c)
 * Callees:
 *     KeCaptureWaitChainHeadEx @ 0x1402D3E54 (KeCaptureWaitChainHeadEx.c)
 *     ExpUpdateLockWordForRelease @ 0x1404112C0 (ExpUpdateLockWordForRelease.c)
 */

__int64 __fastcall ExpPrepareToWakeFastResourceExclusive(__int64 a1, __int64 *a2, _QWORD *a3, _DWORD *a4, int *a5)
{
  __int64 v6; // r10
  _QWORD **v7; // rcx
  _QWORD *v9; // r14
  _DWORD *v10; // r9
  BOOL v11; // edi
  __int64 v12; // rdx
  int *v13; // rcx
  int v14; // eax
  bool v15; // zf
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = (_QWORD **)(a1 + 16);
  v17 = 0LL;
  v9 = a3;
  v10 = (_DWORD *)(a1 + 56);
  v11 = *v7 || *v10;
  if ( *v10 )
  {
    *a2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    v12 = (unsigned int)*v10;
    *v10 = 0;
  }
  else if ( *v7 )
  {
    KeCaptureWaitChainHeadEx(v7, a2, &v17);
    v6 = v17;
    v12 = 1LL;
  }
  else
  {
    *a2 = 0LL;
    v12 = 0LL;
  }
  v13 = a5;
  v14 = 0;
  *a4 = v12;
  *v9 = v6;
  *v13 = 0;
  if ( v11 )
  {
    v14 = 2;
    *v13 = 2;
  }
  v15 = v6 == 0;
  if ( v6 )
  {
    v12 = 0LL;
    *v13 = v14 | 1;
    v15 = v6 == 0;
  }
  LOBYTE(a3) = v15;
  return ExpUpdateLockWordForRelease(a1, v12, a3);
}
