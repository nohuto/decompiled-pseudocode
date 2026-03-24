/*
 * XREFs of ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x180227398
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18022746C (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationManager::TargetBufferedFrames(
        CManipulationManager *this,
        int a2,
        void *a3,
        unsigned int a4)
{
  int v5; // eax
  __int64 i; // r10
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // rcx

  v5 = *((_DWORD *)this + 64) - 1;
  for ( i = v5; i >= 0; *(_BYTE *)(*(_QWORD *)(v10 + 8 * i--) + 72LL) |= 1u )
  {
    v10 = *((_QWORD *)this + 31);
    v11 = 0;
    v12 = *(_QWORD *)(v10 + 8 * i);
    v13 = *(_DWORD *)(v12 + 16);
    if ( a4 < v13 && *(_DWORD *)(248LL * a4 + v12 + 164) == a2 )
    {
      v11 = a4;
    }
    else if ( v13 )
    {
      while ( *(_DWORD *)(248LL * v11 + v12 + 164) != a2 )
      {
        if ( ++v11 >= v13 )
          goto LABEL_10;
      }
      a4 = v11;
    }
LABEL_10:
    if ( v11 == v13 )
      break;
    v14 = 248LL * v11;
    if ( *(_QWORD *)(v14 + v12 + 184) != -1LL )
      break;
    *(_QWORD *)(v14 + v12 + 184) = a3;
  }
}
