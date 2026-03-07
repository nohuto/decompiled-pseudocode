char __fastcall BvgaDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 BitmapResource; // rax
  char *v10; // rcx
  char *v11; // rax

  v5 = a2;
  LOBYTE(a2) = 0;
  if ( BvgaBootDriverFullyInitialized == 1 )
    return 1;
  BootDriverLock = 0LL;
  if ( a1 == 1 && !BvgaDisplayState )
  {
    v10 = *(char **)(v5 + 216);
    LOBYTE(a2) = !v10 || (v11 = strupr(v10)) == 0LL || strstr(v11, "BOOTLOGO") == 0LL;
  }
  BvgaBootDriverInstalled = VidInitialize(a1, a2, v5);
  if ( BvgaBootDriverInstalled )
  {
    if ( a1 != 1 )
      return BvgaBootDriverInstalled;
    BvgaBootDriverFullyInitialized = 1;
    v7 = 1;
    ResourceCount = a3;
    if ( a3 > 7 )
    {
      ResourceCount = 7;
    }
    else if ( !a3 )
    {
LABEL_9:
      BvgaSaveResources();
      BvgaProgressState = 0;
      dword_140C5ECF4 = 10000;
      dword_140C5ECF8 = 100;
      return BvgaBootDriverInstalled;
    }
    do
    {
      v8 = v7 - 1;
      BitmapResource = FindBitmapResource(v7++, (char *)&ResourceSize + 4 * v8);
      ResourceList[v8] = BitmapResource;
    }
    while ( v7 <= ResourceCount );
    goto LABEL_9;
  }
  return 0;
}
