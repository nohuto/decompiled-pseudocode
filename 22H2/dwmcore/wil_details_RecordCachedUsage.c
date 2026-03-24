/*
 * XREFs of wil_details_RecordCachedUsage @ 0x1800E9648
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800E6178 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800E61F8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

void __fastcall wil_details_RecordCachedUsage(wil::details *this, __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  unsigned __int32 v6; // edx
  int v7; // edx
  unsigned __int32 v8; // ecx
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  _DWORD v11[9]; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  int v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+5Ch] [rbp-14h]

  v3 = (unsigned int)this;
  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  v11[0] = 2;
  v11[1] = v5 & 1;
  v11[2] = 6;
  v11[3] = ((unsigned __int8)v5 >> 1) & 1;
  v11[4] = 3;
  v11[5] = ((unsigned __int8)v5 >> 2) & 1;
  v11[6] = 7;
  v11[8] = 0;
  v11[7] = v5 >= 8;
  if ( (v4 & 0x4000) != 0 )
  {
    v12 = 0;
    v6 = v4 >> 5;
  }
  else
  {
    v6 = v4 >> 5;
    v12 = (v4 >> 5) & 0x1FF;
  }
  v13 = 4;
  if ( (v4 & 0x4000) != 0 )
    v14 = v6 & 0x1FF;
  else
    v14 = 0;
  v15 = 1;
  v7 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    v16 = 0;
    v8 = v4 >> 15;
  }
  else
  {
    v8 = v4 >> 15;
    v16 = v8 & 0x7F;
  }
  v17 = 5;
  if ( v7 )
    v18 = v8 & 0x7F;
  else
    v18 = 0;
  v9 = 0;
  v10 = v11;
  do
  {
    if ( HIDWORD(*v10) )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v3);
    ++v9;
    ++v10;
  }
  while ( v9 < 8 );
}
