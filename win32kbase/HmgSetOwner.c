__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *v9; // rbx
  __int64 CurrentThread; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int16 v14; // cx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1);
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v18 )
  {
    v8 = v17;
    if ( *(_BYTE *)(v17 + 14) == a3 && *(_WORD *)(v17 + 12) == HIWORD(v5) )
    {
      v9 = HANDLELOCK::pObj((HANDLELOCK *)&v17);
      CurrentThread = W32GetCurrentThread();
      if ( CurrentThread )
      {
        v11 = *(_QWORD *)(CurrentThread + 72);
        if ( v11 && (_DWORD)v4 )
          v7 = 1;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !*((_WORD *)v9 + 6) )
        goto LABEL_15;
      if ( *((struct _KTHREAD **)v9 + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v17;
LABEL_15:
        v6 = 1;
        v12 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v11 + 8);
        if ( v12 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx((unsigned int)v4, 1, 0);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v12);
            HANDLELOCK::Pid((HANDLELOCK *)&v17, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                if ( !(unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage()
                  || (LOBYTE(v13) = a3, (unsigned int)HmgIsGarbageCollectibleType(v13)) )
                {
                  if ( *((_WORD *)v9 + 6) || *((_DWORD *)v9 + 2) )
                  {
                    v14 = *((_WORD *)v9 + 7);
                    if ( (v14 & 0x4000) == 0 )
                      *((_WORD *)v9 + 7) = v14 | 0x4000;
                  }
                }
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  GreReleaseHmgrSemaphore(v15);
  return v6;
}
