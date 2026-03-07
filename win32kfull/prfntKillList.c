__int64 __fastcall prfntKillList(Gre::Base *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 *v4; // rbx
  struct RFONT *v6; // rsi
  __int64 v7; // rcx
  struct RFONT *v8; // rax
  __int64 *v9; // rdx
  struct RFONT *v10; // rsi
  __int64 v11; // rcx
  struct RFONT *v12; // rax
  __int64 *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0LL;
  v20 = 0LL;
  v3 = Gre::Base::Globals(a1);
  v17 = *((_QWORD *)v3 + 3);
  GreAcquireSemaphore(v17);
  v16 = *((_QWORD *)v3 + 1);
  GreAcquireSemaphore(v16);
  GreAcquireHmgrSemaphore();
  v4 = (__int64 *)*((_QWORD *)v3 + 760);
  if ( v4 )
  {
    do
    {
      if ( (v4[5] & 1) != 0 )
      {
        v19 = v4;
        v6 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
        while ( v6 )
        {
          v7 = *(_QWORD *)a1;
          v8 = v6;
          v18 = v6;
          v6 = (struct RFONT *)*((_QWORD *)v6 + 84);
          if ( *((_QWORD *)v8 + 16) == v7 && !*((_DWORD *)v8 + 165) )
          {
            v15 = *(_QWORD *)(v7 + 72);
            RFONTOBJ::vRemove(&v18, &v15, 0LL);
            *(_QWORD *)(*(_QWORD *)a1 + 72LL) = v15;
            if ( (v4[5] & 0x800000) != 0 )
              v9 = (__int64 *)v4[437];
            else
              v9 = v4;
            RFONTOBJ::vRemove(&v18, v9 + 189, 1LL);
            RFONTOBJ::vInsert(&v18, &v20, 1LL);
          }
          v18 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
        }
        v10 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
        while ( v10 )
        {
          v11 = *(_QWORD *)a1;
          v12 = v10;
          v18 = v10;
          v10 = (struct RFONT *)*((_QWORD *)v10 + 84);
          if ( *((_QWORD *)v12 + 16) == v11 )
          {
            v15 = *(_QWORD *)(v11 + 72);
            RFONTOBJ::vRemove(&v18, &v15, 0LL);
            *(_QWORD *)(*(_QWORD *)a1 + 72LL) = v15;
            if ( (v4[5] & 0x800000) != 0 )
              v13 = (__int64 *)v4[437];
            else
              v13 = v4;
            RFONTOBJ::vRemove(&v18, v13 + 190, 1LL);
            RFONTOBJ::vInsert(&v18, &v20, 1LL);
            v14 = PDEVOBJ::cInactive((PDEVOBJ *)&v19) - 1;
            if ( (v4[5] & 0x800000) != 0 )
              *(_DWORD *)(v4[437] + 1528) = v14;
            else
              *((_DWORD *)v4 + 382) = v14;
          }
          v18 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
    v1 = v20;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v1;
}
