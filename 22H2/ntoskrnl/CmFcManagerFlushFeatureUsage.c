/*
 * XREFs of CmFcManagerFlushFeatureUsage @ 0x14067F5CC
 * Callers:
 *     RtlFlushFeatureUsage @ 0x14067EE10 (RtlFlushFeatureUsage.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x14067F890 (CmFcManagerUnregisterFeatureUsageProvider.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1403481B0 (ExBlockOnAddressPushLock.c)
 *     CmpWorkItemQueueWork @ 0x140374BF0 (CmpWorkItemQueueWork.c)
 *     CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x14067FC2C (CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement.c)
 */

void __fastcall CmFcManagerFlushFeatureUsage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF

  v3 = dword_140C146C0;
  if ( a3 )
  {
    v6 = (volatile signed __int32 *)(a3 + 104);
    v7 = *(_DWORD *)(a3 + 104);
    v8 = v7 >> 2;
    LOBYTE(v8) = (v7 & 4) != 0;
    LOBYTE(a1) = v7 & 1;
    v9 = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(a1, v8);
    if ( v9 >= 2 )
    {
      _InterlockedOr(v6, 2u);
      _InterlockedOr(&dword_140C146C0, 8u);
      CmpWorkItemQueueWork(&stru_140C14600);
    }
    if ( (a2 & 1) != 0 && v9 )
    {
      v10 = v7 >> 2;
      while ( 1 )
      {
        LODWORD(v15) = *v6;
        if ( ((((unsigned int)v15 >> 2) - v10) & 0x3FFFFFFF) >= v9 )
          break;
        ExBlockOnAddressPushLock((volatile __int64 *)(a3 + 112), v6, &v15, 4uLL, 0LL);
      }
    }
  }
  else
  {
    v11 = (unsigned int)dword_140C146C0 >> 5;
    LOBYTE(a1) = dword_140C146C0 & 1;
    LOBYTE(v11) = (dword_140C146C0 & 0x20) != 0;
    v12 = CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(a1, v11);
    if ( v12 >= 2 )
    {
      _InterlockedOr(&dword_140C146C0, 0x10u);
      CmpWorkItemQueueWork(&stru_140C14600);
    }
    if ( (a2 & 2) != 0 && byte_140C146E8 )
    {
      v13 = (v12 + (v3 >> 5)) & 0x7FFFFFF;
      while ( 1 )
      {
        LODWORD(v15) = dword_140C146C4;
        if ( ((dword_140C146C4 - v13) & 0x7FFFFFFu) < 0x4000000 )
          break;
        ExBlockOnAddressPushLock(&qword_140C14560, &dword_140C146C4, &v15, 4uLL, 0LL);
      }
    }
    else if ( (a2 & 1) != 0 && v12 )
    {
      v14 = v3 >> 5;
      while ( 1 )
      {
        LODWORD(v15) = dword_140C146C0;
        if ( ((((unsigned int)dword_140C146C0 >> 5) - v14) & 0x7FFFFFF) >= v12 )
          break;
        ExBlockOnAddressPushLock((volatile __int64 *)&xmmword_140C14550 + 1, &dword_140C146C0, &v15, 4uLL, 0LL);
      }
    }
  }
}
