char __fastcall PopPowerRequestHandleRequestUpdate(__int64 a1, unsigned int a2, char a3)
{
  __int64 (__fastcall **v6)(); // rbx
  int v7; // eax
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edi
  int v13; // r14d
  unsigned __int8 v14; // si
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD Src[20]; // [rsp+30h] [rbp-58h] BYREF

  v6 = &PopPowerRequestAttributes + 6 * (int)a2;
  v7 = *((_DWORD *)v6 + 2);
  v8 = v7 + 1;
  v9 = v7 - 1;
  if ( a3 )
    v9 = v8;
  *((_DWORD *)v6 + 2) = v9;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      if ( a2 <= 3 )
      {
        v16 = PopPowerRequestNotificationsEnabled == 0;
        *(_BYTE *)((int)a2 + a1 + 153) = a3;
        if ( !v16 )
        {
          memset(Src, 0, 0x48uLL);
          Src[2] = *(_DWORD *)(a1 + 36);
          Src[0] = 16;
          Src[3] = a2;
          LOBYTE(Src[4]) = a3;
          LOBYTE(v9) = PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
        }
      }
    }
  }
  v10 = *((_DWORD *)v6 + 3);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 4) == 0 )
    {
      v11 = v10 | 4;
      *((_DWORD *)v6 + 3) = v11;
      v12 = 0;
      while ( 1 )
      {
        v13 = v11 & 2;
        v14 = *((_DWORD *)v6 + 2) != 0;
        LOBYTE(v9) = v13 != 0;
        if ( (_BYTE)v9 == v14 )
          break;
        PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
        LOBYTE(v15) = v14;
        ((void (__fastcall *)(_QWORD, _QWORD, __int64))*v6)(0LL, a2, v15);
        PopAcquirePowerRequestPushLock(1);
        v11 = *((_DWORD *)v6 + 3) & 0xFFFFFFFD | (2 * v14);
        *((_DWORD *)v6 + 3) = v11;
        if ( v13 )
        {
          if ( (unsigned int)++v12 >= 3 )
          {
            ++*((_DWORD *)v6 + 2);
            v19[0] = 0LL;
            v19[1] = -1LL;
            *((_DWORD *)v6 + 3) = v11 | 8;
            LOBYTE(v9) = KeSetTimer2((__int64)&PopPowerRequestDebounceTimer, -50000000LL, 0LL, (__int64)v19);
            break;
          }
        }
      }
      *((_DWORD *)v6 + 3) &= ~4u;
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    LOBYTE(v17) = a3;
    ((void (__fastcall *)(__int64, _QWORD, __int64))*v6)(a1, a2, v17);
    LOBYTE(v9) = (unsigned __int8)PopAcquirePowerRequestPushLock(1);
  }
  return v9;
}
