/*
 * XREFs of HalpInitializeMce @ 0x140A87FF0
 * Callers:
 *     HalpInitializeErrSrc @ 0x140A87F30 (HalpInitializeErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     HalpInitializeGhesRecovery @ 0x1403A39F0 (HalpInitializeGhesRecovery.c)
 *     HalpMceInitializeRecovery @ 0x1403B0B94 (HalpMceInitializeRecovery.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HalpMcaExtendedLogInitialize @ 0x14050110C (HalpMcaExtendedLogInitialize.c)
 *     HalpMceInit @ 0x140A87B68 (HalpMceInit.c)
 *     HalpMceInitProcessor @ 0x140A87C98 (HalpMceInitProcessor.c)
 *     HalpMcaSetFeatureFlags @ 0x140A8E900 (HalpMcaSetFeatureFlags.c)
 *     HalpHandlePreviousMcaErrors @ 0x140A91F70 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140A920B0 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 */

__int64 __fastcall HalpInitializeMce(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // edi
  ULONG ActiveProcessorCount; // ebp
  int *v12; // rsi
  unsigned int v13; // edx
  struct _GROUP_AFFINITY *v14; // rdx
  __int64 i; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-20h] BYREF

  v17 = 0LL;
  Affinity = 0LL;
  v19 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      HalpMceErrorSourceId = a2[7];
      HalpMceErrorSource = a2;
      HalpMceInit((__int64)a2);
      if ( HalpMcaExtendedLoggingSupported )
        HalpMcaExtendedLogInitialize();
      if ( !PshedIsSystemWheaEnabled() )
      {
        LOBYTE(v7) = HalpMcaBanksValidOnBoot != 0;
        HalpHandlePreviousMcaErrors(v7);
      }
      _InterlockedOr(v16, 0);
      if ( (unsigned __int8)PshedInitAvailable(v7, v6, v8, v9, v17) )
      {
        PshedInitGlobal();
        v10 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          v12 = KiProcessorIndexToNumberMappingTable;
          do
          {
            v13 = *v12;
            Affinity.Reserved[1] = 0;
            Affinity.Reserved[2] = 0;
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v13 >> 6);
            Affinity.Mask = 1LL << (v13 & 0x3F);
            if ( v10 )
              v14 = 0LL;
            else
              v14 = (struct _GROUP_AFFINITY *)&v19;
            KeSetSystemGroupAffinityThread(&Affinity, v14);
            for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
              PshedInitProc(*(unsigned int *)(i + 172));
            ++v10;
            ++v12;
          }
          while ( v10 < ActiveProcessorCount );
        }
      }
      HalpMcaWheaReady = 1;
    }
    else
    {
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      HalpMceInitProcessor((__int64)a2, v17);
      HalpHandlePreviousMcaErrorsOnProcessor(0LL, 0LL, v17);
    }
  }
  else
  {
    HalpMceErrorSourceId = a2[7];
    HalpMceErrorSource = a2;
    HalpMcaSetFeatureFlags(a1, a2, a3, a4, v17);
    HalpInitializeGhesRecovery();
    HalpMceInitializeRecovery();
    HalpMceInit((__int64)a2);
  }
  return 0LL;
}
