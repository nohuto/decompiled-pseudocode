/*
 * XREFs of NtUserGetKeyboardState @ 0x1C00708C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1C004FE20 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0070C58 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     EtwTraceUIPIInputError @ 0x1C0074560 (EtwTraceUIPIInputError.c)
 */

__int64 __fastcall NtUserGetKeyboardState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rbx
  char v5; // r14
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  _BYTE *v13; // r11
  unsigned __int64 v14; // r10
  int i; // eax

  v4 = (_BYTE *)a1;
  v5 = 1;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = PtiCurrentShared();
  if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    goto LABEL_24;
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
  {
    EtwTraceUIPIInputError(v6, 0LL, 3);
LABEL_24:
    v5 = 0;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[255] = v4[255];
  v8 = *((_QWORD *)PtiCurrentShared() + 54);
  v10 = 0LL;
  v11 = 0;
  LOBYTE(v12) = 0;
  v13 = (_BYTE *)a1;
  while ( v11 < 256 )
  {
    *v13 = 0;
    if ( v5 || (unsigned __int8)v12 < 0x20u )
    {
LABEL_8:
      v9 = v10 & 3;
      v14 = (unsigned __int64)(unsigned __int8)v10 >> 2;
      if ( ((unsigned __int8)(1 << (2 * v9)) & *(_BYTE *)(v14 + v8 + 236)) != 0 )
        *v13 |= 0x80u;
      v7 = (unsigned int)(1 << (2 * v9 + 1));
      if ( ((unsigned __int8)v7 & *(_BYTE *)(v14 + v8 + 236)) != 0 )
        *v13 |= 1u;
    }
    else
    {
      for ( i = 0; (unsigned __int64)i < 0xE; ++i )
      {
        if ( byte_1C024CCA0[i] == (_BYTE)v10 )
          goto LABEL_8;
      }
      if ( (unsigned __int8)v10 <= 0xA5u && ((unsigned __int8)v10 < 0x5Du || (unsigned __int8)v10 >= 0xA0u) )
      {
        switch ( (char)v10 )
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
    v10 = (unsigned int)(v10 + 1);
    v11 = v10;
    ++v13;
    v12 = (unsigned __int8)v10;
  }
  UserSessionSwitchLeaveCrit(v12, v7, v10, v9);
  return 1LL;
}
