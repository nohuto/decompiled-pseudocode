__int64 __fastcall DwmCheckForDeferredUpdateSpriteCommands(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned int v6; // r10d

  v2 = SGDGetSessionState(a1);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 32);
  v5 = 1;
  v6 = *(_DWORD *)(v4 + 9316);
  if ( v6 )
  {
    while ( *(_QWORD *)(196LL * v3 + v4 + 9488) != a1 )
    {
      if ( ++v3 >= v6 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    *(_BYTE *)(v4 + 13244) = 1;
    return 0;
  }
  return v5;
}
