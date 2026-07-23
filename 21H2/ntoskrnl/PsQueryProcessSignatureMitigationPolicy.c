/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x14061E2C0
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v4; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  *a2 = 0;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 2512);
  v5 = a2;
  LOBYTE(a1) = *(_BYTE *)(a1 + 2168);
  if ( (unsigned __int8)a1 >= 8u && *(_BYTE *)(v3 + 2169) >= 8u )
  {
    *a2 |= 1u;
  }
  else if ( qword_140C1DB20
         && (LOBYTE(a2) = 6, (unsigned int)qword_140C1DB20(a1, a2, a3))
         && qword_140C1DB20
         && (LOBYTE(v7) = *(_BYTE *)(v3 + 2169), LOBYTE(v6) = 6, (unsigned int)qword_140C1DB20(v7, v6, v8)) )
  {
    *v5 |= 2u;
  }
  else if ( (v4 & 0x1000000) != 0 )
  {
    *v5 |= 8u;
  }
  else if ( (v4 & 0x2000000) != 0 )
  {
    *v5 |= 0x10u;
  }
  if ( (v4 & 0x800000) != 0 )
    *v5 |= 4u;
}
