__int64 __fastcall VIDMM_LINEAR_POOL::VerifyIntegrity(VIDMM_LINEAR_POOL *this)
{
  __int64 v1; // rsi
  char *v2; // r14
  char *v3; // r10
  __int64 v4; // rdx
  unsigned int v5; // r8d
  char *v7; // r9
  char v8; // cl
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 ActiveVprEnd; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  VIDMM_LINEAR_POOL *v17; // rcx
  char v18; // r10
  unsigned __int64 v19; // r9
  char *v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi

  v1 = 0LL;
  v2 = (char *)this + 72;
  v3 = (char *)*((_QWORD *)this + 9);
  v4 = 0LL;
  v5 = 0;
  while ( v3 != v2 )
  {
    v7 = v3 - 40;
    v3 = *(char **)v3;
    v8 = v7[56];
    if ( v8 == 3 || (unsigned __int8)(v8 - 5) > 2u && (++v4, v8 == 4) )
    {
      v9 = *((_QWORD *)v7 + 2);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 120);
        if ( v9 == (v9 | 1) )
          v5 = -1073741823;
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 412) == 1 ? *(_QWORD *)(v10 + 416) : *(_QWORD *)(v10 + 384);
          ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v10);
          if ( v11 != ActiveVprEnd )
          {
            v14 = *(_QWORD *)v7;
            v15 = *(_QWORD *)v7 + *((_QWORD *)v7 + 1);
            if ( v15 <= v11 || v14 >= ActiveVprEnd )
            {
              if ( (**(_DWORD **)(v13 + 536) & 0x20000) != 0 )
                v5 = -1073741823;
            }
            else
            {
              if ( v14 < v11 )
                v5 = -1073741823;
              if ( v15 > ActiveVprEnd )
                v5 = -1073741823;
              if ( (**(_DWORD **)(v13 + 536) & 0x20000) == 0 )
                v5 = -1073741823;
            }
          }
        }
      }
    }
    if ( *(_QWORD *)v7 != v1 )
      v5 = -1073741823;
    v1 += *((_QWORD *)v7 + 1);
  }
  v16 = *((_QWORD *)this + 1);
  v17 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  v18 = 1;
  if ( v1 != v16 )
    v5 = -1073741823;
  v19 = 0LL;
  while ( v17 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v20 = (char *)v17 - 24;
    v17 = *(VIDMM_LINEAR_POOL **)v17;
    v21 = *(_QWORD *)v20;
    v22 = *((_QWORD *)v20 + 1);
    if ( *(_QWORD *)v20 < v19 )
      v5 = -1073741823;
    if ( !v22 )
      v5 = -1073741823;
    if ( v18 == 2 && v20[56] == 2 && v21 <= v19 )
      v5 = -1073741823;
    v18 = v20[56];
    if ( ((v18 - 3) & 0xFD) != 0 )
      --v4;
    v19 = v21 + v22;
  }
  if ( v4 )
    v5 = -1073741823;
  if ( *(_QWORD *)(*((_QWORD *)this + 10) - 40LL) + *(_QWORD *)(*((_QWORD *)this + 10) - 32LL) != v16 )
    return (unsigned int)-1073741823;
  return v5;
}
