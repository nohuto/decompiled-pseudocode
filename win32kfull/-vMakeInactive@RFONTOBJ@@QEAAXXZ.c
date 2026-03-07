void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // edi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v13[14]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v2 + 660) )
  {
    v3 = *(_DWORD *)(v2 + 840);
    if ( v3 > 0xA )
    {
      v10 = 8 * v3 + 32;
      if ( !(_DWORD)v10 )
        return;
      v4 = (struct RFONT **)Win32AllocPoolZInit(v10, 1718382187LL);
      if ( !v4 )
        return;
      v5 = 1;
    }
    else
    {
      v4 = v13;
      v5 = 0;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v11 = 0LL;
      do
      {
        v12[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v12, 0LL);
        v12[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v12);
        v7 = v4[++v11];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      v9 = *(_QWORD *)(SGDGetSessionState(v7) + 32);
      GreAcquireSemaphore(*(_QWORD *)(v9 + 13272));
      --*(_DWORD *)(v9 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v9 + 13272));
    }
  }
}
