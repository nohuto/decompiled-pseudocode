/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x14022CA90
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     HalpTimerMeasureFrequencies @ 0x140376B78 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  char v4; // r13
  __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  unsigned int v14; // ebx
  unsigned __int64 v15; // r14
  __int64 v16; // r13
  __int64 InternalData; // rax
  unsigned __int64 v18; // rax
  unsigned int i; // ecx
  int v20; // eax
  unsigned int v21; // edx
  char v22; // [rsp+20h] [rbp-78h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+38h] [rbp-60h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+90h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  v22 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) != 0
    && (unsigned int)KeNumberProcessors_0 >= 2
    && KeGetCurrentIrql() < 2u
    && (v26 & 0x200) != 0
    && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
  {
    v4 = 1;
    v22 = 1;
    v21 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v21 >> 6);
    Affinity.Mask = 1LL << (v21 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    v8 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    v8 = *(_QWORD *)(a1 + 72);
  v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v8);
  v10 = __readcr2();
  __writecr2(v10);
  v11 = v9;
  v12 = *(_QWORD *)(a1 + 192) * a2 + 9999999;
  v24 = 1LL << *(_DWORD *)(a1 + 220);
  v13 = 0LL;
  v14 = 0;
  v15 = v12 / 0x989680 + 1;
  if ( v15 )
  {
    v16 = v24;
    do
    {
      if ( a3 )
      {
        if ( (++v14 & dword_140C6211C) == 0 && qword_140C62120 )
          qword_140C62120(v14);
        else
          _mm_pause();
      }
      else
      {
        for ( i = 0; i < 0xC8; ++i )
        {
          _mm_pause();
          v20 = i * HalpGlobalVolatile;
          HalpGlobalVolatile = v20;
        }
      }
      InternalData = HalpTimerGetInternalData(a1);
      v18 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(InternalData);
      if ( v18 < v11 )
        v13 += v16;
      v11 = v18;
    }
    while ( v18 + v13 - v9 < v15 );
    v4 = v22;
  }
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
