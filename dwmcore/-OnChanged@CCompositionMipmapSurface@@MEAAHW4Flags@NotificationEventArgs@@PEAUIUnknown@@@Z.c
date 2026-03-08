/*
 * XREFs of ?OnChanged@CCompositionMipmapSurface@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180220C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionMipmapSurface::OnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a3 )
  {
    if ( a2 <= 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      v4 = 0;
      if ( (*(_QWORD *)(a1 + 104) - v3) >> 5 )
      {
        v5 = 0LL;
        do
        {
          v6 = 32 * v5;
          if ( *(_QWORD *)(v6 + v3) && *(_QWORD *)(v6 + v3) == a3 )
          {
            *(_BYTE *)(v6 + v3 + 24) = 1;
            *(_BYTE *)(a1 + 160) = 1;
          }
          v3 = *(_QWORD *)(a1 + 96);
          v5 = ++v4;
        }
        while ( v4 < (unsigned __int64)((*(_QWORD *)(a1 + 104) - v3) >> 5) );
      }
    }
  }
  return 1LL;
}
