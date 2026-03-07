__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r12d
  __int64 v8; // rcx
  struct OBJECT *v9; // rbx
  unsigned int v10; // eax
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int32 v15; // edx
  bool v16; // zf
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  struct OBJECT *v22[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+50h] [rbp-10h]

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v22, a1);
  v9 = v22[0];
  if ( v22[0] )
  {
    v10 = *((_DWORD *)v22[0] + 10);
    if ( (v10 & 0x10) != 0 && ((v10 & 0x200) == 0 || a4) && ((v10 >> 10) & 1) == a3 )
    {
      v11 = 0LL;
      v12 = 0;
      GreAcquireHmgrSemaphore(v8);
      if ( *((_DWORD *)v9 + 2) == 1 || a4 )
      {
        *((_DWORD *)v9 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v23, v9, 0, 0, 0);
        if ( v24 )
        {
          if ( *((_DWORD *)v9 + 2) == 1 )
          {
            if ( *((_DWORD *)v9 + 25) != -1 )
            {
              v18 = *((_DWORD *)v9 + 10);
              if ( v18 >= 0 )
              {
                v11 = (volatile signed __int32 *)*((_QWORD *)v9 + 15);
                v12 = ((unsigned int)v18 >> 30) & 1;
              }
            }
            *((_DWORD *)v9 + 24) = 0;
            *((_DWORD *)v9 + 25) = -1;
            if ( a4 )
            {
              *((_DWORD *)v9 + 10) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v9 + 20) = 7;
              *((_DWORD *)v9 + 10) = 20;
            }
          }
          else
          {
            v19 = 0LL;
            *((_DWORD *)v9 + 26) = -1;
            v21 = 0LL;
            *((_DWORD *)v9 + 27) = -1;
            *((_DWORD *)v9 + 28) = -1;
            while ( 1 )
            {
              LOBYTE(v13) = 1;
              v20 = HmgSafeNextObjt(v19, v13, &v21);
              v19 = v20;
              if ( !v20 )
                break;
              if ( *(struct OBJECT **)(v21 + 1312) == v9 )
                *(_DWORD *)(v21 + 316) |= 1u;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
        }
        v15 = _InterlockedExchangeAdd(
                (volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v14) + 24) + 744LL),
                1u);
        v16 = v24 == 0;
        *((_DWORD *)v22[0] + 11) = v15 + 1;
        if ( !v16 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
      }
      GreReleaseHmgrSemaphore();
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v11, v12);
        *((_QWORD *)v22[0] + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
  return v7;
}
