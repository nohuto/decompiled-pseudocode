/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800152B8
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001B18C (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::AddSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rbp
  _DWORD *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  ATL::CAtlException *v19; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v21; // [rsp+30h] [rbp-18h]
  int v22; // [rsp+50h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v21 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  v5 = *((_QWORD *)this + 9);
  if ( *((_QWORD *)this + 13) )
  {
LABEL_13:
    v10 = (__int64 *)*((_QWORD *)this + 13);
    v11 = *v10;
    v10[2] = (__int64)a2;
    *((_QWORD *)this + 13) = v11;
    v10[1] = 0LL;
    *v10 = v5;
    ++*((_QWORD *)this + 11);
    v12 = *((_QWORD *)this + 9);
    if ( v12 )
      *(_QWORD *)(v12 + 8) = v10;
    else
      *((_QWORD *)this + 10) = v10;
    *((_QWORD *)this + 9) = v10;
    goto LABEL_23;
  }
  v6 = *((unsigned int *)this + 28);
  if ( *((_DWORD *)this + 28) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x18 )
    {
LABEL_8:
      v7 = 0LL;
      goto LABEL_9;
    }
    v6 *= 24LL;
  }
  if ( ~v6 < 8 )
    goto LABEL_8;
  v7 = malloc(v6 + 8);
  if ( !v7 )
    goto LABEL_32;
  while ( 1 )
  {
    *v7 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v7;
LABEL_9:
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 28);
      for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
      {
        *i = *((_QWORD *)this + 13);
        *((_QWORD *)this + 13) = i;
      }
      goto LABEL_13;
    }
LABEL_32:
    try
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v17 = &v18;
      v15 = v17;
      v16 = (_DWORD *)v17[4];
      if ( *v16 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v15 + 20) = *v16;
      v4 = v22;
      if ( v22 < 0 )
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v13 + 7) & 0x40000000) != 0
          && *((_BYTE *)v13 + 25) >= 2u )
        {
          WPP_SF_d(v13[2], 0x2Au, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v4);
        }
        AudPolicyLogError("CProcess::AddSession", 3112, v4);
      }
LABEL_23:
      if ( v21 )
        LeaveCriticalSection(lpCriticalSection);
      result = v4;
    }
  }
}
