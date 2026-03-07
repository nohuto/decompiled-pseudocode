void __fastcall OBJECT::SwapShareCount(struct OBJECT *a1, struct OBJECT *a2)
{
  int v2; // r8d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v2;
  v5 = SGDGetSessionState(a1);
  if ( *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                    *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v5 + 24) + 8008LL),
                    a1)
       + 14) == 5
    && (v7 = SGDGetSessionState(v6),
        *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                     *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v7 + 24) + 8008LL),
                     a1)
        + 14) == 5) )
  {
    v8 = *((_QWORD *)a1 + 85);
    *((_QWORD *)a1 + 85) = *((_QWORD *)a2 + 85);
    *((_QWORD *)a2 + 85) = v8;
  }
  else
  {
    v9 = SGDGetSessionState(v6);
    if ( *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v9 + 24) + 8008LL),
                      a1)
         + 14) == 16 )
      SGDGetSessionState(v10);
  }
}
