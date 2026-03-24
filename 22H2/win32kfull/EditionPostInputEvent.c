/*
 * XREFs of EditionPostInputEvent @ 0x1C01277F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostInputEvent(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax

  if ( a1 == 30 )
    return 0LL;
  v8 = ValidateHwnd(a2);
  if ( !v8 )
    return 0LL;
  else
    return PostEventMessageEx(
             *(struct tagTHREADINFO **)(v8 + 16),
             *(struct tagQ **)(*(_QWORD *)(v8 + 16) + 432LL),
             a1,
             (struct tagWND *)v8,
             a4,
             a5,
             a6,
             0LL);
}
