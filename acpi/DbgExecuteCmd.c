__int64 __fastcall DbgExecuteCmd(__int64 a1, char *a2, char **a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // esi
  unsigned int v5; // ecx
  char *v6; // rax
  int v7; // edi
  __int64 v10; // r10
  char *v11; // rdx
  char *v12; // rax
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rbx
  char *v16; // rax
  char *v17; // rax
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+64h] [rbp+Ch]
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v20 = HIDWORD(a1);
  v3 = 0;
  v4 = 0;
  v19 = 0;
  v21 = 0;
  v5 = 0;
  v6 = DbgCmds;
  v7 = 0;
  if ( DbgCmds )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = a2;
      v12 = (char *)(v6 - a2);
      do
      {
        v13 = (unsigned __int8)v12[(_QWORD)v11];
        v14 = (unsigned __int8)*v11 - v13;
        if ( v14 )
          break;
        ++v11;
      }
      while ( v13 );
      if ( !v14 )
        break;
      ++v10;
      ++v7;
      v6 = (&DbgCmds)[4 * v10];
      if ( !v6 )
        goto LABEL_17;
    }
    v15 = 4LL * v7;
    if ( ((__int64)(&DbgCmds)[v15 + 1] & 1) != 0 )
    {
      v5 = -1;
      goto LABEL_17;
    }
    v16 = (&DbgCmds)[v15 + 2];
    if ( v16 )
    {
      v5 = DbgParseArgs((int)v16, (int)&v19, (int)&v21, v13, a3);
      if ( v5 )
      {
        v5 = -3;
        goto LABEL_17;
      }
      v3 = v19;
      v4 = v21;
    }
    v17 = (&DbgCmds)[v15 + 3];
    if ( v17 )
      v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v17)(0LL, 0LL, v3, v4);
  }
LABEL_17:
  if ( !(&DbgCmds)[4 * v7] )
  {
    PrintDebugMessage(230, (_DWORD)a2, 0, 0, 0LL);
    return (unsigned int)-2;
  }
  return v5;
}
