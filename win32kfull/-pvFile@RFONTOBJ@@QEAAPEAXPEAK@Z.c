char *__fastcall RFONTOBJ::pvFile(RFONTOBJ *this, unsigned int *a2)
{
  __int64 v2; // rax
  char *v3; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  const char *TrueTypeFile; // rax
  unsigned int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v12 = 0;
  v6 = *(_QWORD *)(v2 + 128);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 80)) != 0
    && (v11[0] = *(_QWORD *)(v2 + 128),
        TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)v11, v7, &v12),
        (v3 = (char *)TrueTypeFile) != 0LL)
    && (v3 = RFONTOBJ::pchTranslate(this, TrueTypeFile)) != 0LL )
  {
    v9 = v12;
  }
  else
  {
    v9 = 0;
  }
  if ( a2 )
    *a2 = v9;
  return v3;
}
