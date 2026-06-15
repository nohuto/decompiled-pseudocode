/*
 * XREFs of sub_1800C7000 @ 0x1800C7000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EACC @ 0x18002EACC (sub_18002EACC.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 */

__int64 __fastcall sub_1800C7000(__int64 a1, int a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = sub_1800C6C50(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    sub_18005E8F8((__int64)"CPerStreamVolumeAudioSession::Disconnect", 2177, v4);
  }
  else if ( *(_BYTE *)(a1 + 968) )
  {
    sub_18002EACC(a1 - 16);
  }
  return v5;
}
