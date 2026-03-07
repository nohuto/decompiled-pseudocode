void __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  Gre::Base *v2; // rcx
  _QWORD *v3; // rbx
  EWNDOBJ *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  EWNDOBJ *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  HDEV v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int16 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  HDEV v20; // [rsp+90h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+28h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF

  if ( EWNDOBJ::bValid(this) )
  {
    v15 = 0;
    v16 = 0;
    v19 = 0LL;
    v18 = 0LL;
    v14 = 0LL;
    v3 = (_QWORD *)*((_QWORD *)v2 + 21);
    v17 = 256;
    v11 = 0LL;
    v13 = 1;
    v20 = *(HDEV *)(v3[4] + 48LL);
    if ( ((_DWORD)v20[10] & 1) != 0 )
    {
      Gre::Base::Globals(v2);
      *(_QWORD *)&v11 = *((_QWORD *)v20 + 6);
      v12 = v20;
      GreAcquireSemaphore(v11);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v11, 11LL);
    }
    v22 = *((_QWORD *)Gre::Base::Globals(v2) + 7);
    GreAcquireSemaphore(v22);
    v21 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v21);
    ((void (__fastcall *)(EWNDOBJ *, __int64))v3[5])(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    v4 = (EWNDOBJ *)v3[3];
    if ( v4 == this )
    {
      v3[3] = *((_QWORD *)this + 20);
    }
    else
    {
      while ( v4 )
      {
        v5 = (_QWORD *)((char *)v4 + 160);
        v4 = (EWNDOBJ *)*((_QWORD *)v4 + 20);
        if ( v4 == this )
        {
          *v5 = *((_QWORD *)this + 20);
          break;
        }
      }
    }
    EWNDOBJ::vDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this);
    if ( !v3[3] )
    {
      v7 = *(_QWORD *)(SGDGetSessionState(v6) + 32);
      v8 = *(_QWORD **)(v7 + 23664);
      if ( v3 == v8 )
      {
        *(_QWORD *)(v7 + 23664) = v3[1];
      }
      else
      {
        while ( v8 )
        {
          v9 = v8 + 1;
          v8 = (_QWORD *)v8[1];
          if ( v8 == v3 )
          {
            *v9 = v3[1];
            break;
          }
        }
      }
      v10 = (EWNDOBJ *)v3[2];
      if ( v10 )
      {
        EWNDOBJ::vDelete(v10);
        *(_DWORD *)(v3[2] + 152LL) = 0;
        Win32FreePool((void *)v3[2]);
      }
      *(_DWORD *)v3 = 0;
      Win32FreePool(v3);
    }
    vSpWndobjChange(v20, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v11);
    if ( v14 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v14);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v20);
  }
}
