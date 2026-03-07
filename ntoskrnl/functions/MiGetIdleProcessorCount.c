__int64 __fastcall MiGetIdleProcessorCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 i; // r14
  __int64 v6; // rsi
  __int64 FirstSetRightGroupAffinity; // r8
  int v8; // r9d
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned int v11; // eax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 48LL * a2); v3 < *(_DWORD *)(a1 + 20); ++v3 )
  {
    v6 = *(_QWORD *)(i + 16LL * v3);
    v13 = *(_OWORD *)(i + 16LL * v3);
    while ( v6 )
    {
      FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity(&v13);
      v8 = 1;
      v9 = *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 200) | v6 & *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity]
                                                                                            + 34912);
      v6 &= ~v9;
      *(_QWORD *)&v13 = v6;
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = (_QWORD *)KiProcessorBlock[FirstSetRightGroupAffinity];
          if ( v10[1] != v10[3] )
            break;
          FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
          v9 &= ~v10[25];
          if ( !v9 )
            goto LABEL_7;
        }
        v8 = 0;
      }
LABEL_7:
      v11 = v2 + 1;
      if ( !v8 )
        v11 = v2;
      v2 = v11;
    }
  }
  return v2;
}
