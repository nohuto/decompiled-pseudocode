__int64 __fastcall NlsNumpadModeProc(struct tagKE *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // dx
  __int16 v8; // dx

  v1 = *((unsigned __int8 *)a1 + 2);
  if ( !(unsigned int)NlsTestKeyStateToggle(0x90u)
    || (*(_BYTE *)(SGDGetUserSessionState(v4, v3, v5, v6) + 14060) & 1) != 0 )
  {
    v7 = *((_WORD *)a1 + 1) & 0x8F00;
    *((_WORD *)a1 + 1) = v7;
    if ( v1 <= 0x65 )
    {
      switch ( v1 )
      {
        case 'e':
          v8 = v7 | 0xC;
          goto LABEL_26;
        case '`':
          v8 = v7 | 0x2D;
          goto LABEL_26;
        case 'a':
          v8 = v7 | 0x23;
          goto LABEL_26;
        case 'b':
          v8 = v7 | 0x28;
          goto LABEL_26;
        case 'c':
          v8 = v7 | 0x22;
          goto LABEL_26;
        case 'd':
          v8 = v7 | 0x25;
          goto LABEL_26;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'f':
          v8 = v7 | 0x27;
          goto LABEL_26;
        case 'g':
          v8 = v7 | 0x24;
          goto LABEL_26;
        case 'h':
          v8 = v7 | 0x26;
          goto LABEL_26;
        case 'i':
          v8 = v7 | 0x21;
          goto LABEL_26;
        case 'n':
          v8 = v7 | 0x2E;
LABEL_26:
          *((_WORD *)a1 + 1) = v8;
          break;
      }
    }
  }
  return 1LL;
}
