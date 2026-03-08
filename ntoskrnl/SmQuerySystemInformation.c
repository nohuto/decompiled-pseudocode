/*
 * XREFs of SmQuerySystemInformation @ 0x1405CB680
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140359FF8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405BD920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SystemInformation; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6, 0, sizeof(v6));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 6728);
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 2008), 0, (__int64)&v6);
  SystemInformation = ZwQuerySystemInformation(182LL, a3);
  KiUnstackDetachProcess(&v6);
  return SystemInformation;
}
