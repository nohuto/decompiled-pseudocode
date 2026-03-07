__int64 __fastcall VidSchiCompletePendingFlipOnPlane(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ecx
  int v12; // edx
  __int64 v14; // r9
  char v15; // [rsp+28h] [rbp-30h]
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 80) )
    {
      v9 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 3200) + 288LL * *(unsigned int *)(a4 + 84) + 188);
      if ( (int)v9 > -1 )
      {
        v10 = *(_QWORD *)(a2 + 3328) + 160 * v9;
        if ( v10 )
        {
          if ( (unsigned int)(*(_DWORD *)(v10 + 112) - 1) <= 1 )
          {
            v16[0] = 0LL;
            v14 = *(_QWORD *)(v10 + 8);
            v17 = 0;
            v15 = 0;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64, _DWORD, char, char *, _QWORD *))VidSchExitIndependentFlipInternal)(
              a1,
              a2,
              v10,
              v14,
              0,
              v15,
              &v17,
              v16);
          }
        }
      }
    }
    if ( *(_BYTE *)(a2 + 59) )
    {
      v12 = *(_DWORD *)(a4 + 76);
      v11 = ((_BYTE)v12 + 1) & 0x3F;
    }
    else
    {
      v11 = 0;
      v12 = 63;
    }
    VidSchiCompleteFlipEntry(a1, a2, a3, a4, v11, v12, a5, 0LL);
  }
  return 0LL;
}
