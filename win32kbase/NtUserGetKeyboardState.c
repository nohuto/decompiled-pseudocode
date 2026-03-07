__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rbx
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  _BYTE *v20; // r11
  unsigned __int64 v21; // r10
  int i; // eax

  v4 = a1;
  v5 = 1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v10 = PtiCurrentShared(v7, v6, v8, v9);
  if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    goto LABEL_24;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(v10, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432), 3);
LABEL_24:
    v5 = 0;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[255] = v4[255];
  v15 = *((_QWORD *)PtiCurrentShared(MmUserProbeAddress, v11, v12, v13) + 54);
  v17 = 0LL;
  v18 = 0;
  LOBYTE(v19) = 0;
  v20 = a1;
  while ( v18 < 256 )
  {
    *v20 = 0;
    if ( v5 || (unsigned __int8)v19 < 0x20u )
    {
LABEL_8:
      v16 = v17 & 3;
      v21 = (unsigned __int64)(unsigned __int8)v17 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v16)) & *(_BYTE *)(v21 + v15 + 236)) != 0 )
        *v20 |= 0x80u;
      v14 = (unsigned int)(1 << (2 * v16 + 1));
      if ( ((unsigned __int8)v14 & *(_BYTE *)(v21 + v15 + 236)) != 0 )
        *v20 |= 1u;
    }
    else
    {
      for ( i = 0; (unsigned __int64)i < 0xE; ++i )
      {
        if ( byte_1C028B418[i] == (_BYTE)v17 )
          goto LABEL_8;
      }
      if ( (unsigned __int8)v17 <= 0xA5u && ((unsigned __int8)v17 < 0x5Du || (unsigned __int8)v17 >= 0xA0u) )
      {
        switch ( (char)v17 )
        {
          case 91:
          case 92:
          case -96:
          case -95:
          case -94:
          case -93:
          case -92:
          case -91:
            goto LABEL_8;
          default:
            break;
        }
      }
    }
    v17 = (unsigned int)(v17 + 1);
    v18 = v17;
    ++v20;
    v19 = (unsigned __int8)v17;
  }
  UserSessionSwitchLeaveCrit(v19, v14, v17, v16);
  return 1LL;
}
