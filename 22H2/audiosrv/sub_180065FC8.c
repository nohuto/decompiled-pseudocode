/*
 * XREFs of sub_180065FC8 @ 0x180065FC8
 * Callers:
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_180066114 @ 0x180066114 (sub_180066114.c)
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 */

__int64 __fastcall sub_180065FC8(char *pv, __int64 a2)
{
  signed int v3; // ebx
  _QWORD *v4; // rcx
  char *EventW; // rax
  HANDLE v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  signed int v12; // eax

  v3 = 0;
  v4 = pv + 208;
  if ( *v4 != a2 )
    sub_1800579A4(v4, a2);
  if ( ((*((_QWORD *)pv + 13) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)pv + 13) = EventW;
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( ((*((_QWORD *)pv + 28) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v6 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)pv + 28) = v6;
    if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_7;
    v12 = GetLastError();
    v3 = v12;
    if ( v12 > 0 )
      v3 = (unsigned __int16)v12 | 0x80070000;
  }
  if ( v3 < 0 )
    return (unsigned int)v3;
LABEL_7:
  v7 = sub_180055F40(0xF0uLL);
  if ( v7 )
    v7 = (_QWORD *)sub_180056454(v7, v8);
  *((_QWORD *)pv + 2) = v7;
  if ( !v7 )
    return (unsigned int)-2147024882;
  v3 = sub_1800661E0(v7);
  if ( v3 >= 0 )
  {
    ThreadpoolWait = CreateThreadpoolWait(sub_1800F54D0, pv, 0LL);
    *((_QWORD *)pv + 27) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 28), 0LL);
      *((_QWORD *)pv + 14) = CreateMutexW(0LL, 0, L"Global\\AudioResourceAcquisitionMutex");
      return (unsigned int)sub_180066114(pv);
    }
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
