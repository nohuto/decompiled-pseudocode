__int64 __fastcall RemovePublicObject(int a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi

  if ( a1 == 2 || a1 == 9 || a1 == 130 )
  {
    v2 = gpPublicObjectList;
    v3 = 0LL;
    while ( v2 )
    {
      if ( *(void **)(v2 + 8) == a2 )
      {
        if ( (*(_DWORD *)(v2 + 16))-- == 1 )
        {
          GiveObject(a1, a2, *(_DWORD *)(v2 + 20));
          if ( v3 )
            *v3 = *(_QWORD *)v2;
          else
            gpPublicObjectList = *(_QWORD *)v2;
          Win32FreePool((void *)v2);
        }
        return 1LL;
      }
      v3 = (_QWORD *)v2;
      v2 = *(_QWORD *)v2;
    }
  }
  return 0LL;
}
