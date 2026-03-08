/*
 * XREFs of ?GetSubchannels@VectorSubchannelMaskInfo@@QEBAGXZ @ 0x18027D078
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x180212430 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VectorSubchannelMaskInfo::GetSubchannels(VectorSubchannelMaskInfo *this)
{
  int v1; // r8d
  int v2; // r10d
  char v3; // al

  LOWORD(v1) = 0;
  if ( *((_BYTE *)this + 4) )
  {
    v2 = 0;
    do
    {
      v3 = *((_BYTE *)this + 4) - v2++;
      v1 = (unsigned __int16)v1 | (1 << ((*((unsigned __int8 *)this + 8) >> (2 * v3 - 2)) & 3));
    }
    while ( v2 < *((unsigned __int8 *)this + 4) );
  }
  else
  {
    LOWORD(v1) = -1;
  }
  return (unsigned __int16)v1;
}
