/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001F6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x18000FBC8 (WPP_SF_Sd.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180012D98 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B50C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001FA04 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rbx
  struct CApplication *v6; // rdi
  BOOL v7; // r15d
  int v8; // edx
  int v9; // ecx
  bool v10; // sf
  char v12[4]; // [rsp+20h] [rbp-28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *(_QWORD *)a2;
  v6 = *(struct CApplication **)(*(_QWORD *)a2 + 256LL);
  if ( v6
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), (v6 = *(struct CApplication **)(v5 + 256)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v12 = *((_DWORD *)a2 + 2);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        &WPP_386a857d2e283c5fe15986819513c374_Traceguids,
        *(const wchar_t **)(v5 + 208),
        *(_DWORD *)v12);
    }
    v7 = *((_DWORD *)v6 + 52) != 0;
    v8 = *((_DWORD *)a2 + 2);
    if ( !*(_DWORD *)(v5 + 448) )
    {
      v9 = v8 != 0 ? -1 : 1;
      v10 = v9 + *(_DWORD *)(v5 + 540) < 0;
      *(_DWORD *)(v5 + 540) += v9;
      if ( v10 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Au, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids);
        }
        *(_DWORD *)(v5 + 540) = 0;
      }
      else
      {
        CApplication::CastingStateChanged(*(CApplication **)(v5 + 256), v8 != 0 ? -1 : 1);
      }
    }
    if ( v7 != (*((_DWORD *)v6 + 52) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
