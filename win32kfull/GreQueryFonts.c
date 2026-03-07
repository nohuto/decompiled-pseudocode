__int64 __fastcall GreQueryFonts(struct _UNIVERSAL_FONT_ID *a1, unsigned int a2, union _LARGE_INTEGER *a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 20272LL);
  return PUBLIC_PFTOBJ::QueryFonts((PUBLIC_PFTOBJ *)v7, a1, a2, a3);
}
