__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0 )
    return 1LL;
  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) && (unsigned int)IsMessageOnlyWindow(CompositionInputWindowUIOwner) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  if ( CompositionInputWindowUIOwner )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
      if ( !v3 )
        break;
      v4 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( v3 == *(_QWORD *)(v5 + 24) )
          {
            if ( CompositionInputWindowUIOwner )
            {
              if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x1000) == 0
                || (v8 = 0LL, !CWindowProp::GetProp<CoreWindowProp>((__int64)CompositionInputWindowUIOwner, &v8))
                || !*(_DWORD *)(v8 + 28)
                || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(CompositionInputWindowUIOwner),
                    (CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent)) != 0LL) )
              {
                if ( (*(_BYTE *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 31LL) & 8) != 0 )
                  return 1;
              }
            }
            return v2;
          }
        }
      }
      CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
    }
  }
  return v2;
}
