void __fastcall CheckAndProcessWindowResizeComplete(struct DWMSPRITE *a1, int a2, int *a3)
{
  int v5; // eax
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  SFMLOGICALSURFACE *v10; // rdi
  int v11; // edx
  int v12; // eax
  __int64 v13; // r14
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // r8
  void *v21; // rax
  void *v22; // rax
  void *v23; // rcx
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+18h] BYREF
  int v26; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  if ( a2 || !*((_DWORD *)a1 + 30) && *((_DWORD *)a1 + 29) == 1 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 18);
    if ( v6 )
    {
      if ( a2 || !(unsigned int)DwmCheckForDeferredUpdateSpriteCommands(*v6) )
      {
        v10 = (SFMLOGICALSURFACE *)*((_QWORD *)a1 + 18);
        v26 = 0;
        v25 = 0;
        v24 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v26, &v25, &v24, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *((_DWORD *)a1 + 35);
        v13 = *((_QWORD *)a1 + 13);
        v14 = *((_DWORD *)a1 + 29);
        *((_QWORD *)a1 + 13) = 0LL;
        v15 = *(_QWORD *)v10;
        v16 = *(_QWORD *)a1;
        v17 = v11 & 1;
        v18 = v11 & 0xC;
        v19 = v12 & 1 | v18 | (2 * (v17 | v12 & 0x40 | (4 * (v12 & 0xE | 0x20))));
        v21 = (void *)UserReferenceDwmApiPort(v17, v18, v20);
        DwmAsyncUpdateSprite(v21, v16, v15, v19, (__int64)a1 + 72, 0LL, v26, v25, v24, v14 >= 1, v13);
      }
      v22 = (void *)UserReferenceDwmApiPort(v8, v7, v9);
      DwmAsyncProcessSurfaceComplete(v22);
    }
    v23 = (void *)*((_QWORD *)a1 + 12);
    *((_DWORD *)a1 + 29) = 0;
    if ( v23 )
    {
      ObfDereferenceObject(v23);
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v5 = 1;
  }
  if ( a3 )
    *a3 = v5;
}
