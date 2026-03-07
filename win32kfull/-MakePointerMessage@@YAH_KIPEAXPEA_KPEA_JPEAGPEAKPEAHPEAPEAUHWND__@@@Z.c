__int64 __fastcall MakePointerMessage(
        unsigned __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        int *a8,
        HWND *a9)
{
  __int64 v13; // rax
  const struct tagPOINTER_INFO *PointerMessage; // rax
  int v16; // [rsp+78h] [rbp+Fh] BYREF
  int v17; // [rsp+7Ch] [rbp+13h] BYREF
  int v18; // [rsp+80h] [rbp+17h] BYREF
  struct tagPOINT v19; // [rsp+88h] [rbp+1Fh] BYREF

  v19 = 0LL;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v13 = SGDGetUserSessionState(a1);
  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(
                     *(CTouchProcessor **)(v13 + 3424),
                     a1,
                     &v19,
                     &v18,
                     &v17,
                     &v16);
  return MakePointerMessageWorker(PointerMessage, v19, v18, v17, v16, a2, a3, a4, a5, a6, a7, a8, a9);
}
