void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  struct _SURFOBJ *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  struct _DISPSURF *i; // rbx
  __int64 v10; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v12)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v13)(struct _SURFOBJ *, _QWORD, void *); // rax
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  HDEV v15; // [rsp+30h] [rbp-40h]
  int v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  __int16 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]

  hdev = a1->hdev;
  v6 = a1;
  if ( hdev || (hdev = (HDEV)UserGetHDEV()) != 0LL )
  {
    v18 = 0;
    v19 = 0;
    v22 = 0LL;
    v21 = 0LL;
    v17 = 0LL;
    v14 = 0LL;
    v20 = 256;
    v16 = 1;
    if ( ((_DWORD)hdev[10] & 1) != 0 )
    {
      Gre::Base::Globals((Gre::Base *)a1);
      *(_QWORD *)&v14 = *((_QWORD *)hdev + 6);
      v15 = hdev;
      GreAcquireSemaphore(v14);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v14, 11LL);
    }
    v7 = *((_DWORD *)hdev + 10);
    if ( (v7 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 221); i; i = *(struct _DISPSURF **)i )
      {
        v10 = *((_QWORD *)i + 6);
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v10 + 2096) & 0x8000) != 0 )
          {
            a1 = *(struct _SURFOBJ **)(v10 + 1760);
            if ( *(_QWORD *)&a1[9].cjBits )
            {
              DevBitmap = GetDevBitmap(i, v6);
              v12(DevBitmap, a2, a3);
            }
          }
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[448] & 0x8000000) != 0 && ((_DWORD)hdev[524] & 0x8000) != 0 )
    {
      v13 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 220) + 760LL);
      if ( v13 )
        v13(v6, a2, a3);
    }
    v8 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
    if ( *(_DWORD *)(v8 + 23660) && a2 == 5 )
    {
      *(_DWORD *)(v8 + 23660) = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v14);
    if ( v17 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v17);
  }
}
