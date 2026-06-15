/*
 * XREFs of sub_1801071D0 @ 0x1801071D0
 * Callers:
 *     sub_180106378 @ 0x180106378 (sub_180106378.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 * Callees:
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_180107348 @ 0x180107348 (sub_180107348.c)
 *     sub_1801081D4 @ 0x1801081D4 (sub_1801081D4.c)
 */

__int64 __fastcall sub_1801071D0(_QWORD *a1)
{
  signed int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  HANDLE Event; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rsi
  DWORD LastError; // ebx

  v1 = 0;
  if ( !*a1 )
  {
    v1 = sub_180107348(a1);
    if ( v1 < 0 )
      goto LABEL_9;
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      v8 = (void *)a1[28];
      if ( v8 )
      {
        LastError = GetLastError();
        sub_180051B0C(v8);
        SetLastError(LastError);
      }
      a1[28] = Event;
      v1 = 0;
    }
    else
    {
      v1 = sub_1800B4E2C(v4, v3, v6, v7);
    }
    if ( v1 < 0 )
LABEL_9:
      sub_1801081D4(a1);
  }
  return (unsigned int)v1;
}
