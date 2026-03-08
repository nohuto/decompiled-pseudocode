/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x140247AA0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140247A20 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140247C8C (SepSidFromProcessProtection.c)
 *     RtlSidDominatesForTrust @ 0x140247D00 (RtlSidDominatesForTrust.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1406D657C (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406D6630 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, int a2, __int64 *a3, _BYTE *a4, __int64 *a5)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r11
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r11
  _QWORD *v18; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v20 = a2;
  v5 = a5;
  *a3 = 0LL;
  *a4 = 0;
  v21 = 0;
  *v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  LOBYTE(v20) = 0;
  if ( a1 == -4 )
  {
    v16 = PsReferencePrimaryTokenWithTag(CurrentThread->ApcState.Process, 1953654867LL);
LABEL_6:
    *a3 = v16;
    return 0LL;
  }
  if ( a1 != -5 )
  {
    v9 = (_QWORD *)PsReferenceEffectiveToken(
                     (_DWORD)CurrentThread,
                     1953654867,
                     (unsigned int)&v19,
                     (unsigned int)&a5,
                     (__int64)&v21,
                     (__int64)&v20);
    v12 = v9;
    if ( v19 == 2 && !v21 )
    {
      ObfDereferenceObjectWithTag(v9, 0x74726853u);
      return 3221225638LL;
    }
    goto LABEL_4;
  }
  v18 = (_QWORD *)PsReferenceImpersonationTokenEx(CurrentThread, 0LL, 1953654867LL, &v19, &a5, &v21, &v20);
  v12 = v18;
  if ( v18 )
  {
    if ( !v21 )
    {
      ObfDereferenceObjectWithTag(v18, 0x746C6644u);
      return 3221225638LL;
    }
LABEL_4:
    v13 = v12[138];
    *a4 = 0;
    *v5 = 0LL;
    LOBYTE(a5) = 0;
    v14 = SepSidFromProcessProtection(&v20, v10, v11, v13);
    RtlSidDominatesForTrust(v14, v15, &a5);
    if ( !(_BYTE)a5 )
    {
      *a4 = 1;
      *v5 = v14;
    }
    goto LABEL_6;
  }
  return 3221225596LL;
}
