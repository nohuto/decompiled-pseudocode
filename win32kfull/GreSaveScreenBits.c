__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int128 *); // rbp
  __int64 v11; // rax
  __int128 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = 0LL;
  v8 = 0LL;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v19, *((HSEMAPHORE *)v9 + 10));
  v18 = *((_QWORD *)v9 + 15);
  GreAcquireSemaphore(v18);
  if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
  {
    v17 = *((_QWORD *)v9 + 14);
    GreAcquireSemaphore(v17);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(a1 + 2984);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 2528);
      v12 = &v20;
      if ( a2 != 2 )
        v12 = a4;
      v13 = 0LL;
      v14 = (v11 + 24) & -(__int64)(v11 != 0);
      if ( v14 )
      {
        v15 = *(_DWORD *)(((v11 + 24) & -(__int64)(v11 != 0)) + 0x58);
        if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
        {
          v13 = v14 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v14 - 24 + 48));
        }
      }
      v8 = v10(v14, a2, a3, v12);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v19);
  return v8;
}
