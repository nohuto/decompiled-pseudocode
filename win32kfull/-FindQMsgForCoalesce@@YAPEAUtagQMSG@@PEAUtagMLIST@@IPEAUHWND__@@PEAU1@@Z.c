/*
 * XREFs of ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0009E88
 * Callers:
 *     ProcessSuspendedEventMessage @ 0x1C00E0344 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1C014322E (ProcessSuspendedPostMessage.c)
 * Callees:
 *     <none>
 */

struct tagQMSG *__fastcall FindQMsgForCoalesce(struct tagMLIST *a1, int a2, HWND a3, struct tagQMSG *a4)
{
  struct tagQMSG *result; // rax
  int v5; // ecx

  if ( a4 )
    result = (struct tagQMSG *)*((_QWORD *)a4 + 1);
  else
    result = (struct tagQMSG *)*((_QWORD *)a1 + 1);
  while ( result )
  {
    v5 = *((_DWORD *)result + 24);
    if ( (!v5 || v5 == 9) && *((_DWORD *)result + 6) == a2 && *((HWND *)result + 2) == a3 )
      break;
    result = (struct tagQMSG *)*((_QWORD *)result + 1);
  }
  return result;
}
