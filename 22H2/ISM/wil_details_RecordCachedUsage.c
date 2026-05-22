/*
 * XREFs of wil_details_RecordCachedUsage @ 0x18003E344
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800665DC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180068188 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
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
  unsigned int *v10; // rdi
  __int64 v11; // rax
  const char *v12; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h]
  int v14; // [rsp+2Ch] [rbp-44h]
  int v15; // [rsp+30h] [rbp-40h]
  int v16; // [rsp+34h] [rbp-3Ch]
  int v17; // [rsp+38h] [rbp-38h]
  BOOL v18; // [rsp+3Ch] [rbp-34h]
  int v19; // [rsp+40h] [rbp-30h]
  int v20; // [rsp+44h] [rbp-2Ch]
  int v21; // [rsp+48h] [rbp-28h]
  int v22; // [rsp+4Ch] [rbp-24h]
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]
  int v25; // [rsp+58h] [rbp-18h]
  int v26; // [rsp+5Ch] [rbp-14h]

  v3 = (unsigned int)this;
  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  LODWORD(v12) = 2;
  HIDWORD(v12) = v5 & 1;
  v13 = 6;
  v14 = ((unsigned __int8)v5 >> 1) & 1;
  v15 = 3;
  v16 = ((unsigned __int8)v5 >> 2) & 1;
  v17 = 7;
  v19 = 0;
  v18 = v5 >= 8;
  if ( (v4 & 0x4000) != 0 )
  {
    v20 = 0;
    v6 = v4 >> 5;
  }
  else
  {
    v6 = v4 >> 5;
    v20 = (v4 >> 5) & 0x1FF;
  }
  v21 = 4;
  if ( (v4 & 0x4000) != 0 )
    v22 = v6 & 0x1FF;
  else
    v22 = 0;
  v23 = 1;
  v7 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    v24 = 0;
    v8 = v4 >> 15;
  }
  else
  {
    v8 = v4 >> 15;
    v24 = v8 & 0x7F;
  }
  v25 = 5;
  if ( v7 )
    v26 = v8 & 0x7F;
  else
    v26 = 0;
  v9 = 0;
  v10 = (unsigned int *)&v12;
  do
  {
    v11 = HIDWORD(*(_QWORD *)v10);
    if ( (_DWORD)v11 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v3, *v10, v11, 0, v12);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 8 );
}
