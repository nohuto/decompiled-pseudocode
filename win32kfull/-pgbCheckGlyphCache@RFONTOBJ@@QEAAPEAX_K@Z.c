unsigned __int64 __fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  __int64 *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx

  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 584LL);
  if ( v5 + a2 >= v5 )
  {
    if ( v5 + a2 <= *(_QWORD *)(v4 + 592) )
      return v5;
    v7 = *(__int64 **)(v4 + 576);
    if ( v7 && (v14 = *v7) != 0 )
    {
      v5 = v14 + 8;
      v15 = *(unsigned int *)(v4 + 552) - 8LL;
      *(_QWORD *)(v4 + 576) = v14;
      v16 = v15 + v14;
      *(_QWORD *)(v4 + 584) = v5;
      *(_QWORD *)(v4 + 592) = v16;
      if ( v5 + a2 <= v16 )
        return v5;
    }
    else
    {
      v8 = *(unsigned int *)(v4 + 560);
      if ( (_DWORD)v8 )
        v9 = *(_DWORD *)(v4 + 552);
      else
        v9 = *(_DWORD *)(v4 + 548);
      if ( (*(_DWORD *)(v4 + 84) & 1) == 0 && (unsigned int)v8 < *(_DWORD *)(v4 + 556) )
      {
        v10 = v9;
        if ( a2 + 8 <= (unsigned __int64)v9 )
        {
          if ( v9 )
          {
            v11 = (_QWORD *)Win32AllocPool(v9, 543319879LL, v8, a4);
            if ( v11 )
            {
              ++*(_DWORD *)(v4 + 560);
              v12 = *(_QWORD **)(v4 + 576);
              if ( v12 )
                *v12 = v11;
              else
                *(_QWORD *)(v4 + 568) = v11;
              *(_QWORD *)(v4 + 576) = v11;
              *v11 = 0LL;
              v13 = *(_QWORD *)(v4 + 576);
              v5 = v13 + 8;
              *(_QWORD *)(v4 + 584) = v13 + 8;
              *(_QWORD *)(v4 + 592) = v10 + v13 - 8;
              return v5;
            }
          }
          EngSetLastError(8u);
        }
      }
    }
  }
  return 0LL;
}
