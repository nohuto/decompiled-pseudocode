__int64 __fastcall CLegacyRemotingSwapChain::UpdateSectionBits(FastRegion::Internal::CRgnData **this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  int v8; // edi
  _BYTE v10[8]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-48h]
  int *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  int v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  if ( !*((_BYTE *)this + 216) )
  {
    FastRegion::Internal::CRgnData::BeginIterator(this[16], (struct FastRegion::CRegion::Iterator *)v10);
    while ( (unsigned __int64)v12 < v11 )
    {
      v15 = 0;
      v16 = 0;
      v16 = *v12;
      v18 = v12[2];
      v3 = 2 * v14;
      v15 = *(_DWORD *)(v13 + 4 * v3);
      v4 = *(_DWORD *)(v13 + 4 * v3 + 4);
      v5 = this[10];
      v17 = v4;
      v6 = (*(__int64 (__fastcall **)(FastRegion::Internal::CRgnData *, int *, FastRegion::Internal::CRgnData *))(*(_QWORD *)v5 + 48LL))(
             v5,
             &v15,
             this[11]);
      v8 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, v6, 0x1B1u, 0LL);
      if ( !v1 || v1 >= 0 && v8 < 0 )
        v1 = v8;
      FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v10);
    }
  }
  return (unsigned int)v1;
}
