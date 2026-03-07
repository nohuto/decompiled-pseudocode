__int64 __fastcall MilCompositionEngine_CreateCursorController(unsigned __int64 a1, struct IDwmCursorController **a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  CCursorManager *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCursorState *v10; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !g_pConnection )
  {
    v4 = -2147483634;
    v5 = 34LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v10 = 0LL;
  v11 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  v8 = CCursorManager::EnsureCursorState(v7, a1, &v10);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v4 = 0;
    *a2 = v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
      (const char *)(unsigned int)v8);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  if ( v4 < 0 )
  {
    v5 = 35LL;
    goto LABEL_3;
  }
  return 0LL;
}
