_BOOL8 __fastcall TranslateSentPointerMessageForClient(unsigned int a1, unsigned __int64 *a2, __int64 *a3)
{
  unsigned __int64 v5; // rcx
  void *v6; // r8
  HWND v8; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v5 = *a3;
  v6 = (void *)*a2;
  v11 = 0;
  v10 = 0;
  v8 = 0LL;
  return MakePointerMessage(v5, a1, v6, a2, a3, &v9, &v11, &v10, &v8) != 0;
}
