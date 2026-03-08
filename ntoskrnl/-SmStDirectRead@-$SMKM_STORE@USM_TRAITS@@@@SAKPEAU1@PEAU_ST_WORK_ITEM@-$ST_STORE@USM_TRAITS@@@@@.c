/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14045CFC8
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402E6D80 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1403566B4 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(union _SLIST_HEADER *a1, __int128 *a2)
{
  PRKPROCESS *p_Region; // r8
  unsigned int v3; // ebx
  PSLIST_ENTRY Context; // rax
  __int64 v7; // r14
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v13; // [rsp+40h] [rbp-29h]
  __int128 v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+60h] [rbp-9h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp+7h] BYREF

  p_Region = (PRKPROCESS *)&a1[411].Region;
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 0;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  v13 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *p_Region )
  {
    KeStackAttachProcess(*p_Region, &ApcState);
    v3 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext((__int64)a1);
    v7 = (__int64)Context;
    if ( Context )
    {
      v8 = *a2;
      BugCheckParameter3[0] = (ULONG_PTR)a1;
      v14 = v8;
      v9 = a2[1];
      BugCheckParameter3[1] = (ULONG_PTR)a2;
      *(_QWORD *)&v13 = Context;
      v15 = v9;
      if ( (int)KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
                  (ULONG_PTR)BugCheckParameter3,
                  0x2000,
                  0,
                  0LL) < 0 )
      {
        ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v7);
        v3 = 3;
      }
      else if ( DWORD2(v13) )
      {
        v3 = 6;
      }
      else
      {
        v10 = v15;
        *a2 = v14;
        a2[1] = v10;
      }
    }
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  return v3 >> 2;
}
