__int64 __fastcall HalpInterruptGetNextProcessorLocalId(char a1, _DWORD *a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  _BYTE *v15; // rax
  int v16; // eax
  int v17; // edx
  __int64 i; // rax
  __int128 v19; // xmm0

  v4 = 0LL;
  v5 = 0LL;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  v7 = MaximumRegisteredProcessorCount;
  if ( (a1 & 1) != 0 )
  {
    v12 = 0;
    if ( MaximumRegisteredProcessorCount )
    {
      v13 = HalpInterruptDynamicProcessorState;
      do
      {
        v5 = v13;
        if ( !*(_BYTE *)(v13 + 12) )
          break;
        if ( *(_DWORD *)v13 == *a2 )
          v4 = v13;
        ++v12;
        v13 += 64LL;
      }
      while ( v12 < MaximumRegisteredProcessorCount );
    }
  }
  if ( *a2 == -1 )
  {
    if ( (a1 & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
      {
        v15 = (_BYTE *)(HalpInterruptProcessorState + 56);
        do
        {
          v5 = (ULONG_PTR)(v15 - 56);
          if ( !*(v15 - 44) && !*v15 )
            break;
          ++v14;
          v15 += 64;
        }
        while ( v14 < (unsigned int)HalpInterruptProcessorCount );
      }
      if ( v14 != (_DWORD)HalpInterruptProcessorCount )
      {
        v16 = *(_DWORD *)v5;
        v10 = 0;
        *(_BYTE *)(v5 + 12) = 1;
        *a2 = v16;
        return v10;
      }
      return 3221226021LL;
    }
  }
  else
  {
    v8 = (unsigned int)HalpInterruptProcessorCount;
    v9 = 0;
    v10 = -1073741275;
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      while ( 1 )
      {
        v5 = HalpInterruptProcessorState + ((unsigned __int64)v9 << 6);
        if ( *(_DWORD *)v5 == *a2 )
          break;
        if ( ++v9 >= (unsigned int)HalpInterruptProcessorCount )
          goto LABEL_9;
      }
      if ( *(_BYTE *)(v5 + 12) )
        return 3221227272LL;
      *(_BYTE *)(v5 + 12) = 1;
      v10 = 0;
    }
LABEL_9:
    if ( (a1 & 2) == 0 )
    {
      if ( v10 == -1073741275 )
      {
        if ( (a1 & 1) == 0 )
          return v10;
        v5 = HalpInterruptProcessorState + (v8 << 6);
        *(_BYTE *)(v5 + 12) = 1;
        *(_DWORD *)v5 = *a2;
        *(_DWORD *)(v5 + 8) = *a2;
        if ( v4 )
          *(_DWORD *)(v5 + 8) = *(_DWORD *)(v4 + 8);
        LODWORD(HalpInterruptProcessorCount) = v8 + 1;
        v10 = 0;
      }
      else if ( (a1 & 1) == 0 )
      {
        return v10;
      }
      if ( !v4 )
      {
        v17 = 0;
        if ( v7 )
        {
          for ( i = HalpInterruptDynamicProcessorState; *(_BYTE *)(i + 12); i += 64LL )
          {
            if ( ++v17 >= v7 )
              return v10;
          }
          v19 = *(_OWORD *)v5;
          ++HalpInterruptDynamicProcessorCount;
          *(_OWORD *)i = v19;
          *(_OWORD *)(i + 16) = *(_OWORD *)(v5 + 16);
          *(_OWORD *)(i + 32) = *(_OWORD *)(v5 + 32);
          *(_OWORD *)(i + 48) = *(_OWORD *)(v5 + 48);
        }
      }
      return v10;
    }
    return 0LL;
  }
}
