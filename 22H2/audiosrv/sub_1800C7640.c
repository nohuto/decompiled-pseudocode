/*
 * XREFs of sub_1800C7640 @ 0x1800C7640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C7640(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = a2;
  v6 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x18u, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( (_DWORD)v4 == *(_DWORD *)(a1 + 960) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = v4;
      v8 = *(_QWORD *)(a1 + 968) - (_QWORD)a3;
      do
      {
        *a3 = *(_DWORD *)((char *)a3 + v8);
        ++a3;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v6 = -2147024809;
    sub_18005E8F8((__int64)"CAudioSession::GetAllVolumes", 1212, -2147024809);
  }
  if ( a1 != -808 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  return v6;
}
