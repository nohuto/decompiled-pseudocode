/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXXZ @ 0x1C023AC90
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C02381A0 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::UpdatePTPRightClickZone(CPTPEngine *this)
{
  int v1; // edx
  __int128 v2; // [rsp+0h] [rbp-18h]

  v1 = *((_DWORD *)this + 7);
  v2 = *((_OWORD *)this + 5);
  *((_OWORD *)this + 242) = v2;
  if ( v1 )
  {
    *((_DWORD *)this + 968) = 0;
    *((_DWORD *)this + 970) = DWORD2(v2) - v2;
  }
  *((_DWORD *)this + 984) ^= (*((_DWORD *)this + 984) ^ (v1 << 19)) & 0x80000;
}
