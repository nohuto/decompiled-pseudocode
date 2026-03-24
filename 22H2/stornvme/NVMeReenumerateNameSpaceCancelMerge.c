/*
 * XREFs of NVMeReenumerateNameSpaceCancelMerge @ 0x1C0006AA8
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeReenumerateNameSpaceCancelMerge(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // r8d

  if ( a2 )
  {
    v2 = (__int64 *)(a1 + 1736);
    v3 = a2;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = *(_DWORD *)(v4 + 20);
        if ( (v5 & 0x20) != 0 )
          *(_DWORD *)(v4 + 20) = v5 & 0xFFFFFFDF;
      }
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  *(_DWORD *)(a1 + 24) &= ~0x100u;
  return StorPortResume();
}
