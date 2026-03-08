/*
 * XREFs of MiInitializeChannelOrdering @ 0x140838724
 * Callers:
 *     MiInitializeNuma @ 0x140394008 (MiInitializeNuma.c)
 * Callees:
 *     MiInitializeSystemChannelOrdering @ 0x140B96904 (MiInitializeSystemChannelOrdering.c)
 */

__int64 __fastcall MiInitializeChannelOrdering(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( qword_140C65750 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 25408LL * (unsigned int)a2;
    if ( (unsigned int)MmNumberOfChannels > 1 )
      *(_DWORD *)(v3 + v2 + 23000) |= 1u;
    if ( (unsigned __int16 *)a1 == MiSystemPartition )
    {
      return MiInitializeSystemChannelOrdering(a1, a2, v3, v2);
    }
    else
    {
      v5 = qword_140C6B0D0;
      *(_DWORD *)(v3 + v2 + 23041) = *(_DWORD *)(v3 + qword_140C6B0D0 + 23041);
      *(_DWORD *)(v3 + v2 + 23033) = *(_DWORD *)(v3 + v5 + 23033);
      result = *(unsigned int *)(v3 + v5 + 23037);
      *(_DWORD *)(v3 + v2 + 23037) = result;
    }
  }
  return result;
}
