void __fastcall vUpdateClientRgnOnSpriteOverlap(struct EWNDOBJ *a1, struct RGNOBJ *a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  BOOL v6; // edi
  Gre::Base *v7; // rcx
  REGION *v8; // rcx
  struct REGION *v9; // rdx
  REGION *v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF

  if ( EWNDOBJ::bValid(a1) && (*(_DWORD *)(v5 + 184) & 0x200) != 0 )
  {
    v10 = *(REGION **)(v5 + 56);
    v15 = *(_QWORD *)(v5 + 192);
    if ( v15 )
    {
      if ( *v4 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
        if ( v14 )
        {
          v6 = 0;
          if ( (unsigned int)RGNOBJ::iComplexity(a2) == 1 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v14, (struct RGNOBJ *)&v15);
          }
          else
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)&v14, a2, (struct RGNOBJ *)&v15, 8u) )
            {
              if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) != 1 )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v14, a2);
                if ( RGNOBJ::bMerge((RGNOBJ *)&v14, (struct RGNOBJ *)&v15, a2, 4u) )
                  v6 = RGNOBJ::iComplexity((RGNOBJ *)&v14) != 1;
              }
            }
            if ( !v6 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v14);
              goto LABEL_16;
            }
          }
          if ( !RGNOBJ::bEqual((RGNOBJ *)&v10, (struct RGNOBJ *)&v14) )
          {
            v12 = *((_QWORD *)Gre::Base::Globals(v7) + 7);
            GreAcquireSemaphore(v12);
            v11 = *((_QWORD *)a1 + 25);
            GreAcquireSemaphore(v11);
            RGNOBJ::vSwap((RGNOBJ *)&v14, (struct RGNOBJ *)&v10);
            v8 = v10;
            *((_QWORD *)a1 + 7) = v10;
            REGION::vStamp(v8);
            v9 = (struct REGION *)*((_QWORD *)a1 + 7);
            v13 = *((_OWORD *)a1 + 2);
            EWNDOBJ::vSetClip((__int64)a1, v9, &v13);
            (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a1 + 21) + 40LL))(a1, 512LL);
            SEMOBJ::vUnlock((SEMOBJ *)&v11);
            SEMOBJ::vUnlock((SEMOBJ *)&v12);
          }
        }
LABEL_16:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
      }
    }
  }
}
