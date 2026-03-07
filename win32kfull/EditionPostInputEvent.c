__int64 __fastcall EditionPostInputEvent(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct tagTHREADINFO **v8; // rax

  if ( a1 == 30 )
    return 0LL;
  v8 = (struct tagTHREADINFO **)ValidateHwnd(a2);
  if ( !v8 )
    return 0LL;
  else
    return PostEventMessageEx(v8[2], *((struct tagQ **)v8[2] + 54), a1, (struct tagWND *)v8, a4, a5, a6, 0LL);
}
