void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        __int64 a1,
        const int *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        void *a6)
{
  int v6; // r11d
  unsigned int v7; // r10d
  void *v8; // r9
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  int v11; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a4;
  v7 = 0;
  v8 = a6;
  if ( !a6 )
    v8 = retaddr;
  v9 = 0;
  v10 = &unk_1803752F0;
  while ( *v10 != v6 )
  {
    ++v9;
    ++v10;
    if ( v9 >= 9 )
    {
      if ( !a2 || !a3 )
      {
        a2 = &dword_18033A628;
        a3 = 10;
      }
      while ( v6 != *a2 )
      {
        ++v7;
        ++a2;
        if ( v7 >= a3 )
          goto LABEL_10;
      }
      return;
    }
  }
  if ( a2 && a3 && IsHRInList(v6, a2, a3) )
    DoStackCapture(v11, a5, v8);
  else
LABEL_10:
    MilInstrumentationHandleFailure_MaybeFailFast(v6, (unsigned int)a2, a5, v8);
}
