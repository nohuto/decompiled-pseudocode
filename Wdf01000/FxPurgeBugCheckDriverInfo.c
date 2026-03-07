void __fastcall FxPurgeBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  __int64 BugCheckDriverInfoIndex; // rbx
  KIRQL v4; // si
  _FX_DRIVER_GLOBALS **v5; // rcx
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  BugCheckDriverInfoIndex = FxDriverGlobals->BugCheckDriverInfoIndex;
  v4 = v2;
  if ( (_DWORD)BugCheckDriverInfoIndex )
  {
    if ( Src )
    {
      if ( (unsigned int)BugCheckDriverInfoIndex < dword_1C009FEB0 )
      {
        v5 = (_FX_DRIVER_GLOBALS **)((char *)Src + 56 * BugCheckDriverInfoIndex);
        if ( *v5 == FxDriverGlobals )
        {
          if ( dword_1C009FEB0 - (_DWORD)BugCheckDriverInfoIndex != 1 )
            memmove(v5, v5 + 7, 56LL * (dword_1C009FEB0 - (unsigned int)BugCheckDriverInfoIndex - 1));
          if ( (unsigned int)BugCheckDriverInfoIndex < --dword_1C009FEB0 )
          {
            do
            {
              v6 = (unsigned int)BugCheckDriverInfoIndex;
              LODWORD(BugCheckDriverInfoIndex) = BugCheckDriverInfoIndex + 1;
              --*(_DWORD *)(*((_QWORD *)Src + 7 * v6) + 356LL);
            }
            while ( (unsigned int)BugCheckDriverInfoIndex < dword_1C009FEB0 );
          }
        }
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, v4);
}
