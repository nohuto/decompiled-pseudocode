/*
 * XREFs of wil_details_RecordCachedUsage @ 0x180055388
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18002F548 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RecordCachedUsage(unsigned int a1, __int64 a2)
{
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  __int64 result; // rax
  unsigned __int32 v7; // edx
  int v8; // edx
  unsigned __int32 v9; // ecx
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-19h]
  _DWORD v14[9]; // [rsp+40h] [rbp-9h] BYREF
  int v15; // [rsp+64h] [rbp+1Bh]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  int v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+74h] [rbp+2Bh]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  v14[0] = 2;
  v14[1] = v5 & 1;
  v14[2] = 6;
  v14[3] = ((unsigned __int8)v5 >> 1) & 1;
  v14[4] = 3;
  v14[5] = ((unsigned __int8)v5 >> 2) & 1;
  v14[6] = 7;
  result = v5 >= 8;
  v14[8] = 0;
  v14[7] = v5 >= 8;
  if ( (v4 & 0x4000) != 0 )
  {
    v15 = 0;
    v7 = v4 >> 5;
  }
  else
  {
    v7 = v4 >> 5;
    result = (v4 >> 5) & 0x1FF;
    v15 = (v4 >> 5) & 0x1FF;
  }
  v16 = 4;
  if ( (v4 & 0x4000) != 0 )
    v17 = v7 & 0x1FF;
  else
    v17 = 0;
  v18 = 1;
  v8 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    v19 = 0;
    v9 = v4 >> 15;
  }
  else
  {
    v9 = v4 >> 15;
    result = v9 & 0x7F;
    v19 = v9 & 0x7F;
  }
  v20 = 5;
  if ( v8 )
    v21 = v9 & 0x7F;
  else
    v21 = 0;
  v10 = 0;
  v11 = (__int64 *)v14;
  do
  {
    v13 = *v11;
    if ( !HIDWORD(*v11) )
      goto LABEL_22;
    result = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      v12 = HIDWORD(*v11);
    }
    else
    {
      result = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_22;
      v12 = HIDWORD(v13);
    }
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))result)(a1, (unsigned int)v13, v12, 0LL);
LABEL_22:
    ++v10;
    ++v11;
  }
  while ( v10 < 8 );
  return result;
}
