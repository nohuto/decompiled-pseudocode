__int64 __fastcall WheapWmiExecutePageOfflineMethod(int a1, unsigned int a2, unsigned int *a3, __int64 a4, int *a5)
{
  unsigned int v5; // ebx
  int v7; // esi
  unsigned int v8; // eax

  v5 = 0;
  v7 = 0;
  if ( a5 )
  {
    *a5 = 0;
    if ( a1 == 1 )
    {
      if ( a2 >= 4 && a3 && *a3 >= 0x48 )
      {
        v7 = 4;
        v8 = WheaPageOfflineAndPersist(a3 + 1);
        *a3 = v8;
        if ( v8 != 259 )
          v5 = v8;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    else
    {
      v5 = -1073741161;
    }
    *a5 = v7;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
