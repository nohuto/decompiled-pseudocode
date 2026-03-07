__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14034(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 256) &= ~0x80u )
  {
    v2 = i++;
    v3 = 296 * v2;
    *(_BYTE *)(v3 + *a1 + 288) = 0;
    result = *a1;
  }
  return result;
}
