void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  int v3; // edi
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *a2 = 0;
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 2512);
  v4 = a2;
  LOBYTE(a1) = *(_BYTE *)(a1 + 2168);
  if ( (unsigned __int8)a1 < 8u || *(_BYTE *)(v2 + 2169) < 8u )
  {
    if ( qword_140C37600
      && (LOBYTE(a2) = 6, (unsigned int)qword_140C37600(a1, a2))
      && qword_140C37600
      && (LOBYTE(v6) = *(_BYTE *)(v2 + 2169), LOBYTE(v5) = 6, (unsigned int)qword_140C37600(v6, v5)) )
    {
      *v4 |= 2u;
    }
    else if ( (v3 & 0x1000000) != 0 )
    {
      *v4 |= 8u;
    }
    else if ( (v3 & 0x2000000) != 0 )
    {
      *v4 |= 0x10u;
    }
  }
  else
  {
    *a2 |= 1u;
  }
  if ( (v3 & 0x800000) != 0 )
    *v4 |= 4u;
}
