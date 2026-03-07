__int64 __fastcall InteractiveControlInput::GenerateCtrlInputMessages(
        InteractiveControlInput *this,
        struct tagWND *a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // r14
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+6Ch] [rbp+14h]

  v3 = 0;
  v11 = 32;
  v7 = 0LL;
  v12 = 1;
  if ( a2 )
  {
    v8 = 0;
    v9 = *(unsigned __int16 *)(*((_QWORD *)this + 5) + 8LL) | ((unsigned __int64)*((unsigned __int16 *)this + 16) << 16);
    do
    {
      if ( (a3 & (1 << v8)) != 1 << v8 )
        goto LABEL_15;
      switch ( v8 )
      {
        case 5u:
        case 6u:
          goto LABEL_13;
        case 7u:
          v7 = *((int *)this + 19);
          break;
        case 8u:
        case 9u:
          goto LABEL_13;
        case 0xAu:
        case 0xBu:
        case 0xCu:
          v7 = *((unsigned __int16 *)this + 28) | ((unsigned __int64)*((unsigned __int16 *)this + 30) << 16);
          break;
        case 0xDu:
LABEL_13:
          v7 = 1LL;
          break;
        default:
          break;
      }
      if ( !_PostTransformableMessageExtended(
              (unsigned __int64)a2,
              v8 + 744,
              v9,
              (__int128 *)v7,
              (struct tagINPUT_MESSAGE_SOURCE *)&v11,
              1) )
        return (unsigned int)-1073740030;
LABEL_15:
      ++v8;
    }
    while ( v8 < 0x11 );
  }
  return v3;
}
