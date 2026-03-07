__int64 __fastcall XEPALOBJ::bDeletePaletteInternal(XEPALOBJ *a1, int a2)
{
  __int64 v4; // rax
  struct HOBJ__ **v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  void *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = SGDGetSessionState(a1);
  v5 = *(struct HOBJ__ ***)a1;
  v6 = 0;
  v7 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v7 + 6000) && v5 != *(struct HOBJ__ ***)(v7 + 6032) || *(_DWORD *)(v7 + 3192) )
  {
    if ( ((_DWORD)v5[3] & 0x100) != 0 )
    {
      if ( *((_DWORD *)v5 + 14) )
        return 0LL;
      XEPALOBJ::vMakeNoXlate(a1);
    }
    if ( a2 )
    {
      if ( a2 != 1 || !HmgRemoveObjectImpl(**(struct HOBJ__ ***)a1, 0, 1, 2u, 8, 0LL) )
        return v6;
    }
    else if ( !HmgRemoveObjectImpl(**(struct HOBJ__ ***)a1, 0, 1, 0, 8, 0LL) )
    {
      if ( (unsigned int)GreGetObjectOwner(**(_QWORD **)a1, 8LL) )
        *(_WORD *)(*(_QWORD *)a1 + 14LL) |= 0x4000u;
      return v6;
    }
    v9 = *(void **)(*(_QWORD *)a1 + 104LL);
    if ( v9 )
    {
      if ( v9 != *(void **)(v7 + 3936) )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = 0LL;
    }
    if ( !*(_DWORD *)(v7 + 3192) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x800) != 0 )
      {
        v11 = *(_QWORD **)(*(_QWORD *)a1 + 48LL);
        if ( v11 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
          if ( (unsigned int)GreGetObjectOwner(*v11, 8LL) != -2147483646 )
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v12);
        }
      }
      v10 = *(_QWORD **)(*(_QWORD *)a1 + 120LL);
      if ( *(_QWORD **)a1 != v10 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)a1 + 120LL);
        if ( (unsigned int)GreGetObjectOwner(*v10, 8LL) != -2147483646 )
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v12);
      }
    }
    XEPALOBJ::FreePaletteMemory(a1);
    return 1;
  }
  return 1LL;
}
