__int64 __fastcall DXGADAPTER::QueryTrackedWorkloadSupport(
        DXGADAPTER *this,
        unsigned int a2,
        enum DXGK_ENGINE_TYPE a3,
        int *a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // eax
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = 0;
  *a4 = 0;
  if ( *((int *)this + 638) < 0x2000 )
    v7 = 1;
  else
    v7 = *((_DWORD *)this + 72);
  if ( a2 < v7 )
  {
    v8 = (unsigned __int16 *)(*((_QWORD *)this + 351) + 344LL * a2);
    v9 = *((_QWORD *)v8 + 4);
    if ( v9 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v11 = 0LL;
        do
        {
          v12 = v11 + v9;
          if ( *(_DWORD *)(v11 + v9) == a3 )
          {
            *a4 = (*(_DWORD *)(v12 + 68) >> 2) & 1;
            if ( (*(_BYTE *)(v12 + 68) & 4) == 0 )
              return 0LL;
            v9 = *((_QWORD *)v8 + 4);
          }
          ++v4;
          v11 += 74LL;
        }
        while ( v4 < v10 );
      }
    }
  }
  return 0LL;
}
