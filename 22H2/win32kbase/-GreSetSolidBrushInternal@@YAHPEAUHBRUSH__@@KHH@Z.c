/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C0060550 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C00D1630 (GreSetSolidBrush.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0042940 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00892E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rcx
  struct OBJECT *v9; // rbx
  unsigned int v10; // eax
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  bool v16; // zf
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+40h] [rbp-58h]
  struct OBJECT *v24[6]; // [rsp+50h] [rbp-48h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v24, a1);
  v9 = v24[0];
  if ( v24[0] )
  {
    v10 = *((_DWORD *)v24[0] + 10);
    if ( (v10 & 0x10) != 0 && ((v10 & 0x200) == 0 || a4) && ((v10 >> 10) & 1) == a3 )
    {
      v11 = 0LL;
      v12 = 0;
      GreAcquireHmgrSemaphore(v8);
      if ( *((_DWORD *)v9 + 2) == 1 || a4 )
      {
        *((_DWORD *)v9 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v22, v9, 0, 0, 0);
        if ( v23 )
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
              v20 = HmgSafeNextObjt(v19, 1, &v21);
              v19 = v20;
              if ( !v20 )
                break;
              if ( *(struct OBJECT **)(v21 + 1312) == v9 )
                *(_DWORD *)(v21 + 316) |= 1u;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
        }
        v13 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
        v15 = _InterlockedIncrement((volatile signed __int32 *)(v13 + 744));
        v16 = v23 == 0;
        *((_DWORD *)v9 + 11) = v15;
        if ( !v16 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v22);
      }
      GreReleaseHmgrSemaphore(v13);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v11, v12);
        *((_QWORD *)v9 + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v24);
  return v7;
}
