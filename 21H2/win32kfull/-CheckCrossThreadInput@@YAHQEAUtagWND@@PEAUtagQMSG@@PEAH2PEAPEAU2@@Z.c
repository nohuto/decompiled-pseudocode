/*
 * XREFs of ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00F61A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01EB168 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     CalcWakeMask @ 0x1C0057150 (CalcWakeMask.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01DBF48 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall CheckCrossThreadInput(
        struct tagWND *const a1,
        struct tagQMSG *a2,
        int *a3,
        int *a4,
        struct tagQMSG **a5)
{
  int v9; // ebp
  int v10; // eax
  __int64 result; // rax
  char v12; // al

  if ( *(_QWORD *)(gptiCurrent + 672LL)
    || *(struct tagQMSG **)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) != a2
    || a2 == (struct tagQMSG *)1 )
  {
    goto LABEL_7;
  }
  v9 = *((_DWORD *)a2 + 25);
  if ( (v9 & 0x20) != 0 )
  {
    *a3 = 0;
    *a5 = a2;
    return 0LL;
  }
  if ( (v9 & 0x40) != 0
    || (v10 = *((_DWORD *)a1 + 65)) == 0
    || (v10 & 2) == 0
    || (v12 = CalcWakeMask(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 6), 0),
        (v12 & 2) == 0 || gptiCurrent == *((_QWORD *)a1 + 33)) )
  {
LABEL_7:
    *a3 = *((_QWORD *)a1 + 2) != gptiCurrent;
    *a5 = 0LL;
    return 0LL;
  }
  *((_DWORD *)a2 + 25) = v9 | 0x20;
  ReassignInputMessage(gptiCurrent, *((struct tagTHREADINFO **)a1 + 33), a2);
  result = 1LL;
  *((_QWORD *)a2 + 2) = *(_QWORD *)a1;
  *a4 = 0;
  *a3 = 0;
  return result;
}
