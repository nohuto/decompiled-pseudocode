__int64 __fastcall CInputManager::UpdatePointerCapture(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v5 = 0;
  if ( g_pInputManager )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (CInputManager *)((char *)g_pInputManager + 120));
    v6 = *((_DWORD *)g_pInputManager + 28);
    if ( v6 )
    {
      do
      {
        if ( **(_DWORD **)(*((_QWORD *)g_pInputManager + 13) + 8LL * v5) == a2 )
          break;
        ++v5;
      }
      while ( v5 < v6 );
    }
    if ( v5 >= v6 )
    {
      if ( a1 )
      {
        v8 = __PAIR64__(a1, a2);
        v2 = CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt((__int64)g_pInputManager + 104, &v8, v6);
      }
    }
    else if ( a1 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)g_pInputManager + 13) + 8LL * v5) + 4LL) = a1;
    }
    else
    {
      CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((__int64)g_pInputManager + 104, v5);
    }
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
