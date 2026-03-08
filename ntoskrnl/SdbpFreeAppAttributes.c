/*
 * XREFs of SdbpFreeAppAttributes @ 0x140A4E0CC
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x1407A1D98 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x1404117B8 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     AslFree @ 0x140A51598 (AslFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpFreeAppAttributes(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rsi
  unsigned __int16 *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  void *v11; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    v2 = 0LL;
    if ( v1 )
    {
      while ( 1 )
      {
        v4 = 0LL;
        if ( v2 < v1 )
        {
          v5 = *(_QWORD *)(a1 + 8) * v2;
          if ( !is_mul_ok(*(_QWORD *)(a1 + 8), v2)
            || (v6 = *(_QWORD *)(a1 + 40), v4 = (unsigned __int16 *)(v6 + v5), v6 + v5 < v6) )
          {
            v4 = 0LL;
          }
        }
        IsEnabledDeviceUsage = Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage();
        v8 = *v4;
        if ( IsEnabledDeviceUsage )
          break;
        LOWORD(v8) = v8 - 24617;
        if ( (unsigned __int16)v8 <= 2u )
          goto LABEL_13;
LABEL_14:
        v1 = *(_QWORD *)(a1 + 16);
        if ( ++v2 >= v1 )
          goto LABEL_15;
      }
      v9 = (unsigned __int16)v8;
      if ( (unsigned __int16)(v8 - 24593) > 0x37u
        || (v10 = 0x82000007000001LL, LOWORD(v9) = v8 - 24593, !_bittest64(&v10, v9)) )
      {
        if ( (_WORD)v8 != 24577 )
          goto LABEL_14;
      }
LABEL_13:
      AslFree(v8, *((_QWORD *)v4 + 1));
      goto LABEL_14;
    }
LABEL_15:
    v11 = *(void **)(a1 + 40);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x72615452u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
