__int64 __fastcall DpiBrightness3Set(_QWORD *a1, unsigned int a2, struct _DXGK_BRIGHTNESS_SET_IN *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4408), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    if ( *(_WORD *)(v3 + 4682) == 3 )
      v9 = v3 + 4680;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct _DXGK_BRIGHTNESS_SET_IN *))(v9 + 32);
      if ( v10 )
        v8 = v10(*(_QWORD *)(v9 + 8), a2, a3);
      else
        v8 = -1073741661;
    }
    else
    {
      v8 = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4408), 0);
  return v8;
}
