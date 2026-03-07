__int64 __fastcall ViThunkApplyPristineCurrentSession(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 Pristine; // r10
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = (_QWORD *)RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 12, (int)&v13);
  if ( v4 && v13 )
  {
    v5 = ViWdmThunksWithIatIndex;
    v6 = v13 >> 3;
    if ( ViWdmThunksWithIatIndex )
    {
      memset(ViWdmThunksWithIatIndex, 0, 24LL * (unsigned int)ViNumberOfWdmThunks);
      if ( v6 )
      {
        do
        {
          Pristine = ViThunkGetPristine(*v4, &VfPoolThunks);
          if ( Pristine
            || (Pristine = ViThunkGetPristine(v7, &VfRegularThunks)) != 0
            || (Pristine = ViThunkGetPristine(v10, &VfDifThunks)) != 0 )
          {
            v11 = 3 * v3;
            v3 = (unsigned int)(v3 + 1);
            v5[2 * v11] = v9;
            *(_QWORD *)&v5[2 * v11 + 2] = Pristine;
          }
          ++v4;
        }
        while ( v9 + 1 < v6 );
        if ( (_DWORD)v3 )
        {
          v2 = MmApplyVerifierToRunningImage(a1, ViWdmThunksWithIatIndex, (unsigned int)v3);
          if ( v2 >= 0 )
            VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88), 1);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
