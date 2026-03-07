__int64 __fastcall IommupHvAttachPasidDeviceDomain(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  volatile signed __int64 *v7; // rdi
  signed __int32 v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+28h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp-18h]

  v12 = 0LL;
  v4 = 0;
  v16 = 0LL;
  v17 = 0;
  LODWORD(v15) = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    LODWORD(v12) = *(_DWORD *)(a2 + 48);
    BYTE4(v12) = *(_BYTE *)(a2 + 52);
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *))qword_140C622B0)(v10, &v12);
  }
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    v7 = (volatile signed __int64 *)(a2 + 104);
    ExAcquirePushLockExclusiveEx(a2 + 104, 0LL);
    if ( *(_DWORD *)(a2 + 96) )
      goto LABEL_9;
    if ( !*(_BYTE *)(a2 + 100) )
    {
      v8 = _InterlockedIncrement(&HalpIommuDomainId);
      *(_BYTE *)(a2 + 100) = 1;
      *(_DWORD *)(a2 + 48) = v8;
    }
    v9 = *(_DWORD *)(a2 + 48);
    v17 = 0;
    LODWORD(v12) = v9;
    BYTE4(v12) = 1;
    v16 = v12;
    v4 = ((__int64 (__fastcall *)(__int64 *))qword_140C622A8)(&v16);
    if ( v4 < 0 )
      goto LABEL_10;
    v15 = 0LL;
    *(_QWORD *)&v13 = 1LL;
    v14 = 0LL;
    LOBYTE(v14) = 1;
    *((_QWORD *)&v13 + 1) = a3;
    v4 = ((__int64 (__fastcall *)(__int64 *, __int128 *))qword_140C62310)(&v12, &v13);
    if ( v4 >= 0 )
LABEL_9:
      ++*(_DWORD *)(a2 + 96);
    else
      ((void (__fastcall *)(__int64 *))qword_140C622C0)(&v12);
LABEL_10:
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
  }
  return (unsigned int)v4;
}
