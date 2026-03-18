/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0062FA0
 * Callers:
 *     SetSysColor @ 0x1C0062BAC (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C0063600 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C0169310 (GreSetSolidBrush.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0021A60 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00633F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00802E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  bool v18; // zf
  int v20; // ecx
  __int64 v21; // rcx
  __int64 Objt; // rax
  _BYTE v23[8]; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+38h] [rbp-60h]
  struct OBJECT *v25[7]; // [rsp+48h] [rbp-50h] BYREF

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, a1);
  v11 = v25[0];
  if ( v25[0] )
  {
    v12 = *((_DWORD *)v25[0] + 10);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      v14 = 0;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v23, v11, 0, 0, 0);
        if ( v24 )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 25) != -1 )
            {
              v20 = *((_DWORD *)v11 + 10);
              if ( v20 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 15);
                v14 = ((unsigned int)v20 >> 30) & 1;
              }
            }
            *((_DWORD *)v11 + 24) = 0;
            *((_DWORD *)v11 + 25) = -1;
            if ( a4 )
            {
              *((_DWORD *)v11 + 10) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v11 + 20) = 7;
              *((_DWORD *)v11 + 10) = 20;
            }
          }
          else
          {
            *((_DWORD *)v11 + 26) = -1;
            LODWORD(v21) = 0;
            *((_DWORD *)v11 + 27) = -1;
            *((_DWORD *)v11 + 28) = -1;
            while ( 1 )
            {
              Objt = HmgSafeNextObjt(v21, 1);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1312) == v11 )
                *(_DWORD *)(Objt + 316) |= 1u;
              v21 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
        }
        v18 = v24 == 0;
        *((_DWORD *)v11 + 11) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        if ( !v18 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v23);
      }
      GreReleaseHmgrSemaphore(v16, v15, v17);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v14);
        *((_QWORD *)v11 + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
  return v7;
}
