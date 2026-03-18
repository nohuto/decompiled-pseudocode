/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047B50
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0047AA4 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  struct tagWND *v13; // rdx
  struct tagWND *v14; // rbp
  char v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r10
  char v20; // r11

  v2 = *(_QWORD *)a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v2 * *((_DWORD *)&gSharedInfo + 4);
    v6 = (_QWORD *)HMPkheFromPhe(v5);
    LOWORD(v2) = WORD1(v2) & 0x7FFF;
    if ( ((WORD1(v2) & 0x7FFF) == *(_WORD *)(v5 + 26)
       || (_WORD)v2 == 0x7FFF
       || !(_WORD)v2 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v5 + 25) & 1) == 0
      && *(_BYTE *)(v5 + 24) == 1 )
    {
      v7 = (_QWORD *)*v6;
      if ( *v6 )
      {
        *((_QWORD *)a1 + 13) = v7[2];
        if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
          return 1LL;
        v9 = v7[3];
        v10 = 0LL;
        if ( v9 )
        {
          v11 = *(_QWORD *)(v9 + 8);
          if ( v11 )
            v10 = *(struct tagWND **)(v11 + 24);
        }
        v12 = v7[5];
        v13 = (struct tagWND *)v7[13];
        v14 = v13;
        v15 = *(_BYTE *)(v12 + 19);
        if ( v15 >= 0 )
        {
          v16 = *((_QWORD *)a1 + 1);
          if ( v16 > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v13 != v10 )
              return 0LL;
          }
          else
          {
            if ( !v16 )
            {
              if ( !a2 )
                return 1LL;
              if ( v13 == v10 && ((v15 & 4 ^ (*(unsigned __int8 *)(v12 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
              {
                v17 = *((_QWORD *)a2 + 14);
LABEL_27:
                if ( v17
                  && ((*(_BYTE *)(*(_QWORD *)(v17 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v17 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
                {
                  return 0LL;
                }
              }
              return a2 == v13;
            }
            if ( v16 != 1 )
            {
              v18 = (_QWORD *)HMValidateHandleNoSecure(v16, 1);
              if ( !v18 || (v19 = v18[5], v20 = *(_BYTE *)(v19 + 19), v20 < 0) )
              {
                UserSetLastError(6LL);
                return 0LL;
              }
              if ( v7 == v18 )
                return 0LL;
              v13 = (struct tagWND *)v7[13];
              if ( v13 != (struct tagWND *)v18[13] )
                return 0LL;
              if ( !a2 )
                return 1LL;
              if ( v14 != v10 )
                return a2 == v13;
              if ( ((*(_BYTE *)(v7[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v7[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
              {
                if ( ((v20 & 4 ^ (*(unsigned __int8 *)(v19 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
                  return 0LL;
                return a2 == v13;
              }
              v17 = v18[11];
              goto LABEL_27;
            }
          }
          if ( !a2 )
            return 1LL;
          return a2 == v13;
        }
      }
    }
  }
  return 0LL;
}
