void __fastcall vSpComputeNoPresentRegion(REGION **a1, int a2)
{
  REGION *v2; // rbx
  REGION *v5; // rcx
  REGION *v6; // rsi
  REGION *v7; // rcx
  HRGN ClientRgn; // rax
  int v9; // eax
  struct RGNOBJ *v10; // r8
  REGION *v11; // [rsp+20h] [rbp-29h] BYREF
  struct _POINTL v12; // [rsp+28h] [rbp-21h] BYREF
  REGION *v13; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  __int64 v15; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-1h] BYREF
  struct _RECTL v17; // [rsp+60h] [rbp+17h] BYREF
  struct _RECTL v18; // [rsp+70h] [rbp+27h] BYREF

  v2 = *a1;
  v17 = 0LL;
  v13 = v2;
  Gre::Base::Globals((Gre::Base *)a1);
  v5 = a1[131];
  if ( v5 )
  {
    REGION::vDeleteREGION(v5);
    a1[131] = 0LL;
  }
  if ( !a2 )
  {
    v7 = a1[130];
    if ( v7 )
    {
      REGION::vDeleteREGION(v7);
      a1[130] = 0LL;
    }
  }
  v6 = a1[10];
  if ( v6 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v11);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
    if ( v11 && v15 )
    {
      *(_QWORD *)&v17.left = 0LL;
      *(_QWORD *)&v17.right = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v13);
      RGNOBJ::vSet((RGNOBJ *)&v11, &v17);
      RGNOBJ::vSet((RGNOBJ *)&v15, &v17);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
      if ( v14 )
      {
        do
        {
          v18 = 0LL;
          ClientRgn = (HRGN)UserGetClientRgn(*(_QWORD *)v6, &v18, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, ClientRgn, 0, 0);
          if ( v16[0] )
          {
            v12.x = -*((_DWORD *)v2 + 640);
            v12.y = -*((_DWORD *)v2 + 641);
            RGNOBJ::bOffset((RGNOBJ *)v16, &v12);
            v13 = a1[88];
            RGNOBJ::vSet((RGNOBJ *)&v13, &v18);
            v12.x = -*((_DWORD *)v2 + 640);
            v12.y = -*((_DWORD *)v2 + 641);
            RGNOBJ::bOffset((RGNOBJ *)v16, &v12);
            RGNOBJ::bOffset((RGNOBJ *)&v13, &v12);
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v16);
            v10 = (struct RGNOBJ *)&v13;
            if ( v9 != 1 )
              v10 = (struct RGNOBJ *)v16;
            if ( RGNOBJ::bMerge((RGNOBJ *)&v14, (struct RGNOBJ *)&v11, v10, 4u) )
              RGNOBJ::vSwap((RGNOBJ *)&v14, (struct RGNOBJ *)&v11);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v16);
          }
          v6 = (REGION *)*((_QWORD *)v6 + 1);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
        }
        while ( v6 );
      }
      REGION::vStamp(v11);
      if ( a2 )
        a1[131] = v11;
      else
        a1[130] = v11;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion((struct _SPRITESTATE *)a1);
}
