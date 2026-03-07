void __fastcall MilInstrumentationCheckHR_MaybeFailFast(
        unsigned int a1,
        const int *const a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  bool v7; // al
  int v8; // ecx
  const int *v9; // r10
  unsigned int v10; // r11d
  char v11; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = IsOOM(a4);
  if ( (a1 & 0x10) != 0 && v7 )
  {
    if ( !v9 || !v10 )
      goto LABEL_11;
  }
  else if ( !v9 || !v10 )
  {
    v9 = (const int *)&unk_140011A30;
    v10 = 10;
  }
  if ( !IsHRInList(v8, v9, v10) )
  {
LABEL_11:
    MilInstrumentationHandleFailure_MaybeFailFast(a4, a1, a5, retaddr);
    return;
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(a4, a5, retaddr);
  }
}
