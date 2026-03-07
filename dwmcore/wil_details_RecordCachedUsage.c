void __fastcall wil_details_RecordCachedUsage(wil::details *this, __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // ebx
  unsigned int *v7; // rdi
  __int64 v8; // rax
  const char *v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h]
  int v11; // [rsp+2Ch] [rbp-44h]
  int v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+34h] [rbp-3Ch]
  int v14; // [rsp+38h] [rbp-38h]
  BOOL v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  int v20; // [rsp+50h] [rbp-20h]
  int v21; // [rsp+54h] [rbp-1Ch]
  int v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+5Ch] [rbp-14h]

  v3 = (unsigned int)this;
  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  LODWORD(v9) = 2;
  HIDWORD(v9) = v5 & 1;
  v10 = 6;
  v11 = ((unsigned __int8)v5 >> 1) & 1;
  v12 = 3;
  v13 = ((unsigned __int8)v5 >> 2) & 1;
  v14 = 7;
  v18 = 4;
  v16 = 0;
  v15 = v5 >= 8;
  if ( (v4 & 0x4000) != 0 )
  {
    v17 = 0;
    v19 = (v4 >> 5) & 0x1FF;
  }
  else
  {
    v19 = 0;
    v17 = (v4 >> 5) & 0x1FF;
  }
  v20 = 1;
  v22 = 5;
  if ( (v4 & 0x400000) != 0 )
  {
    v21 = 0;
    v23 = (v4 >> 15) & 0x7F;
  }
  else
  {
    v23 = 0;
    v21 = (v4 >> 15) & 0x7F;
  }
  v6 = 0;
  v7 = (unsigned int *)&v9;
  do
  {
    v8 = HIDWORD(*(_QWORD *)v7);
    if ( (_DWORD)v8 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v3, *v7, v8, 0, v9);
    ++v6;
    v7 += 2;
  }
  while ( v6 < 8 );
}
