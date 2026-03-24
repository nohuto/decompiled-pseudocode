/*
 * XREFs of ?SetFloatProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01DD090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetFloatProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx

  result = 0LL;
  v5 = a2 - 3;
  if ( !v5 )
  {
    if ( *((float *)this + 21) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 21) = a3;
    goto LABEL_26;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 22) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 22) = a3;
    goto LABEL_26;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 23) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x400u;
    *((float *)this + 23) = a3;
    goto LABEL_26;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((float *)this + 24) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 24) = a3;
    goto LABEL_26;
  }
  v9 = v8 - 5;
  if ( !v9 )
  {
    if ( *((float *)this + 41) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x10000u;
    *((float *)this + 41) = a3;
    goto LABEL_26;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *((float *)this + 42) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x20000u;
    *((float *)this + 42) = a3;
    goto LABEL_26;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    if ( *((float *)this + 50) == a3 )
      return result;
    *((_DWORD *)this + 4) |= 0x200000u;
    *((float *)this + 50) = a3;
    goto LABEL_26;
  }
  if ( v11 != 1 )
    return 3221225485LL;
  if ( *((float *)this + 51) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x400000u;
    *((float *)this + 51) = a3;
LABEL_26:
    *a4 = 1;
  }
  return result;
}
