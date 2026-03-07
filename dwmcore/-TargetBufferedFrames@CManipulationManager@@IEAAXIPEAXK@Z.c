void __fastcall CManipulationManager::TargetBufferedFrames(
        CManipulationManager *this,
        int a2,
        void *a3,
        unsigned int a4)
{
  int v5; // eax
  __int64 v7; // r10
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rcx

  v5 = *((_DWORD *)this + 58) - 1;
  v7 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 28);
      v11 = 0;
      v12 = *(_QWORD *)(v10 + 8 * v7);
      v13 = *(_DWORD *)(v12 + 16);
      if ( a4 < v13 && *(_DWORD *)(248LL * a4 + v12 + 372) == a2 )
      {
        v11 = a4;
      }
      else
      {
        if ( v13 )
        {
          while ( *(_DWORD *)(248LL * v11 + v12 + 372) != a2 )
          {
            if ( ++v11 >= v13 )
              goto LABEL_10;
          }
          a4 = v11;
        }
LABEL_10:
        if ( v11 == v13 )
          return;
      }
      v14 = 248LL * v11;
      if ( *(_QWORD *)(v14 + v12 + 392) == -1LL )
      {
        *(_QWORD *)(v14 + v12 + 392) = a3;
        *(_BYTE *)(*(_QWORD *)(v10 + 8 * v7--) + 176LL) |= 1u;
        if ( v7 >= 0 )
          continue;
      }
      return;
    }
  }
}
