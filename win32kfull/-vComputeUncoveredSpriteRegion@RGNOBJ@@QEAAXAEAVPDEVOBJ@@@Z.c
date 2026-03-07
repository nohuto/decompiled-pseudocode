void __fastcall RGNOBJ::vComputeUncoveredSpriteRegion(RGNOBJ *this, struct PDEVOBJ *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // r14d
  LONG top; // edx
  __int64 v9; // r11
  LONG bottom; // edi
  int v11; // esi
  _DWORD *v12; // rbx
  struct _RECTL v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)a2;
  v13 = 0LL;
  v5 = *(_DWORD **)(v2 + 32);
  RGNOBJ::vSet(this);
  if ( !*(_DWORD *)(v3 + 196) )
    vSpComputeSpriteRanges((struct _SPRITESTATE *)(v3 + 80));
  v6 = *(_DWORD *)(v3 + 132);
  v15 = *(_QWORD *)(v3 + 216);
  v14 = v6;
  v16 = *(_QWORD *)(v15 + 8) + v15;
  v17 = v15 + 8;
  if ( (unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v14, &v13) )
  {
    v7 = 0x80000000;
    top = v13.top;
    v9 = 0LL;
    bottom = v13.top;
    v11 = *(_DWORD *)(*(_QWORD *)this + 52LL);
    while ( 1 )
    {
      if ( top != v7 )
      {
        ++v11;
        v5[1] = v7;
        v5[2] = bottom;
        *v5 = v9;
        v5[v9 + 3] = v9;
        if ( top != bottom )
        {
          ++v11;
          v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
          *v5 = 0;
          v5[1] = bottom;
          v5[2] = top;
          v5[3] = 0;
        }
        v7 = top;
        bottom = v13.bottom;
        v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
        v9 = 0LL;
      }
      v5[v9 + 3] = v13.left;
      v5[(unsigned int)(v9 + 1) + 3] = v13.right;
      if ( !(unsigned int)ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)&v14, &v13) )
        break;
      top = v13.top;
    }
    *v5 = v9;
    v5[1] = v7;
    v5[2] = bottom;
    v5[v9 + 3] = v9;
    v12 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    *v12 = 0;
    v12[1] = bottom;
    v12[2] = 0x7FFFFFFF;
    v12[3] = 0;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = v12 + 4;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v11 + 1;
    *(_DWORD *)(*(_QWORD *)this + 48LL) = *(_DWORD *)(*(_QWORD *)this + 40LL) - *(_DWORD *)(*(_QWORD *)this + 32LL);
  }
}
