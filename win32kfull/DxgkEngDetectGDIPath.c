__int64 __fastcall DxgkEngDetectGDIPath(__int64 a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v9; // edi
  HDEV i; // rcx
  char v11; // al
  unsigned int v12; // eax
  __int64 v13; // rax
  HDEV v14; // rbx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)UserIsRemoteConnection(a1) )
    return 1LL;
  if ( ((_DWORD)a2[10] & 0x20000) != 0 )
  {
    v9 = 0;
    for ( i = 0LL; ; i = v14 )
    {
      v13 = hdevEnumerateDisplayOnly(i);
      v14 = (HDEV)v13;
      if ( !v13 )
        break;
      v16 = v13;
      if ( *(HDEV *)(v13 + 24) == a2 && (*(_DWORD *)(v13 + 40) & 0x20400) == 0 && !v9 )
      {
        v11 = PDEVOBJ::StateFlags((PDEVOBJ *)&v16);
        if ( (v11 & 8) != 0 && (v11 & 1) != 0 )
        {
          v9 = 1;
        }
        else
        {
          if ( *(_QWORD *)(*((_QWORD *)v14 + 319) + 232LL) == a1 && *((_DWORD *)v14 + 532) > 8u )
            v12 = InternalSpritesCollision(v14, a3, a4);
          else
            v12 = OverlapCheck(v14, a4);
          v9 = v12;
        }
      }
    }
  }
  else if ( *(_QWORD *)(*((_QWORD *)a2 + 319) + 232LL) == a1 && *((_DWORD *)a2 + 532) > 8u )
  {
    return (unsigned int)InternalSpritesCollision(a2, a3, a4);
  }
  else
  {
    return OverlapCheck(a2, a4);
  }
  return v9;
}
