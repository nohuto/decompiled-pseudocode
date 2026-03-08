/*
 * XREFs of ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C01BF73C
 * Callers:
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01BF6DC (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::operator()(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned int i; // edx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 v13; // r11

  v1 = (__int64 *)(a1 + 8);
  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)a1 + 32LL); *(_QWORD *)(v4 + *v1 + 56) &= 0xFFFF0FFFFFFFFFFFuLL )
    v4 = 296LL * i++;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_,
             a1,
             4);
  if ( (_DWORD)result == -2147483622 )
  {
    v7 = 0;
    if ( !*(_WORD *)(*(_QWORD *)a1 + 32LL) )
      return 0LL;
    while ( 1 )
    {
      v8 = 0;
      if ( v7 )
      {
        v9 = *v1;
        v10 = 296LL * v7;
        do
        {
          if ( *(_DWORD *)(296LL * v8 + v9 + 240) == *(_DWORD *)(v10 + *v1 + 240) )
            break;
          ++v8;
        }
        while ( v8 < v7 );
        if ( v8 < v7 )
        {
          v11 = *v1;
          v12 = 296LL * v8;
          v13 = *(_BYTE *)(v12 + v9 + 185);
          if ( ((*(_BYTE *)(*v1 + v10 + 185) ^ v13) & 3) != 0
            || !v13
            && (*(_DWORD *)(v12 + v11 + 72) != *(_DWORD *)(v11 + v10 + 72)
             || *(_DWORD *)(v12 + v11 + 76) != *(_DWORD *)(v11 + v10 + 76)) )
          {
            break;
          }
        }
      }
      if ( ++v7 >= *(unsigned __int16 *)(*(_QWORD *)a1 + 32LL) )
        return 0LL;
    }
    return 3221226021LL;
  }
  if ( !(_DWORD)result )
    return 3221226021LL;
  return result;
}
