/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C0037070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C0037160 (-GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0047028 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C0071660 (CalcWakeMask.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagQ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  __int64 v10; // rbp
  int v11; // edi
  struct tagWND *v12; // r14
  unsigned int v13; // edx
  struct tagTHREADINFO *InputDelegate; // rax
  int v15; // r11d
  struct tagTHREADINFO *v16; // rbx

  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = CalcWakeMask(512LL, 512LL, 0LL);
  if ( *((_QWORD *)a1 + 18) )
    v12 = (struct tagWND *)*((_QWORD *)a1 + 18);
  InputDelegate = GetInputDelegate(v12, v13);
  v16 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    v11 = 1;
    a1 = (struct tagQ *)*((_QWORD *)v16 + 54);
    v10 = (__int64)v16;
    v15 = (*((_DWORD *)v16 + 319) >> 6) & 1;
  }
  return PostInputMessage(a1, v12, 0x200u, a2, a3, a4, a5, 0, a6, 0LL, 0LL, v11, v15, v10);
}
