__int64 __fastcall bSpDwmNotifyDirty(HSPRITE a1, struct SFMLOGICALSURFACE *a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // ebx
  void *v14; // rax

  v6 = 0;
  v7 = 0;
  v8 = SFMLOGICALSURFACE::bDeviceBitmap(a2);
  v11 = 1;
  v12 = v10 & 0xFFFFFFFE;
  if ( !v8 )
    v12 = v10;
  v13 = v12;
  if ( (v12 & 1) != 0 && (unsigned __int8)bShouldUseSfmTokenArray(*(unsigned int *)(v9 + 252)) )
  {
    v6 = GreAddLogicalSurfaceToDirtyQueue(*(HLSURF *)a2);
    v13 = v12 & 0xFFFFFFFE;
  }
  if ( v13 )
  {
    v14 = (void *)UserReferenceDwmApiPort();
    v7 = DwmAsyncDirtySprite(v14, a4);
  }
  if ( v6 < 0 || v7 < 0 )
    return 0;
  return v11;
}
