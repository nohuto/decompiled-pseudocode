/*
 * XREFs of sub_1800C8010 @ 0x1800C8010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C8010(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned __int64 i; // rdx
  unsigned int v7; // eax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x1Cu, (__int64)&unk_18015DEF0, 0LL);
  }
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    for ( i = 0LL; i < *(_QWORD *)(a1 + 104); v5 = v7 )
    {
      if ( i >= *(_QWORD *)(a1 + 104) )
        sub_1800B8610(-2147024809);
      v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i) + 96LL);
      if ( v7 <= v5 )
        v7 = v5;
      ++i;
    }
    if ( a1 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x1Du, (__int64)&unk_18015DEF0, v5);
    }
    *a2 = v5;
  }
  else
  {
    v4 = -2147467261;
    sub_18005E8F8((__int64)"CAudioSession::GetMeteringChannelCount", 1412, -2147467261);
  }
  return v4;
}
