void __fastcall PanUnlockDisplayArea(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  __int64 v6; // r13
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rsi
  struct DHPDEV__ *v11; // r14
  HSEMAPHORE *v12; // rbx
  __int64 v13; // rdi
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  int v15[4]; // [rsp+30h] [rbp-10h] BYREF

  v14 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v14);
  v3 = *((_QWORD *)a1 + 8);
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = *(_DWORD *)(v3 + 32);
  v15[3] = *(_DWORD *)(v3 + 36);
  ERECTL::operator*=((int *)&v14, v15);
  if ( !ERECTL::bEmpty((ERECTL *)&v14) )
  {
    v4 = *((_DWORD *)a1 + 192);
    v5 = *((_DWORD *)a1 + 193);
    v6 = (int)(DWORD2(v14) / v4 + 1);
    v7 = (int)(DWORD1(v14) / v5);
    v8 = (int)(HIDWORD(v14) / v5 + 1);
    if ( v7 < v8 )
    {
      v9 = (int)((unsigned int)v14 / v4);
      v10 = v8 - v7;
      v11 = a1 + 16 * v7 + 2 * v9 + 2 * v7 + 30;
      do
      {
        if ( v9 < v6 )
        {
          v12 = (HSEMAPHORE *)v11;
          v13 = v6 - v9;
          do
          {
            if ( EngIsSemaphoreOwnedByCurrentThread(*v12) )
              EngReleaseSemaphore(*v12);
            ++v12;
            --v13;
          }
          while ( v13 );
        }
        v11 += 18;
        --v10;
      }
      while ( v10 );
    }
    ShadowUnLock((struct _PANDEV *)a1);
  }
}
