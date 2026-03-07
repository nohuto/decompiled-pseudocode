__int64 PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rdi
  _DWORD *v1; // rbx
  __int64 v2; // r14
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdi
  char v8; // al
  _QWORD *v9; // rdx
  __int64 v10; // r8
  char v11; // cl
  _QWORD *v13; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_140C3D48C;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = (__int64 *)(v1 + 4);
      v4 = (__int64 *)*((_QWORD *)v1 + 2);
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 104) )
        {
          v4 = (__int64 *)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 104) = 1;
          if ( v4[9] != *(_QWORD *)&v1[2 * v2 + 16] )
            PopCallPowerSettingCallback(v4);
          v5 = (__int64 *)*v4;
          *((_BYTE *)v4 + 104) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v5;
        }
      }
      if ( (__int64 *)*v3 != v3 || v1[14] || v1[15] )
      {
        v6 = *(_QWORD *)v1;
      }
      else
      {
        v8 = 1;
        v9 = v1 + 16;
        v10 = 3LL;
        do
        {
          v11 = 0;
          if ( *v9++ == 0LL )
            v11 = v8;
          v8 = v11;
          --v10;
        }
        while ( v10 );
        v6 = *(_QWORD *)v1;
        if ( v11 )
        {
          if ( *(_DWORD **)(v6 + 8) != v1 || (v13 = (_QWORD *)*((_QWORD *)v1 + 1), (_DWORD *)*v13 != v1) )
            __fastfail(3u);
          *v13 = v6;
          *(_QWORD *)(v6 + 8) = v13;
          ExFreePoolWithTag(v1, 0x74655350u);
        }
      }
      if ( (PVOID *)v6 == &PopPowerSettings )
        break;
      v1 = (_DWORD *)v6;
    }
  }
  ExReleaseFastMutex(&PopSettingLock);
  return PopDecrementPowerSettingPendingUpdates(0);
}
