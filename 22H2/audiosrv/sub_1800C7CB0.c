/*
 * XREFs of sub_1800C7CB0 @ 0x1800C7CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_1800C7CB0(__int64 a1, void **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  const wchar_t *v5; // r9
  unsigned __int64 v6; // rbx
  _WORD *v7; // rax
  int v8; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  v5 = *(const wchar_t **)(a1 + 328);
  v6 = 2LL * (*((_DWORD *)v5 - 4) + 1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xBu, (__int64)&unk_18015DEF0, v5);
  }
  v7 = (_WORD *)sub_180045410(v6);
  *a2 = v7;
  if ( v7 )
  {
    v8 = sub_180061BA0(v7, v6, *(_QWORD *)(a1 + 328));
    if ( v8 >= 0 )
      goto LABEL_10;
    sub_180033A70(*a2);
    *a2 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  sub_18005E8F8((__int64)"CAudioSession::GetIconPath", 303, v8);
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v8;
}
