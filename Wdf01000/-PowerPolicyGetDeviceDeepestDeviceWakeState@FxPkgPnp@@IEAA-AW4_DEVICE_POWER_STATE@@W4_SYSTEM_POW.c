__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned int id; // ebx
  __int64 v6; // rax
  const _GUID *v8; // [rsp+20h] [rbp-68h]
  unsigned int v9[4]; // [rsp+40h] [rbp-48h]
  unsigned int v10; // [rsp+50h] [rbp-38h]
  unsigned int v11; // [rsp+54h] [rbp-34h]
  __m128i si128; // [rsp+58h] [rbp-30h]
  unsigned int v13; // [rsp+68h] [rbp-20h]
  unsigned int v14; // [rsp+6Ch] [rbp-1Ch]

  if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
  {
    if ( (int)v2 - 1 > v3 - 7 )
    {
      id = 1;
    }
    else
    {
      _mm_lfence();
      *(__m128i *)v9 = _mm_load_si128((const __m128i *)&_xmm);
      v10 = v3 - 7;
      v11 = v3 - 7;
      v2 = *(unsigned __int8 *)((int)v2 + v4 + 1027);
      if ( (unsigned __int8)v2 >= 6u )
        id = 0;
      else
        id = v9[v2];
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(v4 + 1028);
    v13 = v3 - 7;
    v14 = v3 - 7;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned __int8)v6 >= 6u )
    {
      id = 0;
LABEL_13:
      WPP_IFR_SF_LL(*(_FX_DRIVER_GLOBALS **)(v4 + 16), v2, v3, v4, v8, *(unsigned __int8 *)(v4 + 1033), id);
      return id;
    }
    id = si128.m128i_u32[v6];
  }
  if ( !id || !*(_BYTE *)(v4 + 1033) )
    goto LABEL_13;
  return id;
}
