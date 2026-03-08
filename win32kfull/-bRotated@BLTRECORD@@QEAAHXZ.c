/*
 * XREFs of ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C0291F00
 * Callers:
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTRECORD::bRotated(BLTRECORD *this)
{
  int v1; // r10d
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  int v5; // r11d
  int v6; // eax
  __int64 result; // rax

  v1 = *((_DWORD *)this + 31);
  v2 = *((_DWORD *)this + 29);
  if ( v1 != v2 )
    return 1LL;
  v3 = *((_DWORD *)this + 32);
  v4 = *((_DWORD *)this + 28);
  if ( v3 != v4 )
    return 1LL;
  if ( (((unsigned __int8)v2 | (unsigned __int8)v4) & 0xF) != 0 )
    return 1LL;
  v5 = *((_DWORD *)this + 30);
  if ( (((unsigned __int8)v5 | (unsigned __int8)(v1 | v3)) & 0xF) != 0 )
    return 1LL;
  v6 = *((_DWORD *)this + 33);
  if ( (v6 & 0xF) != 0 )
    return 1LL;
  *((_DWORD *)this + 39) = v6 >> 4;
  result = 0LL;
  *((_DWORD *)this + 36) = v4 >> 4;
  *((_DWORD *)this + 37) = v2 >> 4;
  *((_DWORD *)this + 38) = v5 >> 4;
  return result;
}
