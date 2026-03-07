__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, LONG a3)
{
  unsigned int v3; // edi
  __int64 *v8; // rbx
  struct _SURFOBJ *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  _DWORD *pvScan0; // r14
  struct _POINTL v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v16[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v17; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  v14 = 0LL;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v15 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v16, (struct PDEVOBJ *)&v15);
  v9 = (struct _SURFOBJ *)v8[128];
  v17.right = a2 + 1;
  v17.bottom = a3 + 1;
  v10 = *((_QWORD *)a1 + 2);
  v17.left = a2;
  v17.top = a3;
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 104LL);
  if ( (*(_DWORD *)(v11 + 24) & 2) != 0 )
    v12 = **(_DWORD **)(v11 + 112) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 8LL);
  else
    v12 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v17) )
  {
    v14.x = -a2;
    v14.y = -a3;
    pvScan0 = v9->pvScan0;
    *pvScan0 = 0;
    vSpComposite(a1, &v14, v9, &v17);
    if ( (v12 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v14, v9, &v17);
      LOBYTE(v3) = (v12 & *pvScan0) != v12;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v16);
  return v3;
}
