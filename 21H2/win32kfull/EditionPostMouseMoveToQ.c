/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C00AB330
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagQ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // rbx
  int v11; // [rsp+78h] [rbp+17h] BYREF
  __int64 v12; // [rsp+80h] [rbp+1Fh] BYREF
  struct tagWND *v13; // [rsp+88h] [rbp+27h] BYREF
  struct tagQ *v14; // [rsp+B8h] [rbp+57h] BYREF

  v14 = a1;
  v6 = a6;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0;
  if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                       (unsigned int)&v14,
                       (unsigned int)&v13,
                       (unsigned int)&v12,
                       512,
                       (__int64)a6,
                       (__int64)&v11) )
    return PostInputMessage(v14, v13, 0x200u, a2, a3, a4, a5, 0, v6, 0LL, 0LL, v11, v12);
  else
    return 0LL;
}
