__int64 __fastcall AddPublicObject(unsigned int a1, void *a2, int a3)
{
  struct tagPUBOBJ *v6; // rax
  __int64 v7; // rax
  int v8; // ecx

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v6 = IsObjectPublic(a2);
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 + 4);
      if ( v8 < 2147483646 )
      {
        *((_DWORD *)v6 + 4) = v8 + 1;
        return 1LL;
      }
      UserSetLastError(-1073741675);
    }
    else
    {
      v7 = Win32AllocPoolZInit(24LL, 878998357LL);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 16) = 1;
        *(_QWORD *)(v7 + 8) = a2;
        *(_DWORD *)(v7 + 20) = a3;
        *(_QWORD *)v7 = gpPublicObjectList;
        gpPublicObjectList = v7;
        GiveObject(a1, a2, 0);
        return 1LL;
      }
    }
  }
  return 0LL;
}
