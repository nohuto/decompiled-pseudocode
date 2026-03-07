void __fastcall ADAPTER_DISPLAY::SetContentRect(ADAPTER_DISPLAY *this, unsigned int a2, const struct tagRECT *const a3)
{
  *(struct tagRECT *)(4000LL * a2 + *((_QWORD *)this + 16) + 628) = *a3;
  if ( *((_DWORD *)this + 36) && a3->right > a3->left )
  {
    if ( a3->left || a3->top )
    {
      if ( a2 == *((_DWORD *)this + 34) )
        *((_DWORD *)this + 36) = 2;
    }
    else
    {
      *((_DWORD *)this + 36) = 1;
      if ( a2 != *((_DWORD *)this + 34) )
      {
        *((_DWORD *)this + 34) = a2;
        if ( DmmGetMostImportantClientVidPnPathTargetsFromSource(
               *((void *const *)this + 2),
               a2,
               (unsigned int *const)this + 35) < 0 )
          *((_DWORD *)this + 36) = 3;
      }
    }
  }
}
