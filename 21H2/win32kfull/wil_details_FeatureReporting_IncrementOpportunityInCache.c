/*
 * XREFs of wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x1C01C93F4
 * Callers:
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C00C5710 (wil_details_FeatureReporting_RecordUsageInCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_IncrementOpportunityInCache(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  signed __int32 v4; // ecx
  BOOL v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r8d
  int v10; // r10d
  unsigned __int64 v11; // r8
  __int64 result; // rax

  v4 = Feature_Win32kBugcheckOnFailedBCryptgenRandom__private_reporting;
  v6 = a2 == 5;
  while ( 1 )
  {
    a4[1] = 0;
    v7 = v4 | 1;
    if ( (((v4 | 1u) >> 22) & 1) != v6 )
    {
      if ( ((v7 >> 15) & 0x7F) != 0 )
      {
        a4[1] = (v7 >> 15) & 0x7F;
        v8 = 5;
        if ( a2 != 1 )
          v8 = 1;
        v7 = v4 & 0xFFC07FFE | 1;
        a4[2] = v8;
      }
      v9 = 0;
      if ( a2 == 5 )
        v9 = 0x400000;
      v7 = v7 & 0xFFBFFFFF | v9;
    }
    v10 = (v7 >> 15) & 0x7F;
    v11 = (unsigned int)(v10 + 1);
    if ( v11 > 0x7F || v11 < ((v7 >> 15) & 0x7F) )
    {
      LODWORD(v11) = 1;
      a4[2] = a2;
      a4[1] = v10;
    }
    result = (unsigned int)_InterlockedCompareExchange(
                             &Feature_Win32kBugcheckOnFailedBCryptgenRandom__private_reporting,
                             v7 ^ (v7 ^ ((_DWORD)v11 << 15)) & 0x3F8000,
                             v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  a4[4] = 0;
  *a4 = (v4 & 1) == 0;
  return result;
}
