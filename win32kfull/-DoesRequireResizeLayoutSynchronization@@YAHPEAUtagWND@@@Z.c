__int64 __fastcall DoesRequireResizeLayoutSynchronization(struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // r8d
  __int64 i; // rcx

  if ( IsTopLevelWindow((__int64)a1) && *(char *)(*(_QWORD *)(v1 + 40) + 25LL) < (char)v2 )
  {
    for ( i = *(_QWORD *)(v1 + 112); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(char *)(*(_QWORD *)(i + 40) + 25LL) < (char)v2 )
        return 1;
    }
  }
  return v2;
}
