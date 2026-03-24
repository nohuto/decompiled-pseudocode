/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140313730
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140267590 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14026D2EC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AA650 (KeExpandKernelStackAndCalloutEx.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140313878 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 Context; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v12; // xmm1
  __int128 Parameter; // [rsp+30h] [rbp-39h] BYREF
  __int128 v14; // [rsp+40h] [rbp-29h]
  __int128 v15; // [rsp+50h] [rbp-19h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _OWORD v17[3]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0LL;
  memset(v17, 0, sizeof(v17));
  v5 = 0;
  Parameter = 0LL;
  v14 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 6584) )
  {
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v17, a4);
    v5 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v4 = Context;
    if ( Context )
    {
      v9 = *a2;
      *(_QWORD *)&Parameter = a1;
      v15 = v9;
      v10 = a2[1];
      v5 = 3;
      *((_QWORD *)&Parameter + 1) = a2;
      *(_QWORD *)&v14 = Context;
      v16 = v10;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
             &Parameter,
             0x2000uLL,
             0,
             0LL) >= 0 )
      {
        v5 = 2;
        if ( DWORD2(v14) )
        {
          v5 = 6;
        }
        else
        {
          v12 = v16;
          *a2 = v15;
          a2[1] = v12;
        }
      }
    }
  }
  if ( (v5 & 1) != 0 )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v4);
  if ( (v5 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v17, 0);
  return v5 >> 2;
}
