/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C012F910
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  int v4; // ecx
  __int64 v5; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  struct _RECTL v14; // [rsp+38h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    if ( *((_BYTE *)this + 49) )
    {
      v4 = *(_DWORD *)(v1 + 36);
      if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v1 + 472) )
        {
          if ( *(_DWORD *)(v1 + 488) )
          {
            v5 = *(_QWORD *)(v1 + 1184);
            v14 = *(struct _RECTL *)(v1 + 1080);
            if ( !ERECTL::bEmpty((ERECTL *)&v14) )
            {
              v3 = 0;
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
              if ( v11 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v11, &v14);
                v6 = (_DWORD *)(*((_QWORD *)this + 4) + 1080LL);
                *v6 = 0;
                v6[1] = 0;
                v6[2] = 0;
                v6[3] = 0;
                if ( v5 )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
                  v9 = *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL);
                  v13 = v9;
                  if ( v12 && v9 && RGNOBJ::bMerge((RGNOBJ *)&v12, (struct RGNOBJ *)&v13, (struct RGNOBJ *)&v11, 0xEu) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&v12, (struct RGNOBJ *)&v13);
                    v3 = 1;
                    *(_QWORD *)(*((_QWORD *)this + 4) + 1184LL) = v13;
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
                }
                else
                {
                  v7 = *((_QWORD *)this + 4);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v11);
                  v8 = v11;
                  v11 = 0LL;
                  v3 = 1;
                  *(_QWORD *)(v7 + 1184) = v8;
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
            }
          }
        }
      }
    }
  }
  return v3;
}
