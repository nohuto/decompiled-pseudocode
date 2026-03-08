/*
 * XREFs of ?SetRemarshalingFlags@CAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CAnimationMarshaler *this)
{
  unsigned int v1; // r8d
  unsigned __int8 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax

  v1 = *((_DWORD *)this + 4) & 0xFFFFD13F;
  *((_DWORD *)this + 4) = v1;
  if ( *((_DWORD *)this + 52) )
  {
    v1 |= 0x20000u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 57) = 0;
  v3 = *((_BYTE *)this + 184);
  if ( (((v1 & 0x4000) == 0) & (v3 >> 2)) != 0 )
  {
    v4 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 4) = v1 | 0x4000;
    *(_BYTE *)(v4 + 28) = (v3 & 4) != 0;
  }
  v5 = *((_QWORD *)this + 24);
  if ( v5 || *((_QWORD *)this + 25) != *((_QWORD *)this + 12) )
  {
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x8000) == 0 )
    {
      *((_DWORD *)this + 4) = v6 | 0x8000;
      *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = v5;
      *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 25);
    }
  }
  return *((_QWORD *)this + 11) != 0LL;
}
